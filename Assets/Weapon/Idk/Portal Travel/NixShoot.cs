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
        GameObject bulletShoot = Instantiate(bullet, ShootPos.position, ShootPos.rotation);
        bulletShoot.transform.LookAt(targetObject.position - new Vector3(0,0f,0));
        bulletShoot.transform.GetChild(0).localScale = new Vector3(bulletShoot.transform.GetChild(0).localScale.x, bulletShoot.transform.GetChild(0).localScale.y * Distance, bulletShoot.transform.GetChild(0).localScale.z);
        bulletShoot.transform.position += bulletShoot.transform.forward * ( Distance / 2);
    }
}
