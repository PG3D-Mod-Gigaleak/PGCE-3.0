using System;
using Newtonsoft.Json;
using PGCE;
using WebSocketSharp;
using WebSocketSharp.Server;

public class UserBannedCommand : BaseCommand
{
	public UserBannedCommand() : base("user_banned")
	{
		
	}
	public override Dictionary<string, object> Run(WebSocketBehavior caller_behavior, Dictionary<string, object> parameters, PlayerSession? sender)
	{
		AccountParameters? result = Helpers.GetAccountInfo(parameters["uid"]);
		if (result == null) {
			throw new Exception("Result was NULL!");
		}
		AccountParameters confirmedResult = (AccountParameters)result;
		if (!Helpers.MatchingHash2Nonhash((string)parameters["ak"], confirmedResult.AuthKey))
			throw new Exception("Authkey invalid");
		output["banned"] = confirmedResult.Banned;
		output["response"] = "success";
		return output;
	}
}