using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering.PostProcessing;
public class TogglePGX : MonoBehaviour
{
    public bool isEnabled = false;
    void Update()
    {
        string key = prefs.GetString("ToggleKey");
        if (Input.GetKeyDown(key) && isEnabled == false)
        {
            isEnabled = true;
            gameObject.transform.GetComponent<Camera>().renderingPath = RenderingPath.DeferredShading;
            gameObject.transform.GetComponent<PostProcessVolume>().enabled = true;
            gameObject.transform.GetComponent<PostProcessLayer>().enabled = true;
            gameObject.transform.GetChild(0).GetComponent<Camera>().renderingPath = RenderingPath.DeferredShading;
            gameObject.transform.GetChild(0).GetComponent<PostProcessLayer>().enabled = true;
        }
        else if (Input.GetKeyDown(key) && isEnabled == true)
        {
            isEnabled = false;
            gameObject.transform.GetComponent<Camera>().renderingPath = RenderingPath.Forward;
            gameObject.transform.GetComponent<PostProcessVolume>().enabled = false;
            gameObject.transform.GetComponent<PostProcessLayer>().enabled = false;
            gameObject.transform.GetChild(0).GetComponent<Camera>().renderingPath = RenderingPath.Forward;
            gameObject.transform.GetChild(0).GetComponent<PostProcessLayer>().enabled = false;
        }
    }
}