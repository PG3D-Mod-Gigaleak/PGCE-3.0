using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Teleport1 : MonoBehaviour
{
    public float x;
    public float y;
    public float z;
    public bool currentPos;
    private void OnTriggerEnter(Collider other) 
    {
        if (other.tag == "Player" && currentPos == true)
        {
        other.transform.position = new Vector3(transform.position.x + x,transform.position.y + y,transform.position.z + z);
        Debug.LogError("Teleported1");
        }
        if (other.tag == "Player" && currentPos == false)
        {
        other.transform.position = new Vector3(x,y,z);
        Debug.LogError("Teleported2");
        }
    }
}
