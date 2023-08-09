using System.Collections;
using System.Collections.Generic;
using WebSocketSharp;
using Newtonsoft.Json;
using UnityEngine;

// ACTUALLY GET WEBSOCKET FIRST????
namespace handler.networking
{
    public class WebsocketHandler : MonoBehaviour
    {
        public delegate void ActionAnswered(string data);
        private const string WS = "ws://127.0.0.1:8083/action";
        public static bool WSIsAlive = false;
        private static WebsocketHandler Instance;
        public static void Init()
        {
            GameObject websocket = new GameObject("WebsocketHandler");
            Instance = websocket.AddComponent<WebsocketHandler>();
            DontDestroyOnLoad(websocket);
            Instance.StartCoroutine(RealInit());
        }
        private static IEnumerator RealInit()
        {
            CallAction("ensure_ws_alive", (string data) => {
                Dictionary<string, object> resultDictionary = JsonConvert.DeserializeObject<Dictionary<string, object>>(data);
                if ((string)resultDictionary["response"] == "success")
                {
                    Debug.Log("[WebsocketHandler::Init] Websocket is alive!");
                    WSIsAlive = true;
                }
                else
                {
                    Debug.Log("[WebsocketHandler::Init] Websocket might be alive, but response wasn't \"success\"!");
                    Debug.Log("[WebsocketHandler::Init] " + data);
                }
            }, default);
            yield return WSIsAlive;
            Debug.Log("[WebsocketHandler::Init] Websocket completely initialized");
            if (WSIsAlive)
            {
                Dictionary<string, object> initArgs = new Dictionary<string, object>();
                if (Storager.hasKey("plr_uid") && Storager.hasKey("plr_nhguXrl"))
                {
                }
            }
            yield break;
        }
        #region Websocket Actions
        private static void HandleAnswered(ActionAnswered callback, string data)
        {
            Debug.Log($"[WebsocketHandler::CallAction] Returned {data}");
            callback(data);
        }
        // this code looks so fucking bad please i can't
        public static void CallAction(string action, ActionAnswered callback, Dictionary<string, object> args)
        {
            if (args == null)
                args = new Dictionary<string, object>();
            if (!WSIsAlive && action != "ensure_ws_alive")
            {
                Debug.Log("[WebsocketHandler::CallAction] Websocket isn't alive! Can't call actions if websocket connection doesn't work!");
                return;
            }
            args["action"] = action;
            Debug.Log("[WebsocketHandler::CallAction] Calling action " + action);
            WebSocket CurrentConnection = new WebSocket(WS);
            CurrentConnection.Connect();
            CurrentConnection.OnMessage += (sender, e) => HandleAnswered(callback, e.Data);
            string sargs = JsonConvert.SerializeObject(args);
            Debug.Log($"[WebsocketHandler::CallAction] Sending action {action} with arguments serialized to {sargs}");
            CurrentConnection.Send(sargs);
            Debug.Log("[WebsocketHandler::CallAction] Sent action " + action);
        }
        #endregion
    }
}