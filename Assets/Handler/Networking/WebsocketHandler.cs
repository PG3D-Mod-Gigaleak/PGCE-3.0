using System.Collections;
using System.Collections.Generic;
using WebSocketSharp;
using Newtonsoft.Json;
using UnityEngine;

// ACTUALLY GET WEBSOCKET FIRST????
public class WebsocketHandler : MonoBehaviour
{
    private static WebSocket Connection { get; set; }
    private const string WS = "ws://127.0.0.1:8083/action";
    public static void Init()
    {
        Connection = new WebSocket(WS);
        Connection.OnMessage += (sender, e) => Debug.Log("received " + e.Data);
        Connection.Connect();
        Connection.Send(@"{""action"": ""create_user""}");
    }
}
