using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class COMDHShotgunImpact : MonoBehaviour
{
    public GameObject effect;
    public GameObject host;
    public GameObject player;
    public bool ImpactNow;

    public List<GameObject> array = new List<GameObject>();

    void Start()
    {
        player = host.transform.parent.parent.parent.gameObject;
    }
    void OnTriggerStay(Collider other)
    {
        if (ImpactNow == true && !array.Contains(other.gameObject))
        {
            if (other.tag == "BodyCollider")
            {
                if (other.transform.parent.gameObject != player)
                {
                    PhotonNetwork.Instantiate(LoadObject(effect), other.transform.position + new Vector3(0,1,0), Quaternion.identity,0);
                    array.Add(other.gameObject);
                    StartCoroutine(Remove(other.gameObject));
                }
            }
            else if (other.tag == "ZombieCollider")
            {
                PhotonNetwork.Instantiate(LoadObject(effect), other.transform.position + new Vector3(0,1f,0), Quaternion.identity,0);
                array.Add(other.gameObject);
                StartCoroutine(Remove(other.gameObject));
            }
        }
    }

    IEnumerator Remove(GameObject game)
    {
        float cooldown = gameObject.GetComponent<DamageZone>().damageCooldown;
        yield return new WaitForSeconds(cooldown);
        if (array.Contains(game.gameObject))
        {
            array.Remove(game.gameObject);
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
