using System;
using System.Data.SQLite;
using WebSocketSharp;
using WebSocketSharp.Server;
using Newtonsoft.Json;

namespace PGCE
{
	public struct AccountParameters
	{
		public long ID;
		public string Name;
		public string AuthKey;
		public bool Banned;
		public long Coins;
		public AccountParameters(long id, string authkey)
		{
			this.Name = "";
			this.Banned = false;
			this.Coins = 15;
			this.ID = id;
			this.AuthKey = authkey;
		}
	}
}