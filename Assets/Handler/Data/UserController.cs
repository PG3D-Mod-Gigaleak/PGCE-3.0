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
		public List<string> Achievements;	
		public List<string> BoughtGuns;
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
						else
						{
							StartCoroutine(GetPlayerInfo());
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
		private void EnsureCat(string postfix, Dictionary<string, string> catEquipList_Deserialized)
		{
			if (catEquipList_Deserialized["cat"+postfix] != "")
				prefs.SetString("cat"+postfix, catEquipList_Deserialized["cat"+postfix]);
			else
				prefs.DeleteKey("cat"+postfix);
		}
		public IEnumerator GetPlayerInfo()
		{
			WebsocketHandler.CallAction("get_my_player_info", (string data2) => {
				Dictionary<string, object> resultDictionary2 = WebsocketHandler.Decrypt(JsonConvert.DeserializeObject<Dictionary<string, object>>(data2));
				Debug.Log(JsonConvert.SerializeObject(resultDictionary2));
				if ((string)resultDictionary2["response"] == "success")
				{
					CustomPrefs.CurrentSkin = (string)resultDictionary2["skin_set"];
					Storager.setInt("earsOn", (Convert.ToBoolean((string)resultDictionary2["catears_set"]) ? 1 : 0), false);
					Storager.setInt(Defs.Coins, Convert.ToInt32((string)resultDictionary2["coins_set"]), false);
					prefs.SetString("NamePlayer", (string)resultDictionary2["name_set"]);
					Dictionary<string, string> catEquipList_Deserialized = JsonConvert.DeserializeObject<Dictionary<string, string>>((string)resultDictionary2["catlistserialized_set"]);
					EnsureCat("1", catEquipList_Deserialized);
					EnsureCat("2", catEquipList_Deserialized);
					EnsureCat("3", catEquipList_Deserialized);
					EnsureCat("4", catEquipList_Deserialized);
					EnsureCat("5", catEquipList_Deserialized);
					Achievements = JsonConvert.DeserializeObject<List<string>>((string)resultDictionary2["achievementsserialized_set"]);
					BoughtGuns = JsonConvert.DeserializeObject<List<string>>((string)resultDictionary2["boughtweaponsserialized_set"]);
				}
			}, new Dictionary<string, object>(){
				{"uid", UserController.Instance.ID},
				{"ak", UserController.Instance.AuthKey},
			});
			yield break;
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
				Storager.setString("plr_uid", (string)resultDictionary["givenID"]);
				Storager.setString("plr_nhguXrl", (string)resultDictionary["authcret"]);
				ID = System.Convert.ToInt64(Storager.getString("plr_uid", false));
				AuthKey = (string)Storager.getString("plr_nhguXrl", false);
				StartCoroutine(GetPlayerInfo());
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