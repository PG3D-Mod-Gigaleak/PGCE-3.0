using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FireTiob : MonoBehaviour
{
    public bool LockIn;
    public GameObject fireball;
    public GameObject spawnbox;
    private GameObject target;
    public bool isFireball;
    public void Fireball()
    {
        GameObject Fire = Instantiate(fireball, spawnbox.transform.position, Quaternion.identity);
        Fire.GetComponent<Rigidbody>().velocity = new Vector3(0f,0f,0f);
        Fire.transform.LookAt(target.transform);
        Fire.GetComponent<Rigidbody>().AddForce(Fire.transform.forward * 1000);
    }
    void FixedUpdate()
    {
        if (LockIn)
        {
            GameObject[] array = GameObject.FindGameObjectsWithTag("BodyCollider");
            float distance = gameObject.GetComponent<Sounds>().detectRadius;
            foreach (GameObject player in array)
            {
                if (Vector3.Distance(player.transform.position, gameObject.transform.position) < distance)
                {
                    target = player;
                    distance = Vector3.Distance(player.transform.position, gameObject.transform.position);
                }
            }
            gameObject.transform.parent.LookAt(target.transform);
        }
    }
    void OnTriggerEnter(Collider other)
    {
        if (isFireball && other.tag != "donotchange")
        {
            gameObject.GetComponent<Rigidbody>().velocity = new Vector3(0f,0f,0f);
            gameObject.GetComponent<Animation>().Play();
        }
    }

    public void Destroy()
    {
        gameObject.GetComponent<Animation>().Stop();
        Destroy(gameObject);
    }
}
