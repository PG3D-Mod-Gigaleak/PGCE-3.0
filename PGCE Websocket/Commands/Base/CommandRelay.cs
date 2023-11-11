using System;
using WebSocketSharp;
using Newtonsoft.Json;
using WebSocketSharp.Server;

public class CommandRelay
{
	public static Dictionary<string, Type> commands = new Dictionary<string, Type>{};
	public static Dictionary<string, object> Run(string command_name, WebSocketBehavior original_behavior, Dictionary<string, object> parameters, PlayerSession? sender)
	{
		if (commands.ContainsKey(command_name))
		{
			Type c = commands[command_name];
			BaseCommand new_command_instance = (BaseCommand)c.GetConstructor(System.Reflection.BindingFlags.Default, Type.EmptyTypes).Invoke(null, null);
			if (new_command_instance != null)
			{
				return new_command_instance.Run(original_behavior, parameters, sender);
			}
		}
		else
		{
			Console.WriteLine($"Command `{command_name}` does not exist!");
		}
		return default;
	}
}