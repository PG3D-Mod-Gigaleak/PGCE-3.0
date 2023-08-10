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
			newCmd.CommandText = "INSERT INTO Users(name, authkey, coins, banned) VALUES('Player', @authkey, 15, 0) RETURNING id";
			string uuid = Guid.NewGuid().ToString();
			newCmd.Parameters.Add(new SQLiteParameter("@authkey", SHA384Hash(uuid)));
			object result = newCmd.ExecuteScalar();
			if (result == null) {
				return null;
			}
			Console.WriteLine($"Created account! Resulting ID is {result}");
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
				return true;
			}
			catch (Exception e)
			{
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
			newCmd.CommandText = "SELECT name, authkey, coins, banned FROM Users WHERE id = @id";
			newCmd.Parameters.Add(new SQLiteParameter("@id", id));
			SQLiteDataReader result = newCmd.ExecuteReader();
			if (result.Read())
			{
				AccountParameters foundUserData = new AccountParameters(id, (string)result["authkey"]);
				foundUserData.Coins = (long)result["coins"];
				foundUserData.Name = (string)result["name"];
				foundUserData.Banned = ((long)result["banned"] == 0 ? false : true);
				return foundUserData;
			}
			else
			{
				return null;
			}
		}
	}
}