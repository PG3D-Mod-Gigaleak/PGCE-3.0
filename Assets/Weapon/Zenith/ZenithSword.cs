using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZenithSword : MonoBehaviour
{
    public Transform host;
    public float initialvelocity;
    public float decelerationmulti = 1f;
    public Transform spawner;
    public bool GoBack = false;
    public List<GameObject> ImpactList = new List<GameObject>();
    public GameObject ImpactFX;
    public float ImpactCooldownS;
    void Start()
    {
        ImpactCooldownS = gameObject.GetComponent<DamageZone>().damageCooldown;
    }

    public float Distance = 0f;
    void Update()
    {
        if (decelerationmulti >= 0f)
        {
            gameObject.transform.parent.gameObject.GetComponent<Rigidbody>().velocity = new Vector3(0f,0f,0f);
            decelerationmulti -= Time.deltaTime;
            float velocity = initialvelocity * decelerationmulti;
            gameObject.transform.parent.gameObject.GetComponent<Rigidbody>().AddForce(transform.parent.forward * velocity);
        }
        else
        {
            transform.parent.LookAt(host.transform.position);
            gameObject.transform.parent.gameObject.GetComponent<Rigidbody>().velocity = new Vector3(0f,0f,0f);
            decelerationmulti -= Time.deltaTime;
            float velocity = initialvelocity * decelerationmulti * -1;
            gameObject.transform.parent.gameObject.GetComponent<Rigidbody>().AddForce(transform.parent.forward * velocity);
        }
        Distance = Vector3.Distance(transform.parent.position,host.position);
        if (decelerationmulti < 0f && Distance < 2f)
        {
            Destroy(transform.parent.gameObject);
        }
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.tag == "BodyCollider")
        {
            if (other.transform.parent == host)
            {
                return;
            }
        }
        if (!ImpactList.Contains(other.gameObject))
        {
            if (other.tag == "ZombieCollider" && other.transform.parent.GetComponent<ZombiUpravlenie>().health > 0f)
            {
                GameObject Impact = Instantiate(ImpactFX, other.transform.position, Quaternion.identity);
                Color swordcolor = gameObject.GetComponent<Renderer>().material.GetColor("_Color");
                Impact.GetComponent<ParticleSystemRenderer>().material.SetColor("_TintColor",swordcolor);
                ImpactList.Add(other.gameObject);
                int newindex = ImpactList.Count - 1;
                StartCoroutine(ImpactCooldown(ImpactList[newindex]));
            }
            if (other.tag == "BodyCollider" && other.transform.parent.GetComponent<SkinName>().playerMoveC.CurHealth > 0f)
            {
                GameObject Impact = Instantiate(ImpactFX, other.transform.position, Quaternion.identity);
                Color swordcolor = gameObject.GetComponent<Renderer>().material.GetColor("_Color");
                Impact.GetComponent<ParticleSystemRenderer>().material.SetColor("_TintColor",swordcolor);
                ImpactList.Add(other.gameObject);
                int newindex = ImpactList.Count - 1;
                StartCoroutine(ImpactCooldown(ImpactList[newindex]));
            }
        }
    }

    IEnumerator ImpactCooldown(GameObject newobject)
    {
        yield return new WaitForSeconds(ImpactCooldownS);
        ImpactList.Remove(newobject);
    }
}
