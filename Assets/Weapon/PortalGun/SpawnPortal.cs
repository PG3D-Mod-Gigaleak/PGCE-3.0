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
    void Start()
    {
        Orange = GameObject.Find("PortalOrange(Clone)");
        Blue = GameObject.Find("PortalBlue(Clone)");
        if (GameObject.Find("PortalBlue(Clone)") && !GameObject.Find("PortalOrange(Clone)"))
        {
            Instantiate(OrangePortal, transform.position, transform.rotation);
            if (Blue != null)
            {
                Blue.GetComponent<OnlyOnePortal>().PortalCounter += 1;
            }
            if (Orange != null)
            {
                Orange.GetComponent<OnlyOnePortal>().PortalCounter += 1;
                Debug.LogError("OrangeCounted");
            }
        }
        else if (!GameObject.Find("PortalBlue(Clone)") && GameObject.Find("PortalOrange(Clone)"))
        {
            Instantiate(BluePortal, transform.position, transform.rotation);
            if (Blue != null)
            {
                Blue.GetComponent<OnlyOnePortal>().PortalCounter += 1;
            }
            if (Orange != null)
            {
                Orange.GetComponent<OnlyOnePortal>().PortalCounter += 1;
                Debug.LogError("OrangeCounted");
            }
        }
        else if (GameObject.Find("PortalBlue(Clone)") && GameObject.Find("PortalOrange(Clone)"))
        {
            Debug.LogError("NextPortalSet");
            Instantiate(BluePortal, transform.position, transform.rotation);
            if (Blue != null)
            {
                Blue.GetComponent<OnlyOnePortal>().PortalCounter += 1;
            }
            if (Orange != null)
            {
                Orange.GetComponent<OnlyOnePortal>().PortalCounter += 1;
            }
        }
        else
        {
            Debug.LogError("NoPortal");
            Instantiate(BluePortal, transform.position, transform.rotation);
            if (Blue != null)
            {
                Blue.GetComponent<OnlyOnePortal>().PortalCounter += 1;
            }
            if (Orange != null)
            {
                Orange.GetComponent<OnlyOnePortal>().PortalCounter += 1;
            }
        }
    }
}
