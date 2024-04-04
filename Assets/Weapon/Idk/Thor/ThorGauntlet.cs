using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ThorGauntlet : MonoBehaviour
{
    public GameObject host;
    public GameObject player;
    public GameObject explosion;
    public Vector3 teleportupvector;
    public Ray targetray;
    public bool isUp;
    public Vector3 finalteleport;
    public Camera maincamera;
    public Vector3 endteleport;
    public LayerMask mask;
    public GameObject laser;
    public GameObject laserray;
    public GameObject crosshair;
    public GameObject circle;

    public void Start()
    {
        player = host.transform.parent.parent.parent.gameObject;
        if (player.transform.Find("PeekPivot").transform.Find("Main Camera"))
        {
            maincamera = player.transform.Find("PeekPivot").transform.Find("Main Camera").GetComponent<Camera>();
        }
        else
        {
            maincamera = player.transform.Find("Main Camera").GetComponent<Camera>();
        }
    }
    public void TeleportUp()
    {
        finalteleport = player.transform.position + teleportupvector;
        isUp = true;
        laserray = Instantiate(laser, player.transform.position, Quaternion.identity);
        circle = Instantiate(crosshair, player.transform.position, Quaternion.identity);
    }
    public void TeleportToEnd()
    {
        Destroy(laserray);
        Destroy(circle);
        isUp = false;
        player.transform.position = endteleport + new Vector3(0f,1f,0f);
        Instantiate(explosion, endteleport, Quaternion.identity);
    }
    void Update()
    {
        if (isUp == true)
        {
            player.transform.position = finalteleport;
            targetray = maincamera.ScreenPointToRay(Input.mousePosition);
            if (Physics.Raycast(targetray, out RaycastHit raycasthit, 100, mask))
            {
                Physics.Raycast(targetray, out raycasthit, 100, mask);
                {
                    endteleport = raycasthit.point;
                    laserray.transform.LookAt(endteleport);
                    laserray.transform.localScale = new Vector3(0.05f, 0.05f, Vector3.Distance(host.transform.position, endteleport));
                    laserray.transform.position = player.transform.position +(host.transform.forward * Vector3.Distance(host.transform.position, endteleport) / 2f);
                    circle.transform.position = endteleport + new Vector3(0f,0.5f,0f);
                }
            }
        }
    }
}
