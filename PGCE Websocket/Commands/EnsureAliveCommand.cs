using System;
using Newtonsoft.Json;
using PGCE;
using WebSocketSharp;
using WebSocketSharp.Server;

public class EnsureAliveCommand : BaseCommand
{
	public EnsureAliveCommand() : base("ensure_ws_alive")
	{
		
	}
	public override Dictionary<string, object> Run(WebSocketBehavior caller_behavior, Dictionary<string, object> parameters, PlayerSession? sender)
	{
		PlayerSession GenSession = PlayerSessionManager.CreateNewSession();
		Console.WriteLine($"[DEBUG] params null? ${parameters == null}");
		if (parameters.ContainsKey("uid") && parameters.ContainsKey("ak"))
		{
			AccountParameters? result = Helpers.GetAccountInfo(parameters["uid"]);
			if (result == null) {
				throw new Exception("Result was NULL!");
			}
			AccountParameters confirmedResult = (AccountParameters)result;
			if (!Helpers.MatchingHash2Nonhash((string)parameters["ak"], confirmedResult.AuthKey))
				throw new Exception("Authkey invalid");
			if (Helpers.AccountBanned(confirmedResult))
				throw new Exception("The account is banned");
		}
		output["s_id"] = GenSession.SessionID;
		output["d_ky"] = GenSession.DecryptionKey;
		output["response"] = "success";
        return output;
	}
}