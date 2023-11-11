using System.Transactions;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnPortal : MonoBehaviour
{
    public GameObject OrangePortal;
    public GameObject BluePortal;
    public GameObject Orange;
    public GameObject Blue;

    public GameObject[] Portals;
    void Start()
    {
        if (GameObject.Find("PortalBlue(Clone)") && GameObject.Find("PortalOrange(Clone)"))
        {
            Orange = GameObject.Find("PortalOrange(Clone)");
            Blue = GameObject.Find("PortalBlue(Clone)");
            Destroy(Blue);
            Destroy(Orange);
        }
        Orange = GameObject.Find("PortalOrange(Clone)");
        Blue = GameObject.Find("PortalBlue(Clone)");
        if (GameObject.Find("PortalBlue(Clone)") && !GameObject.Find("PortalOrange(Clone)"))
        {
            Instantiate(OrangePortal, transform.position, transform.rotation);
        }
        else if (!GameObject.Find("PortalBlue(Clone)") && GameObject.Find("PortalOrange(Clone)"))
        {
            Instantiate(BluePortal, transform.position, transform.rotation);
        }
        else if (GameObject.Find("PortalBlue(Clone)") && GameObject.Find("PortalOrange(Clone)"))
        {
            Debug.LogError("NextPortalSet");
            Instantiate(BluePortal, transform.position, transform.rotation);
        }
        else
        {
            Debug.LogError("NoPortal");
            Instantiate(BluePortal, transform.position, transform.rotation);
        }
    }
}
