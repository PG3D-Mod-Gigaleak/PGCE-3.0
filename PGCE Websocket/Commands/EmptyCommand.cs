using System;
using Newtonsoft.Json;
using WebSocketSharp;
using WebSocketSharp.Server;

public class EmptyCommand : BaseCommand
{
	public EmptyCommand() : base("DEFAULT")
	{
		
	}
	public override Dictionary<string, object> Run(WebSocketBehavior caller_behavior, Dictionary<string, object> parameters, PlayerSession? sender)
	{
		return default;
	}
}