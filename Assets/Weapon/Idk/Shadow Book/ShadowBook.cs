using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShadowBook : MonoBehaviour
{
    public GameObject ShadowBall;
    public GameObject SpawnedBall;
    public float OrbCooldown;
    public GameObject host;
    void Update()
    {
        if (Input.GetMouseButtonUp(0))
        {
            SpawnedBall.GetComponent<ShadowBall>().Discharge = true;
        }
    }
    
    void Event()
    {
        SpawnedBall = PhotonNetwork.Instantiate(LoadObject(ShadowBall), transform.position + (transform.forward * 10) + new Vector3(0f,5f,0f), Quaternion.identity,0);
        SpawnedBall.GetComponent<DespawnObject>().hostObject = host;
        SpawnedBall.GetComponent<ShadowBall>().OrbCooldown = OrbCooldown;
        SpawnedBall.GetComponent<ShadowBall>().Discharge = false;
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
