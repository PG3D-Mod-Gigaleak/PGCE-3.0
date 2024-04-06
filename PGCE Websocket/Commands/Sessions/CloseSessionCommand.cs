using System;
using Newtonsoft.Json;
using WebSocketSharp;
using WebSocketSharp.Server;

public class CloseSessionCommand : BaseCommand
{
	public CloseSessionCommand() : base("close_session")
	{
		
	}
	public override Dictionary<string, object> Run(WebSocketBehavior caller_behavior, Dictionary<string, object> parameters, PlayerSession? sender)
	{
		if (sender.HasValue)
		{
			PGCE.PlayerSessionManager.DestroySession(sender.Value.SessionID);
			output["response"] = "success";
		}
		else
		{
			throw new Exception("Sender was NULL!");
		}
		return output;
	}
}