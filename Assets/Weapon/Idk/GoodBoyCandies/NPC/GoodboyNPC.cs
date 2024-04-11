using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GoodboyNPC : MonoBehaviour
{
    public GameObject bulletline;
    public bool isBullet;
    public GameObject spawnbox;
    public GameObject pixlgun;
    public bool isCandy;
    public GameObject host;
    public void Shoot()
    {
        GameObject target = gameObject.transform.parent.GetComponent<ZombiUpravlenie>().target.gameObject;
        if (target != null)
        {
            pixlgun.GetComponent<AudioSource>().PlayOneShot(pixlgun.GetComponent<AudioSource>().clip);
            GameObject bullet = Instantiate(bulletline, spawnbox.transform.position, Quaternion.identity);
            float accx = Random.Range(-1f,1f);
            float accz = Random.Range(-1f,1f);
            float accy = Random.Range(-1f,1f);
            bullet.transform.LookAt(target.transform.position + new Vector3(accx,accy + 0.5f,accz));
            bullet.GetComponent<Rigidbody>().AddForce(bullet.transform.forward * 1500f);
        }
    }

    public void Reposition()
    {
        int posx = Random.Range(-2, 2);
        int posz = Random.Range(-2, 2);
        if (isCandy == true)
        {
            GameObject.Find("Goodboy(Clone)").transform.position = host.transform.parent.parent.parent.position + new Vector3(posx,0,posz);
        }
    }

    void OnTriggerStay(Collider other)
    {
        if (other.tag == "ZombieCollider" && isBullet == true && other.gameObject.name != "Goodboy")
        {
            StartCoroutine(DestroyW());
        }
    }

    IEnumerator DestroyW()
    {
        yield return new WaitForSeconds(0.25f);
        Destroy(gameObject);
    }
}
