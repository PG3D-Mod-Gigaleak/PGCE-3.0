using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TeleportToSpawn : MonoBehaviour
{
    public string objecttarget;
    public GameObject spawnbox;

    void OnTriggerEnter(Collider other)
    {
        if (other.tag == objecttarget)
        {
            other.transform.position = spawnbox.transform.position;
        }
    }
}
