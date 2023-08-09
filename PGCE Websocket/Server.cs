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
            Console.WriteLine($"------------------------------------------------------------");
            Console.WriteLine($"[Action::OnMessage] Received message");
            Dictionary<string, object> givenInput = JsonConvert.DeserializeObject<Dictionary<string, object>>(e.Data);
            if (givenInput == null) {
                Send("-X-");
            }
            string action = (string)givenInput["action"];
            Console.WriteLine($"[Action::OnMessage] Received request for action {action}");
            Dictionary<string, object> output = new Dictionary<string, object>();
            if (action == "ensure_ws_alive")
            {
                output["response"] = "success";
            }
            else if (action == "create_user")
            {
                try
                {
                    long? result = Helpers.CreateAccount();
                    if (result == null) {
                        throw new Exception("Result was NULL!");
                    }
                    output["givenID"] = $"{result}";
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
            Send(JsonConvert.SerializeObject(output));
            Console.WriteLine($"[Action::OnMessage] Finalized request for action {action}");
            Console.WriteLine($"[Action::OnMessage] Output: {JsonConvert.SerializeObject(output)}");
        }
    }

    public class Server
    {
        private const bool IsProduction = false;
        private const bool ClearDatabase = true;
        public static SQLiteConnection? DB { get; set; }
        public static SQLiteCommand? CMD { get; set; }
        private static void InitDB()
        {
            if (!IsProduction || ClearDatabase)
            {
                SQLiteConnection.CreateFile("db.sqlite");
                string connectionString = "Data Source=db.sqlite;Version=3;";
                DB = new SQLiteConnection(connectionString);
                DB.Open();
                CMD = new SQLiteCommand(DB);
                CMD.CommandText = "CREATE TABLE Users(id INTEGER PRIMARY KEY AUTOINCREMENT, name TEXT, coins INTEGER)";
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
            Console.ReadKey(true);
            Console.WriteLine("[Server] Stopping server");
            wssv.Stop();
            DB.Close();
            Console.WriteLine("[Server] Server stopped");
        }
    }
}