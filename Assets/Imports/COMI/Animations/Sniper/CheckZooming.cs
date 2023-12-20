using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CheckZooming : MonoBehaviour
{
    public float AccuracyNoScope;
    public float AccuracyScope;
    public GameObject Cam;
    void FixedUpdate()
    {
        GameObject player = gameObject.transform.parent.parent.parent.gameObject;
        if (player.transform.Find("Main Camera"))
        {
            Cam = player.transform.Find("Main Camera").gameObject;
        }
        else if (player.transform.Find("PeekPivot").transform.Find("Main Camera"))
        {
            Cam = player.transform.Find("PeekPivot").transform.Find("Main Camera").gameObject;
        }
        if (Cam.GetComponent<Camera>().fieldOfView <= 60f)
        {
            gameObject.GetComponent<WeaponSounds>().startZone = new Vector2(AccuracyScope,AccuracyScope);
        }
        else if (Cam.GetComponent<Camera>().fieldOfView >= 60f)
        {
            gameObject.GetComponent<WeaponSounds>().startZone = new Vector2(AccuracyNoScope,AccuracyNoScope);
        }
    }
}
