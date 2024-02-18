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
            PhotonNetwork.Instantiate(LoadObject(OrangePortal), transform.position, transform.rotation, 0);
        }
        else if (!GameObject.Find("PortalBlue(Clone)") && GameObject.Find("PortalOrange(Clone)"))
        {
            PhotonNetwork.Instantiate(LoadObject(BluePortal), transform.position, transform.rotation, 0);
        }
        else if (GameObject.Find("PortalBlue(Clone)") && GameObject.Find("PortalOrange(Clone)"))
        {
            Debug.LogError("NextPortalSet");
            PhotonNetwork.Instantiate(LoadObject(BluePortal), transform.position, transform.rotation, 0);
        }
        else
        {
            Debug.LogError("NoPortal");
            PhotonNetwork.Instantiate(LoadObject(BluePortal), transform.position, transform.rotation, 0);
        }
    }
        string LoadObject(GameObject Object)
        {
            GameObject checkPrefab = Object;
            checkPrefab.TryGetComponent<PhotonView>(out PhotonView _pv);
            if (!_pv)
            {
                checkPrefab.AddComponent<PhotonView>();
            }
            string ObjectName = Object.name;
            return ObjectName.StartsWith("Enemy") ? "Instantiatables/enemyobjects/" + ObjectName : "Instantiatables/playerobjects/" + ObjectName;
        }
}
