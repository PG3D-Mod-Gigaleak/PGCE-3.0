using System;
using Newtonsoft.Json;
using PGCE;
using WebSocketSharp;
using WebSocketSharp.Server;

public class CreateUserCommand : BaseCommand
{
	public CreateUserCommand() : base()
	{
		
	}
	public override string command_name 
	{ 
		get
		{
			return "create_user";
		}
	}
	public override Dictionary<string, object> Run(WebSocketBehavior caller_behavior, Dictionary<string, object> parameters, PlayerSession? sender)
	{
		AccountParameters? result = Helpers.CreateAccount();
		if (result == null) {
			throw new Exception("Result was NULL!");
		}
		output["givenID"] = $"{((AccountParameters)result).ID}";
		output["authcret"] = $"{((AccountParameters)result).AuthKey}";
		output["response"] = "success";
		return output;
	}
}