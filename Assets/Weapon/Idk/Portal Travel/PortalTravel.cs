using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PortalTravel : MonoBehaviour
{
    public GameObject Nix;
    public Transform TargetObject;
    // Start is called before the first frame update
    void Start()
    {
        TargetObject = gameObject.transform;
        for(int i = 0; i < 6; i++)
        {
            float x = Random.Range(-10f,10f);
            float y = Random.Range(2,10f);
            float z = Random.Range(-10f,10f);
            Vector3 randposition = new Vector3(x,y,z);
            GameObject NixSpawn = PhotonNetwork.Instantiate(LoadObject(Nix), TargetObject.position, TargetObject.rotation,0);
            NixSpawn.transform.position += randposition;
            NixSpawn.GetComponent<NixShoot>().targetObject = TargetObject;
            NixSpawn.transform.LookAt(NixSpawn.GetComponent<NixShoot>().targetObject.position);
        }
    }

    string LoadObject(GameObject Object)
    {
        GameObject Prefab = Object;
        Prefab.TryGetComponent<PhotonView>(out PhotonView _pv);
        if (!_pv)
        {
            Prefab.AddComponent<PhotonView>();
        }
        string ObjectName = Object.name;
        return ObjectName.StartsWith("Enemy") ? "Instantiatables/enemyobjects/" + ObjectName : "Instantiatables/playerobjects/" + ObjectName;
    }
}
