using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Deleter : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Prop") || other.gameObject.CompareTag("Enemy") || other.gameObject.CompareTag("donotchange"))
        {
        Destroy(other.gameObject);
        Debug.LogError("Deleted");
        }
    }
}
