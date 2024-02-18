using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FriendlySummon : MonoBehaviour
{
    public GameObject spawnpoint;
    public GameObject npc;

    public void Summon()
    {
        PhotonNetwork.Instantiate(LoadFriendly(npc), spawnpoint.transform.position, Quaternion.identity, 0);
    }

    string LoadFriendly(GameObject npc)
    {
        string friendlyname = npc.name;
        return "friendlysummons/" + friendlyname;
    }
}
