#if USES_WEBSOCKET
using UnityEngine;
using Newtonsoft.Json;
using System.Collections.Generic;
using System;
using System.Collections;
using handler.networking;

namespace handler.data
{
	public class UserController : MonoBehaviour
	{
		public static UserController Instance;
		public long ID;
		public string AuthKey;
		public static void Init()
		{
			GameObject usC = new GameObject("UserController");
			usC.AddComponent<UserController>();
			DontDestroyOnLoad(usC);
		}
		public void Start()
		{
			Instance = this;
			Instance.StartCoroutine(Instance.CheckUserExists());
		}
		public IEnumerator CheckUserExists()
		{
			Debug.Log("[UserController::CheckUserExists] Callback reached");
			if (Storager.hasKey("plr_uid") && Storager.hasKey("plr_nhguXrl"))
			{
				bool userIsValid = false;
				bool validChecked = false;
				Dictionary<string, object> checkArgs = new Dictionary<string, object>();
				checkArgs["uid"] = System.Convert.ToInt64(Storager.getString("plr_uid", false));
				checkArgs["ak"] = (string)Storager.getString("plr_nhguXrl", false);
				WebsocketHandler.CallAction("user_exists", (string data) => {
					Dictionary<string, object> resultDictionary = WebsocketHandler.Decrypt(JsonConvert.DeserializeObject<Dictionary<string, object>>(data));
					if ((string)resultDictionary["response"] == "success")
					{
						ID = System.Convert.ToInt64(Storager.getString("plr_uid", false));
						AuthKey = (string)Storager.getString("plr_nhguXrl", false);
						userIsValid = true;
					}
					validChecked = true;
				}, checkArgs);
				yield return new WaitUntil(() => validChecked);
				if (!userIsValid)
				{
					Storager.removeObjectForKey("plr_uid");
					Storager.removeObjectForKey("plr_nhguXrl");
					StartCoroutine(CheckUserExists());
					yield break;
				}
				WebsocketHandler.CallAction("user_banned", (string data) => {
					Dictionary<string, object> resultDictionary = WebsocketHandler.Decrypt(JsonConvert.DeserializeObject<Dictionary<string, object>>(data));
					if ((string)resultDictionary["response"] == "success")
					{
						if (Convert.ToBoolean(resultDictionary["banned"]))
						{
							// just placeholder for now, PLEASE make an actual ban screen!!
							HelicopterController.AlarmClock("banned", "donot");
						}
					}
					else
					{
						Debug.Log("[WebsocketHandler::BanCheck] response wasn't \"success\"");
						Debug.Log("[WebsocketHandler::BanCheck] " + data);
					}
				}, checkArgs);
			}
			else
			{
				try
				{
					WebsocketHandler.CallAction("create_user", RecvCreated, default);
				}
				catch (Exception e)
				{
					Debug.Log($"[UserController::CheckUserExists] ERROR! {e.Message}");
				}
			}
			yield break;
		}
		private string createdData;
		private bool createdAccount;
		private void RecvCreated(string data)
		{
			StartCoroutine(OnCreateAccount(data));
		}
		public IEnumerator OnCreateAccount(string data)
		{
			Debug.Log("[WebsocketHandler::CreateAccount] Callback reached!!!");
			Dictionary<string, object> resultDictionary = WebsocketHandler.Decrypt(JsonConvert.DeserializeObject<Dictionary<string, object>>(data));
			yield return resultDictionary;
			Debug.Log("[WebsocketHandler::CreateAccount] Deserialized result!!!");
			if ((string)resultDictionary["response"] == "success")
			{
				Debug.Log("[WebsocketHandler::CreateAccount] Success!!!");
				Debug.Log($"[WebsocketHandler::CreateAccount] Setting ID to {(string)resultDictionary["givenID"]}!!!");
				Storager.setString("plr_uid", (string)resultDictionary["givenID"]);
				Debug.Log("[WebsocketHandler::CreateAccount] Setting auth secret!!!");
				Storager.setString("plr_nhguXrl", (string)resultDictionary["authcret"]);
				Debug.Log("[WebsocketHandler::CreateAccount] Saved!!!");
			}
			else
			{
				Debug.Log("[WebsocketHandler::CreateAccount] response wasn't \"success\"");
				Debug.Log("[WebsocketHandler::CreateAccount] " + data);
			}
			yield break;
		}
	}
}
#endif