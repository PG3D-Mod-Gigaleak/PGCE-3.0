using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SlasherDash : MonoBehaviour
{
    public float distance;
    public GameObject dashdamage;
    public GameObject playerghost;
    void Dash()
    {
        GameObject dash = PhotonNetwork.Instantiate(LoadObject(dashdamage), transform.position, transform.rotation, 0);
        if (playerghost != null)
        {
        GameObject ghost = PhotonNetwork.Instantiate(LoadObject(playerghost), transform.position + ( transform.forward * distance * 0f), transform.rotation, 0);
        ghost.GetComponent<Animation>().Play();
        ghost = PhotonNetwork.Instantiate(LoadObject(playerghost), transform.position + ( transform.forward * distance * 1f/3f), transform.rotation, 0);
        ghost.GetComponent<Animation>().Play();
        ghost = PhotonNetwork.Instantiate(LoadObject(playerghost), transform.position + ( transform.forward * distance * 2f/3f), transform.rotation, 0);
        ghost.GetComponent<Animation>().Play();
        ghost = PhotonNetwork.Instantiate(LoadObject(playerghost), transform.position + ( transform.forward * distance * 3f/3f), transform.rotation, 0);
        ghost.GetComponent<Animation>().Play();
        }
        dash.transform.position += transform.forward * ( distance * 1/2 );
        dash.transform.localScale = new Vector3(dash.transform.localScale.x , dash.transform.localScale.y, dash.transform.localScale.z * distance);
        transform.parent.parent.parent.position += transform.forward * distance;
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
