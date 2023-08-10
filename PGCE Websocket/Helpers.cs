using System;
using System.Data.SQLite;
using WebSocketSharp;
using WebSocketSharp.Server;
using Newtonsoft.Json;
using System.Security.Cryptography;
using System.Text;

namespace PGCE
{
	public class Helpers
	{
		// set this up with parameters & shit
		// INTEGER is "long" in c# for some reason, don't ask
		public static AccountParameters? CreateAccount()
		{
			Console.WriteLine("Creating account");
			SQLiteCommand newCmd = new SQLiteCommand(Server.DB);
			newCmd.CommandText = "INSERT INTO Users(name, authkey, coins, banned, catequiplist, achievements, boughtWeapons) VALUES('Player', @authkey, 15, 0, @defaultcatequiplist, @defaultachievements, @defaultboughtweapons) RETURNING id";
			string uuid = Guid.NewGuid().ToString();
			newCmd.Parameters.Add(new SQLiteParameter("@authkey", SHA384Hash(uuid)));
			newCmd.Parameters.Add(new SQLiteParameter("@defaultcatequiplist", JsonConvert.SerializeObject(new PG3D.Serialization.CategoryEquipList())));
			newCmd.Parameters.Add(new SQLiteParameter("@defaultachievements", JsonConvert.SerializeObject(new List<string>())));
			newCmd.Parameters.Add(new SQLiteParameter("@defaultboughtweapons", JsonConvert.SerializeObject(new List<string>(){"Weapon1", "Weapon2", "Weapon9"})));
			object result = newCmd.ExecuteScalar();
			if (result == null) {
				return null;
			}
			Console.WriteLine($"Created account! Resulting ID is {result}, Authkey is {uuid} (maybe account is reserved?)");
			return new AccountParameters((long)result, uuid);
		}
		public static string SHA384Hash(string a)
		{
			SHA384 hasher = SHA384.Create();
			byte[] bytes = Encoding.UTF8.GetBytes(a);
			byte[] hashBytes = hasher.ComputeHash(bytes);
			string plaintext = "";
			foreach (byte hashByte in hashBytes) {
				plaintext += hashByte.ToString("x2");
			}
			return plaintext;
		}
		public static bool MatchingHash2Nonhash(string a, string b)
		{
			return SHA384Hash(a) == b;
		}
		public static bool AccountExists(long id)
		{
			if (GetAccountInfo(id) == null)
				return false;
			return true;
		}
		public static bool AccountBanned(long id)
		{
			if (GetAccountInfo(id) == null)
				return false;
			return ((AccountParameters)GetAccountInfo(id)).Banned;
		}
		public static bool AccountBanned(AccountParameters accountParameters)
		{
			return accountParameters.Banned;
		}
		public static bool BanAccount(long id)
		{
			if (GetAccountInfo(id) == null)
				return false;
			try 
			{
				SQLiteCommand newCmd = new SQLiteCommand(Server.DB);
				newCmd.CommandText = "UPDATE Users SET banned = 1 WHERE id = @id";
				newCmd.Parameters.Add(new SQLiteParameter("@id", id));
				newCmd.ExecuteNonQuery();
				if (Server.SessionsBridge != null)
				{
					Dictionary<string, object> output = new Dictionary<string, object>();
					output["bannedID"] = $"{id}";
					output["type"] = "send";
					output["action"] = "alert-ban";
					output["response"] = "success";
					Server.SessionsBridge.Broadcast(JsonConvert.SerializeObject(Encryption.Encrypt(output)));
				}
				return true;
			}
			catch (Exception e)
			{
				Console.WriteLine($"[Helpers::BanAccount] Error while banning: {e.Message}");
				return false;
			}
		}
		public static bool UpdateParameters(long id, AccountParameters newParameters)
		{
			if (GetAccountInfo(id) == null)
				return false;
			try 
			{
				SQLiteCommand newCmd = new SQLiteCommand(Server.DB);
				// expand this once we have more parameters
				newCmd.CommandText = "UPDATE Users SET name = @newname, coins = @newcoins, catears = @newcatears, skin = @newskin, catequiplist = @newcatequiplist, achievements = @newachievements, boughtWeapons = @newboughtweapons WHERE id = @id";
				newCmd.Parameters.Add(new SQLiteParameter("@id", id));
				newCmd.Parameters.Add(new SQLiteParameter("@newname", newParameters.Name));
				newCmd.Parameters.Add(new SQLiteParameter("@newcoins", newParameters.Coins));
				newCmd.Parameters.Add(new SQLiteParameter("@newcatears", newParameters.CatEars));
				newCmd.Parameters.Add(new SQLiteParameter("@newskin", newParameters.SkinData));
				newCmd.Parameters.Add(new SQLiteParameter("@newcatequiplist", JsonConvert.SerializeObject(newParameters.CategoryEquipList)));
				newCmd.Parameters.Add(new SQLiteParameter("@newachievements", JsonConvert.SerializeObject(newParameters.Achievements)));
				newCmd.Parameters.Add(new SQLiteParameter("@newboughtweapons", JsonConvert.SerializeObject(newParameters.BoughtWeapons)));
				Server.SendEmbed("Player Parameters Updated", $"The ID {id} is updating account parameters", 0xFFFF00, new dField[]{
					new dField("New username", newParameters.Name, false),
					new dField("New coin count", Convert.ToString(newParameters.Coins), false),
				});
				newCmd.ExecuteNonQuery();
				return true;
			}
			catch (Exception e)
			{
				Console.WriteLine($"[Helpers::BanAccount] Error while banning: {e.Message}");
				return false;
			}
		}
		public static AccountParameters? GetAccountInfo(object id)
		{
			return GetAccountInfo(Convert.ToInt64(Convert.ToString(id)));
		}
		public static AccountParameters? GetAccountInfo(long id)
		{
			SQLiteCommand newCmd = new SQLiteCommand(Server.DB);
			newCmd.CommandText = "SELECT name, authkey, coins, banned, catears, skin, catequiplist, achievements, boughtWeapons, isadmin FROM Users WHERE id = @id";
			newCmd.Parameters.Add(new SQLiteParameter("@id", id));
			SQLiteDataReader result = newCmd.ExecuteReader();
			if (result.Read())
			{
				AccountParameters foundUserData = new AccountParameters(id, (string)result["authkey"]);
				foundUserData.Coins = (long)result["coins"];
				foundUserData.Name = (string)result["name"];
				foundUserData.SkinData = (string)result["skin"];
				foundUserData.CategoryEquipList = JsonConvert.DeserializeObject<PG3D.Serialization.CategoryEquipList>((string)result["catequiplist"]);
				foundUserData.Achievements = JsonConvert.DeserializeObject<List<string>>((string)result["achievements"]);
				foundUserData.BoughtWeapons = JsonConvert.DeserializeObject<List<string>>((string)result["boughtWeapons"]);
				foundUserData.Banned = ((long)result["banned"] == 0 ? false : true);
				foundUserData.CatEars = ((long)result["catears"] == 0 ? false : true);
				foundUserData.IsAdmin = ((long)result["isadmin"] == 0 ? false : true);
				return foundUserData;
			}
			else
			{
				return null;
			}
		}
	}
}