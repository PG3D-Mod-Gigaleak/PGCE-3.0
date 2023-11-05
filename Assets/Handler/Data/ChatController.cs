#if USES_WEBSOCKET
using System;
using System.Collections;
using System.Collections.Generic;
using handler.networking;
using Newtonsoft.Json;
using UnityEngine;

namespace handler.data
{
	public class ChatController : MonoBehaviour
	{
		public static ChatController Instance;
		public List<string> Messages;
		public const int MaxMessagesInList = 48;
		public static void Init()
		{
			GameObject cC = new GameObject("ChatController");
			cC.AddComponent<ChatController>();
			DontDestroyOnLoad(cC);
		}
		void Start()
		{
			Messages = new List<string>();
			Instance = this;
		}
		public void AddChatMessage(string chat_msg)
		{
			Messages.Add(chat_msg);
			if (Messages.Count > MaxMessagesInList)
			{
				Messages.RemoveAt(0);
			}
			if (Globals.PlayerMove != null && Globals.PlayerMove.isMine)
			{
				Globals.PlayerMove.inGameGUI.AddChatMessage(chat_msg);
			}
		}
		public void SendChatMessage(string chat_msg)
		{
			WebsocketHandler.CallAction("send_chat", null, new Dictionary<string, object>(){
				{"uid", UserController.Instance.ID},
				{"ak", UserController.Instance.AuthKey},
				{"msg", chat_msg},
			});
		}
	}
}
#endif