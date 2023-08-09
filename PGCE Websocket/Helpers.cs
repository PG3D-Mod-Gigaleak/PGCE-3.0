using System;
using System.Data.SQLite;
using WebSocketSharp;
using WebSocketSharp.Server;
using Newtonsoft.Json;

namespace PGCE
{
    public class Helpers
    {
        // set this up with parameters & shit
        // INTEGER is "long" in c# for some reason, don't ask
        public static long? CreateAccount()
        {
            Console.WriteLine("Creating account");
            Server.CMD.CommandText = "INSERT INTO Users(name, coins) VALUES('Player', 15) RETURNING id";
            object result = Server.CMD.ExecuteScalar();
            if (result == null) {
                return null;
            }
            Console.WriteLine($"Created account! Resulting ID is {result}");
            return (long)result;
        }
    }
}