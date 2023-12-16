using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShadowBall : MonoBehaviour
{
    public bool Discharge = false;
    public bool AlreadyDischarged = false;
    public float OrbCooldown = 1f;
    public GameObject ShadowOrb;
    public float detectRadius = 0f;
    public Transform Target;
    void Update()
    {
        if (Discharge == true && AlreadyDischarged == false)
        {
            AlreadyDischarged = true;
            gameObject.GetComponent<AudioSource>().enabled = true;
            gameObject.GetComponent<AudioSource>().Play();
            Discharg();
        }
        if (transform.localScale.x < 0f && transform.localScale.y < 0f && transform.localScale.z < 0f)
        {
            Destroy(gameObject);
        }
    }

    void FixedUpdate()
    {
        if (Discharge == false && AlreadyDischarged == false)
        {
            transform.localScale = new Vector3(transform.localScale.x + 0.05f, transform.localScale.y + 0.05f, transform.localScale.z + 0.05f);
            detectRadius += 0.5f;
        }
    }

    void Discharg()
    {
        StartCoroutine(Dis());
    }

    public IEnumerator Dis()
    {
        float num = detectRadius;
        Target = null;
        GameObject[] array = GameObject.FindGameObjectsWithTag("ZombieCollider");
        foreach (GameObject gameObject in array)
        {
            if (Vector3.Distance(base.transform.position,gameObject.transform.position) < num && gameObject.transform.parent.GetComponent<ZombiUpravlenie>().health > 0f)
            {
                Target = gameObject.transform;
                num = Vector3.Distance(base.transform.position,gameObject.transform.position);
            }
        }
        GameObject[] array2 = GameObject.FindGameObjectsWithTag("BodyCollider");
        // foreach (GameObject gameObject in array2)
        // {
        //     if (Vector3.Distance(base.transform.position,gameObject.transform.position) < num && gameObject.GetComponent<FirstPersonControl>().isMine == false)
        //     {
        //         Target = gameObject.transform;
        //         num = Vector3.Distance(base.transform.position,gameObject.transform.position);
        //     }
        // }
        if (Target != null)
        {
            GameObject SpawnedOrb = Instantiate(ShadowOrb, transform.position, Quaternion.identity);
            SpawnedOrb.GetComponent<Rigidbody>().velocity = new Vector3(0f,0f,0f);
            SpawnedOrb.transform.LookAt(Target.position);
            SpawnedOrb.GetComponent<Rigidbody>().AddForce(SpawnedOrb.transform.forward * 1500);
        }
        transform.localScale = new Vector3(transform.localScale.x - 0.25f,transform.localScale.y - 0.25f,transform.localScale.z - 0.25f);
        detectRadius -= 2.5f;
        yield return new WaitForSeconds(OrbCooldown);
        Discharg();
    }
}
