using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NixShoot : MonoBehaviour
{
    public Transform targetObject;
    public GameObject bullet;
    public float Distance;
    public Transform ShootPos;

    void Start()
    {
        ShootPos = transform.Find("ShootPos");
    }
    void Shoot()
    {
        Distance = Vector3.Distance(ShootPos.position,targetObject.transform.position - new Vector3(0,0f,0));
        GameObject bulletShoot = PhotonNetwork.Instantiate(LoadObject(bullet), ShootPos.position, ShootPos.rotation,0);
        bulletShoot.transform.LookAt(targetObject.position - new Vector3(0,0f,0));
        bulletShoot.transform.GetChild(0).localScale = new Vector3(bulletShoot.transform.GetChild(0).localScale.x, bulletShoot.transform.GetChild(0).localScale.y * Distance, bulletShoot.transform.GetChild(0).localScale.z);
        bulletShoot.transform.position += bulletShoot.transform.forward * ( Distance / 2);
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
