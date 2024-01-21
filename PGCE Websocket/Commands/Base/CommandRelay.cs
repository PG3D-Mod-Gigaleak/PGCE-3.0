using System;
using WebSocketSharp;
using Newtonsoft.Json;
using WebSocketSharp.Server;

public class CommandRelay
{
	public static Dictionary<string, BaseCommand> commands = new Dictionary<string, BaseCommand>{
		{"ensure_ws_alive", new EnsureAliveCommand()},
		{"create_user", new CreateUserCommand()},
	};
	public static Dictionary<string, object> Run(string command_name, WebSocketBehavior original_behavior, Dictionary<string, object> parameters, PlayerSession? sender)
	{
		if (commands.ContainsKey(command_name))
		{
			if (commands[command_name] != null)
			{
				return commands[command_name].Run(original_behavior, parameters, sender);
			}
		}
		else
		{
			Console.WriteLine($"Command `{command_name}` does not exist!");
		}
		return default;
	}
}