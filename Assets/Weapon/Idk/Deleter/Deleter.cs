using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Deleter : MonoBehaviour
{
    public bool isNotOnlyProp = false;
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Prop") && isNotOnlyProp == false )
        {
        Destroy(other.gameObject);
        Debug.LogError("Deleted");
        }
        else if (isNotOnlyProp == true )
        {
        Destroy(other.gameObject);
        Debug.LogError("Deleted");
        }
    }
}
