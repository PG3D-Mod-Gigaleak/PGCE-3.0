using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering.PostProcessing;
public class TogglePGX : MonoBehaviour
{
    private bool isHolding = false;
    private bool isEnabled = false;
    private Transform peekpivot;
    void Update()
    {

        if (Input.GetKeyDown(KeyCode.P) && isHolding == false && isEnabled == false)
        {
            isHolding = true;
            isEnabled = true;
            peekpivot = gameObject.transform;
            peekpivot.GetChild(0).GetComponent<Camera>().renderingPath = RenderingPath.DeferredShading;
            peekpivot.GetChild(0).GetComponent<PostProcessVolume>().enabled = true;
            peekpivot.GetChild(0).GetComponent<PostProcessLayer>().enabled = true;
            peekpivot.GetChild(0).GetChild(0).GetComponent<Camera>().renderingPath = RenderingPath.DeferredShading;
            peekpivot.GetChild(0).GetChild(0).GetComponent<PostProcessLayer>().enabled = true;
        }
        else if (Input.GetKeyUp(KeyCode.P) && isHolding == true && isEnabled == true)
        {
            isHolding = false;
        }
        else if (Input.GetKeyDown(KeyCode.P) && isHolding == false && isEnabled == true)
        {
            isHolding = true;
            isEnabled = false;
            peekpivot = gameObject.transform;
            peekpivot.GetChild(0).GetComponent<Camera>().renderingPath = RenderingPath.Forward;
            peekpivot.GetChild(0).GetComponent<PostProcessVolume>().enabled = false;
            peekpivot.GetChild(0).GetComponent<PostProcessLayer>().enabled = false;
            peekpivot.GetChild(0).GetChild(0).GetComponent<Camera>().renderingPath = RenderingPath.Forward;
            peekpivot.GetChild(0).GetChild(0).GetComponent<PostProcessLayer>().enabled = false;
        }
        else if (Input.GetKeyUp(KeyCode.P) && isHolding == true && isEnabled == false)
        {
            isHolding = false;
        }
    }
}