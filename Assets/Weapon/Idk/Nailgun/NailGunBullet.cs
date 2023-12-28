using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NailGunBullet : MonoBehaviour
{
    public GameObject bleed;
    public GameObject player;
    public GameObject tip;
    public float bleedamage;
    public float initdamage;
    public float cooldown;
    public float lifetime;
    public bool alreadyhit;
    public List<GameObject> array = new List<GameObject>();
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
        if (other.tag == "BodyCollider" || other.tag == "ZombieCollider")
        {
            gameObject.GetComponent<Rigidbody>().velocity = new Vector3(0f,0f,0f);
            GameObject bleeder = Instantiate(bleed, tip.transform.position, transform.rotation);
            bleeder.GetComponent<NailGunBleed>().target = other.gameObject;
            bleeder.GetComponent<NailGunBleed>().bleedamage = bleedamage;
            bleeder.GetComponent<NailGunBleed>().initdamage = initdamage;
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
        else
        {
            Destroy(gameObject);
        }
    }
}
