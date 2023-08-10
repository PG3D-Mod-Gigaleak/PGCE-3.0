using System;
using System.Data.SQLite;
using WebSocketSharp;
using WebSocketSharp.Server;
using Newtonsoft.Json;

namespace PGCE
{
	public class Action : WebSocketBehavior
	{
		protected override void OnMessage(MessageEventArgs e)
		{
			Server.SessionsBridge = Sessions;
			Console.WriteLine($"------------------------------------------------------------");
			Console.WriteLine($"[Action::OnMessage] Received message");
			Dictionary<string, object> givenInput = JsonConvert.DeserializeObject<Dictionary<string, object>>(e.Data);
			if (givenInput == null) {
				Send("-X-");
			}
			givenInput = Encryption.Decrypt(givenInput);
			string action = (string)givenInput["action"];
			Console.WriteLine($"[Action::OnMessage] Received request for action {action}");
			Dictionary<string, object> output = new Dictionary<string, object>();
			if (action == "ensure_ws_alive")
			{
				output["response"] = "success";
			}
			else if (action == "close_session")
			{
				output["response"] = "success";
			}
			else if (action == "create_user")
			{
				try
				{
					AccountParameters? result = Helpers.CreateAccount();
					if (result == null) {
						throw new Exception("Result was NULL!");
					}
					output["givenID"] = $"{((AccountParameters)result).ID}";
					output["authcret"] = $"{((AccountParameters)result).AuthKey}";
					output["response"] = "success";
				}
				catch (Exception exception)
				{
					output["response"] = "failed";
					output["cause"] = $"{exception.Message}";
				}
			}
			else if (action == "user_banned")
			{
				try
				{
					AccountParameters? result = Helpers.GetAccountInfo(givenInput["uid"]);
					if (result == null) {
						throw new Exception("Result was NULL!");
					}
					AccountParameters confirmedResult = (AccountParameters)result;
					if (!Helpers.MatchingHash2Nonhash((string)givenInput["ak"], confirmedResult.AuthKey))
						throw new Exception("Authkey invalid");
					output["banned"] = confirmedResult.Banned;
					output["response"] = "success";
				}
				catch (Exception exception)
				{
					output["response"] = "failed";
					output["cause"] = $"{exception.Message}";
				}
			}
			else if (action == "user_exists")
			{
				try
				{
					AccountParameters? result = Helpers.GetAccountInfo(givenInput["uid"]);
					if (result == null) {
						throw new Exception("User does not exist!");
					}
					AccountParameters confirmedResult = (AccountParameters)result;
					if (!Helpers.MatchingHash2Nonhash((string)givenInput["ak"], confirmedResult.AuthKey))
						throw new Exception("Authkey invalid");
					output["response"] = "success";
				}
				catch (Exception exception)
				{
					output["response"] = "failed";
					output["cause"] = $"{exception.Message}";
				}
			}
			else if (action == "request_connection")
			{
				try
				{
					AccountParameters? result = Helpers.GetAccountInfo(givenInput["uid"]);
					if (result == null) {
						throw new Exception("User does not exist!");
					}
					AccountParameters confirmedResult = (AccountParameters)result;
					if (!Helpers.MatchingHash2Nonhash((string)givenInput["ak"], confirmedResult.AuthKey))
						throw new Exception("Authkey invalid");
					if (Helpers.AccountBanned(confirmedResult))
						throw new Exception("The account is banned");
					// TEMPORARY!!! HAVE TO SWITCH TO DYNAMIC SETTINGS AT ONE POINT FOR MORE SECURITY I GUESS
					if (Convert.ToString((string)givenInput["coop"]) == "1")
						output["settings"] = "v3.11COOP";
					else
						output["settings"] = "v3.11";
					output["response"] = "success";
				}
				catch (Exception exception)
				{
					output["response"] = "failed";
					output["cause"] = $"{exception.Message}";
				}
			}
			else
			{
				output["response"] = "failed";
				output["cause"] = $"Unimplemented action {action}";
			}
			Send(JsonConvert.SerializeObject(Encryption.Encrypt(output)));
			Console.WriteLine($"[Action::OnMessage] Finalized request for action {action}");
			Console.WriteLine($"[Action::OnMessage] Output: {JsonConvert.SerializeObject(output)}");
		}
	}

