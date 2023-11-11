using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AphexTwinMenu : MonoBehaviour
{
    public PlayerAnimationController playerAnim;

    public Material theCrazy;

    public GameObject rotationage;

    public Camera cam;

    public DecibelMeasurer theDecibels;

    private void Start()
    {
        Invoke("Beginnage", 11.8f);
    }

    private void Update()
    {
        cam.fieldOfView = Mathf.Lerp(cam.fieldOfView, 70f - (theDecibels.decibels * 100f), Time.deltaTime * 20f);
    }

    private void Beginnage()
    {
        playerAnim.skinModel.sharedMaterial = theCrazy;

        foreach (ZeichenKraftwerk.Rotator rotator in rotationage.GetComponentsInChildren<ZeichenKraftwerk.Rotator>())
        {
            rotator.enabled = true;
        }
    }
}
