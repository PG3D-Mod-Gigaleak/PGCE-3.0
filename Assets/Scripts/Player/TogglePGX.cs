using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering.PostProcessing;
public class TogglePGX : MonoBehaviour
{
    public bool isEnabled = false;
    private Player_move_c player;
    private MotionBlur _mb;

    void Start()
    {
        string deFault = prefs.GetString("PPDefault");
        if (deFault == "true")
        {
            EnablePP();
        }
        else
        {
            DisablePP();
        }
    }
    void Update()
    {
        if (gameObject.transform.parent.gameObject.name == "PeekPivot")
        {
        player = gameObject.transform.parent.parent.transform.Find("GameObject").gameObject.GetComponent<Player_move_c>();
        }
        else
        {
        player = gameObject.transform.parent.transform.Find("GameObject").gameObject.GetComponent<Player_move_c>();
        }
        string key = prefs.GetString("ToggleKey");
        if (player.isZoomed == true)
        {
            PostProcessProfile pp = gameObject.transform.GetComponent<PostProcessVolume>().profile;
            pp.GetSetting<UnityEngine.Rendering.PostProcessing.MotionBlur>().enabled.value = false;
        }
        else
        {
            PostProcessProfile pp = gameObject.transform.GetComponent<PostProcessVolume>().profile;
            pp.GetSetting<UnityEngine.Rendering.PostProcessing.MotionBlur>().enabled.value = true;
        }
        if (Input.GetKeyDown(key) && isEnabled == false)
        {
            EnablePP();
        }
        else if (Input.GetKeyDown(key) && isEnabled == true)
        {
            DisablePP();
        }
    }

    void EnablePP()
    {
            isEnabled = true;
            gameObject.transform.GetComponent<Camera>().renderingPath = RenderingPath.DeferredShading;
            gameObject.transform.GetComponent<PostProcessVolume>().enabled = true;
            gameObject.transform.GetComponent<PostProcessLayer>().enabled = true;
            gameObject.transform.GetChild(0).GetComponent<Camera>().renderingPath = RenderingPath.DeferredShading;
            gameObject.transform.GetChild(0).GetComponent<PostProcessLayer>().enabled = true;
    }
    
    void DisablePP()
    {
            isEnabled = false;
            gameObject.transform.GetComponent<Camera>().renderingPath = RenderingPath.Forward;
            gameObject.transform.GetComponent<PostProcessVolume>().enabled = false;
            gameObject.transform.GetComponent<PostProcessLayer>().enabled = false;
            gameObject.transform.GetChild(0).GetComponent<Camera>().renderingPath = RenderingPath.Forward;
            gameObject.transform.GetChild(0).GetComponent<PostProcessLayer>().enabled = false;    
    }
}