using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NailGunBullet : MonoBehaviour
{
    public GameObject bleed;
    public GameObject player;
    public GameObject tip;
    public float bleedmultidamage;
    public float initmultidamage;
    public float initcoopdamage;
    public float bleedcoopdamage;
    public float cooldown;
    public float lifetime;
    public bool alreadyhit;
    public List<GameObject> array = new List<GameObject>();
    void Start()
    {
        gameObject.GetComponent<DespawnObject>().Lifespan = lifetime;
        gameObject.GetComponent<DespawnObject>().enabled = false;
        gameObject.GetComponent<DespawnObject>().enabled = true;
        gameObject.GetComponent<DespawnObject>().Start();
    }
    void OnTriggerEnter(Collider other)
    {
        if (array.Contains(other.gameObject) || alreadyhit == true)
        {
            return;
        }
        if (other.tag == "BodyCollider" && other.transform.parent.gameObject == player)
        {
            return;
        }
        if (other.transform.gameObject == player)
        {
            return;
        }
        if (other.tag == "BodyCollider")
        {
            if (other.transform.parent.gameObject.GetComponent<SkinName>().playerMoveC.CurHealth <= 0f)
            {
                return;
            }
        }
        if (other.tag == "ZombieCollider")
        {
            if (other.transform.parent.gameObject.GetComponent<ZombiUpravlenie>().health <= 0f)
            {
                return;
            }
        }
        if (other.tag == "BodyCollider" || other.tag == "ZombieCollider")
        {
            gameObject.GetComponent<Rigidbody>().velocity = new Vector3(0f,0f,0f);
            GameObject bleeder = PhotonNetwork.Instantiate(LoadObject(bleed), tip.transform.position, transform.rotation,0);
            bleeder.GetComponent<NailGunBleed>().target = other.gameObject;
            bleeder.GetComponent<NailGunBleed>().bleedmultidamage = bleedmultidamage;
            bleeder.GetComponent<NailGunBleed>().initmultidamage = initmultidamage;
            bleeder.GetComponent<NailGunBleed>().bleedcoopdamage = bleedcoopdamage;
            bleeder.GetComponent<NailGunBleed>().initcoopdamage = initcoopdamage;
            bleeder.GetComponent<NailGunBleed>().cooldown = cooldown;
            bleeder.GetComponent<NailGunBleed>().lifetime = lifetime;
            bleeder.GetComponent<NailGunBleed>().Nail = gameObject;
            gameObject.GetComponent<DespawnObject>().Lifespan = lifetime;
            gameObject.GetComponent<DespawnObject>().enabled = false;
            gameObject.GetComponent<DespawnObject>().enabled = true;
            array.Add(other.gameObject);
            gameObject.transform.GetChild(0).GetChild(1).gameObject.SetActive(false);
            gameObject.GetComponent<DespawnObject>().Start();
            alreadyhit = true;
        }
        if (other.transform.name == "NailGunBullet(Clone)")
        {
            return;
        }
        else if (other.transform.parent.name == "NailGunBullet(Clone)")
        {
            return;
        }
        else if (other.transform.parent.parent.name == "NailGunBullet(Clone)")
        {
            return;
        }
        else
        {
            Destroy(gameObject);
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
}
