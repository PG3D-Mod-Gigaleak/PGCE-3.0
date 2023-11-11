using System;
using Newtonsoft.Json;
using WebSocketSharp;
using WebSocketSharp.Server;

public class BaseCommand
{
	public Dictionary<string, object> output = new Dictionary<string, object>();
	public BaseCommand()
	{
		CommandRelay.commands.Add(command_name, GetType());
	}
	public virtual string command_name { get; }
	public virtual Dictionary<string, object> Run(WebSocketBehavior caller_behavior, Dictionary<string, object> parameters, PlayerSession? sender)
	{
		return default;
	}
}