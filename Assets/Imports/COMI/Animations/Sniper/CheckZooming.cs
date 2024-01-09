using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CheckZooming : MonoBehaviour
{
    public float AccuracyNoScope;
    public float AccuracyScope;
    public GameObject Cam;
    public bool MovementAccuracy;
    public Vector2 MoveAccuracyFactor = new Vector2(1f,1f);
    private float overallmovement;
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
        if (MovementAccuracy == true)
        {
            overallmovement = ( player.transform.GetComponent<FirstPersonControl>().sidestepSpeed + player.transform.GetComponent<FirstPersonControl>().forwardSpeed + player.transform.GetComponent<FirstPersonControl>().backwardSpeed ) / 3;
        }
        if (Cam.GetComponent<Camera>().fieldOfView <= 60f)
        {
            gameObject.GetComponent<WeaponSounds>().startZone = new Vector2(AccuracyScope,AccuracyScope);
            if (MovementAccuracy == true)
            {
                float x = AccuracyScope + (overallmovement * MoveAccuracyFactor.x);
                if (x < 0)
                {
                    x = 0;
                }
                float y = AccuracyScope + (overallmovement * MoveAccuracyFactor.y);
                if (y < 0)
                {
                    y = 0;
                }
                gameObject.GetComponent<WeaponSounds>().startZone = new Vector2(x,y);
            }
        }
        else if (Cam.GetComponent<Camera>().fieldOfView >= 60f)
        {
            gameObject.GetComponent<WeaponSounds>().startZone = new Vector2(AccuracyNoScope,AccuracyNoScope);
            if (MovementAccuracy == true)
            {
                float x = AccuracyNoScope + (overallmovement * MoveAccuracyFactor.x);
                if (x < 0)
                {
                    x = 0;
                }
                float y = AccuracyNoScope + (overallmovement * MoveAccuracyFactor.y);
                if (y < 0)
                {
                    y = 0;
                }
                gameObject.GetComponent<WeaponSounds>().startZone = new Vector2(x,y);
            }
        }
    }
}
