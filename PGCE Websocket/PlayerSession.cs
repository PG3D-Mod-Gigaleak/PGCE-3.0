using PGCE;
using WebSocketSharp;
using WebSocketSharp.Server;

public struct PlayerSession
{
    public long SessionID;
    public IWebSocketSession Session;
    public long DecryptionKey;
    public AccountParameters? AccountParameters;
}