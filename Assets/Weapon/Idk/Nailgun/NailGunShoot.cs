using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NailGunShoot : MonoBehaviour
{
    public GameObject Nail;
    public float velocity;
    public GameObject host;
    public GameObject player;
    public GameObject turret;
    public GameObject spawner;
    public float bleedamage;
    public float initdamage;
    public float cooldown;
    public float lifetime;

    public void Start()
    {
        player = host.transform.parent.parent.parent.gameObject;
    }
    public void Shoot()
    {
        GameObject nail = Instantiate(Nail, spawner.transform.position, host.transform.rotation);
        nail.GetComponent<Rigidbody>().velocity = new Vector3(0f,0f,0f);
        nail.GetComponent<Rigidbody>().AddForce(host.transform.forward * velocity);
        nail.GetComponent<NailGunBullet>().bleedamage = bleedamage;
        nail.GetComponent<NailGunBullet>().initdamage = initdamage;
        nail.GetComponent<NailGunBullet>().cooldown = cooldown;
        nail.GetComponent<NailGunBullet>().lifetime = lifetime;
        nail.GetComponent<NailGunBullet>().player = player;
    }

    public void Turret()
    {
        GameObject turrete = Instantiate(turret, player.transform.position + new Vector3(Random.Range(-3f,3f),-0.5f,Random.Range(-3f,3f)), Quaternion.identity);
        turrete.GetComponent<NailGunTurret>().player = player;
    }
}