	public class Server
	{
		private const bool IsProduction = false;
		private const bool ClearDatabase = false;
		public static SQLiteConnection? DB { get; set; }
		public static SQLiteCommand? CMD { get; set; }
		public static WebSocketSessionManager SessionsBridge { get; set; }
		private static void InitDB(bool clearNoMatterWhat = false)
		{
			if (ClearDatabase || clearNoMatterWhat)
			{
				SQLiteConnection.CreateFile("db.sqlite");
				string connectionString = "Data Source=db.sqlite;Version=3;";
				DB = new SQLiteConnection(connectionString);
				DB.Open();
				CMD = new SQLiteCommand(DB);
				CMD.CommandText = "CREATE TABLE Users(id INTEGER PRIMARY KEY AUTOINCREMENT, name TEXT, authkey TEXT, coins INTEGER, banned INTEGER)";
				CMD.ExecuteNonQuery();
			}
			else 
			{
				// vscode whines about "unreachable code", just ignore because production is gonna reach it
				string connectionString = "Data Source=db.sqlite;Version=3;";
				DB = new SQLiteConnection(connectionString);
				DB.Open();
				CMD = new SQLiteCommand(DB);
			}
		}
		public static void Main(string[] args)
		{
			InitDB();
			var wssv = new WebSocketServer(8083);
			wssv.AddWebSocketService<Action>("/action");
			wssv.Start();
			Console.WriteLine("[Server] Started server successfully");
			while (true)
			{
				string? line = Console.ReadLine();
				if (line == null)
					continue;
				if (line == "stop")
					break;
				if (line == "clear-db")
				{
					InitDB(true);
				}
				if (line.StartsWith("."))
				{
					List<string> commandWArgs = line.Split('"')
						.Select((element, index) => index % 2 == 0
							? element.Split(new[] { ' ' }, StringSplitOptions.RemoveEmptyEntries)
							: new string[] { element })
						.SelectMany(element => element).ToList();
					string command = commandWArgs[0];
					if (command == ".unban_user")
					{
						if (commandWArgs.Count > 1)
						{
							long id = 0;
							if (!long.TryParse(commandWArgs[1], out id))
							{
								Console.WriteLine("[COMMAND::UNBAN_USER] Given User ID is invalid!");
								continue;
							}
							SQLiteCommand newCmd = new SQLiteCommand(Server.DB);
							newCmd.CommandText = "UPDATE Users SET banned = 0 WHERE id = @id";
							newCmd.Parameters.Add(new SQLiteParameter("@id", id));
							newCmd.ExecuteNonQuery();
							Console.WriteLine($"[COMMAND::UNBAN_USER] Unbanned user {Helpers.GetAccountInfo(id).Value.Name}");
						}
					}
					if (command == ".ban_user")
					{
						if (commandWArgs.Count > 1)
						{
							long id = 0;
							if (!long.TryParse(commandWArgs[1], out id))
							{
								Console.WriteLine("[COMMAND::BAN_USER] Given User ID is invalid!");
								continue;
							}
							if (Helpers.BanAccount(id))
							{
								Console.WriteLine($"[COMMAND::BAN_USER] Banned user {Helpers.GetAccountInfo(id).Value.Name}");
							}
							else
							{
								Console.WriteLine($"[COMMAND::BAN_USER] User going by that ID doesn't exist!");
							}
						}
					}
				}
			}
			Console.WriteLine("[Server] Stopping server");
			Dictionary<string, object> output = new Dictionary<string, object>();
			output["type"] = "send";
			output["action"] = "alert-downtime";
			output["response"] = "success";
			Server.SessionsBridge.Broadcast(JsonConvert.SerializeObject(Encryption.Encrypt(output)));
			wssv.Stop();
			DB.Close();
			Console.WriteLine("[Server] Server stopped");
		}
	}
}