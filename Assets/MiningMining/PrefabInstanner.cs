using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PrefabInstanner : MonoBehaviour
{
    public Transform targetParent, targetParent2;

    public void Instantiate(GameObject gameObject)
    {
        PhotonNetwork.Instantiate(LoadObject(gameObject), targetParent.transform.position, targetParent.transform.rotation, 0);
    }

    public void Instantiate2(GameObject gameObject)
    {
        PhotonNetwork.Instantiate(LoadObject(gameObject), targetParent2.transform.position, targetParent.transform.rotation, 0);
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
