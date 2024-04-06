using System;
using Newtonsoft.Json;
using PGCE;
using SixLabors.ImageSharp;
using WebSocketSharp;
using WebSocketSharp.Server;

public class UpdatePlayerCommand : BaseCommand
{
	public UpdatePlayerCommand() : base("update_player")
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
		if (Helpers.AccountBanned(confirmedResult))
			throw new Exception("The account is banned");
		if (parameters.ContainsKey("newname"))
		{
			string r = PG3D.FilterBadWorld.FilterString((string)parameters["newname"]);
			confirmedResult.Name = r.Substring(0, Math.Clamp(r.Length, 0, 20)).RemoveColorCode();
		}
		if (parameters.ContainsKey("newskin"))
		{
			string sk = (string)parameters["newskin"];
			if (sk.Length > 522240) // 64 * 32 * 255, just to be 100% sure
				throw new Exception("Not allowed");
			
			// check if image size is actually 64x32
			byte[] bytes = Convert.FromBase64String(sk);
			using (MemoryStream ms = new MemoryStream(bytes))  
			{
				using Image skin = Image.Load(ms);
				if (skin.Size.Width != 64 && skin.Size.Height != 32)
					throw new Exception("Not allowed");
			}
		}
		if (parameters.ContainsKey("newcoins"))
			confirmedResult.Coins = Convert.ToInt64((string)parameters["newcoins"]);
		if (parameters.ContainsKey("newcatears"))
			confirmedResult.CatEars = Convert.ToBoolean((string)parameters["newcatears"]);
		if (parameters.ContainsKey("newskin"))
			confirmedResult.SkinData = (string)parameters["newskin"];
		Helpers.UpdateParameters(Convert.ToInt64((string)parameters["uid"]), confirmedResult);
		if (parameters.ContainsKey("newname"))
			output["name_set"] = confirmedResult.Name;
		if (parameters.ContainsKey("newcoins"))
			output["coins_set"] = confirmedResult.Coins;
		if (parameters.ContainsKey("newcatears"))
			output["catears_set"] = confirmedResult.CatEars;
		if (parameters.ContainsKey("newskin"))
			output["skin_set"] = confirmedResult.SkinData;
		output["response"] = "success";
		return output;
	}
}