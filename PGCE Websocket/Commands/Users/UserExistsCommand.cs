using System;
using Newtonsoft.Json;
using PGCE;
using WebSocketSharp;
using WebSocketSharp.Server;

public class UserExistsCommand : BaseCommand
{
	public UserExistsCommand() : base("user_exists")
	{
		
	}
	public override Dictionary<string, object> Run(WebSocketBehavior caller_behavior, Dictionary<string, object> parameters, PlayerSession? sender)
	{
		AccountParameters? result = Helpers.GetAccountInfo(parameters["uid"]);
		if (result == null) {
			throw new Exception("User does not exist!");
		}
		AccountParameters confirmedResult = (AccountParameters)result;
		if (!Helpers.MatchingHash2Nonhash((string)parameters["ak"], confirmedResult.AuthKey))
			throw new Exception("Authkey invalid");
		output["response"] = "success";
		return output;
	}
}