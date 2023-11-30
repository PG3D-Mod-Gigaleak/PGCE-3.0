using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering.PostProcessing;

public class PGXPool : MonoBehaviour
{
    public Transform peekpivot = null;
    void Update()
    {
        if (GameObject.FindGameObjectWithTag("Player"))
        {
            GameObject[] Players = GameObject.FindGameObjectsWithTag("Player");
            foreach (GameObject player in Players)
            {
                peekpivot = player.transform.Find("PeekPivot");
                peekpivot.GetChild(0).GetComponent<PostProcessVolume>().enabled = true;
                peekpivot.GetChild(0).GetComponent<PostProcessLayer>().enabled = true;
                peekpivot.GetChild(0).GetChild(0).GetComponent<PostProcessLayer>().enabled = true;
            }
        }
    }
}
