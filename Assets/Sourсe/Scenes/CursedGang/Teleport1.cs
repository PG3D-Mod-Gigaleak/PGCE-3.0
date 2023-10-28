using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Teleport1 : MonoBehaviour
{
    private void onTriggerEnter(Collider other) 
    {

        other.transform.position = new Vector3(-50f,0f,0f);
        Debug.LogError("Teleported");
    }
}
