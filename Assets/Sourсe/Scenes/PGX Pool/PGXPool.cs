using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering.PostProcessing;

public class PGXPool : MonoBehaviour
{
    public Transform maincamera = null;
    void Update()
    {
        if (GameObject.FindGameObjectWithTag("Player"))
        {
            GameObject[] Players = GameObject.FindGameObjectsWithTag("Player");
            foreach (GameObject player in Players)
            {
                Transform peekpivot = player.transform.Find("PeekPivot");
                if (peekpivot.transform.Find("Main Camera"))
                {
                    maincamera = peekpivot.transform.Find("Main Camera");
                }
                else
                {
                maincamera = player.transform.Find("Main Camera");
                }
                maincamera.GetComponent<Camera>().renderingPath = RenderingPath.DeferredShading;
                maincamera.GetComponent<PostProcessVolume>().enabled = true;
                maincamera.GetComponent<PostProcessLayer>().enabled = true;
                maincamera.GetChild(0).GetComponent<Camera>().renderingPath = RenderingPath.DeferredShading;
                maincamera.GetChild(0).GetComponent<PostProcessLayer>().enabled = true;
            }
        }
    }
}
