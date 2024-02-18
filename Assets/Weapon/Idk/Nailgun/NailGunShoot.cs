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
    public float bleedmultidamage;
    public float initmultidamage;
    public float initcoopdamage;
    public float bleedcoopdamage;
    public float cooldown;
    public float lifetime;
    public bool isNailShot;
    public Vector3 inaccuracy1;
    public Vector3 inaccuracy2;
    public int nails;
    public bool accuratenail;

    public void Start()
    {
        if (!TryGetComponent<NailGunTurret>(out NailGunTurret ngt))
        {
        player = host.transform.parent.parent.parent.gameObject;
        }
    }
    public void Shoot()
    {
        if (isNailShot == false)
        {
        GameObject nail = PhotonNetwork.Instantiate(LoadObject(Nail), spawner.transform.position, host.transform.rotation,0);
        nail.GetComponent<Rigidbody>().velocity = new Vector3(0f,0f,0f);
        nail.GetComponent<Rigidbody>().AddForce(host.transform.forward * velocity);
        nail.GetComponent<NailGunBullet>().bleedmultidamage = bleedmultidamage;
        nail.GetComponent<NailGunBullet>().initmultidamage = initmultidamage;
        nail.GetComponent<NailGunBullet>().bleedcoopdamage = bleedcoopdamage;
        nail.GetComponent<NailGunBullet>().initcoopdamage = initcoopdamage;
        nail.GetComponent<NailGunBullet>().cooldown = cooldown;
        nail.GetComponent<NailGunBullet>().lifetime = lifetime;
        nail.GetComponent<NailGunBullet>().player = player;
        }
        else if (isNailShot == true)
        {
            if (accuratenail == true)
            {
                GameObject nail = PhotonNetwork.Instantiate(LoadObject(Nail), spawner.transform.position, host.transform.rotation,0);
                nail.GetComponent<Rigidbody>().velocity = new Vector3(0f,0f,0f);
                nail.GetComponent<Rigidbody>().AddForce(host.transform.forward * velocity);
                nail.GetComponent<NailGunBullet>().bleedmultidamage = bleedmultidamage;
                nail.GetComponent<NailGunBullet>().initmultidamage = initmultidamage;
                nail.GetComponent<NailGunBullet>().bleedcoopdamage = bleedcoopdamage;
                nail.GetComponent<NailGunBullet>().initcoopdamage = initcoopdamage;
                nail.GetComponent<NailGunBullet>().cooldown = cooldown;
                nail.GetComponent<NailGunBullet>().lifetime = lifetime;
                nail.GetComponent<NailGunBullet>().player = player;
            }
            for (int i = 0; i<nails; i++)
            {
            Vector3 randomrot = new Vector3(Random.Range(inaccuracy1.x,inaccuracy2.x),Random.Range(inaccuracy1.y,inaccuracy2.y),Random.Range(inaccuracy1.y,inaccuracy2.y));
            GameObject nail = PhotonNetwork.Instantiate(LoadObject(Nail), spawner.transform.position, Quaternion.identity,0);
            nail.transform.localEulerAngles = host.transform.rotation.eulerAngles + randomrot;
            nail.GetComponent<Rigidbody>().velocity = new Vector3(0f,0f,0f);
            nail.GetComponent<Rigidbody>().AddForce(nail.transform.forward * velocity * Random.Range(0.5f,1f));
            nail.GetComponent<NailGunBullet>().bleedmultidamage = bleedmultidamage;
            nail.GetComponent<NailGunBullet>().initmultidamage = initmultidamage;
            nail.GetComponent<NailGunBullet>().bleedcoopdamage = bleedcoopdamage;
            nail.GetComponent<NailGunBullet>().initcoopdamage = initcoopdamage;
            nail.GetComponent<NailGunBullet>().cooldown = cooldown;
            nail.GetComponent<NailGunBullet>().lifetime = lifetime;
            nail.GetComponent<NailGunBullet>().player = player;
            }
        }
    }

    public void Turret()
    {
        GameObject turrete = PhotonNetwork.Instantiate(LoadObject(turret), player.transform.position + new Vector3(Random.Range(-3f,3f),-0.5f,Random.Range(-3f,3f)), Quaternion.identity,0);
        turrete.GetComponent<NailGunTurret>().player = player;
        turrete.GetComponent<NailGunShoot>().player = player;
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
