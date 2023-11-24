using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LifeRocket : MonoBehaviour
{

    public float TimeToLive;
    public bool Phantom;
    public bool Gravity;
    public bool VelocityDamage;
    public float velocity;
    public float mass;
    public float drag;
    public float multiplayerDamageMulti;
    public float coopDamageMulti;

    public string explosionName;
    // Start is called before the first frame update
    void Start()
    {
        explosionName = gameObject.transform.parent.gameObject.GetComponent<Rocket>().weaponName;
        KeepAlive();
        StartCoroutine(LifeSpan());
        if (VelocityDamage == true)
        {
            gameObject.transform.parent.gameObject.AddComponent<DamageZone>();
        }
    }

    void KeepAlive()
    {
        gameObject.transform.parent.gameObject.GetComponent<BoxCollider>().isTrigger = false;
        gameObject.transform.parent.gameObject.GetComponent<Rocket>().enabled = false;
        gameObject.transform.parent.gameObject.GetComponent<BoxCollider>().enabled = false;
        StartCoroutine(SetProp());
        if (Gravity == true)
        {
            gameObject.GetComponent<SphereCollider>().enabled = false;
            gameObject.GetComponent<SphereCollider>().isTrigger = false;
            gameObject.transform.parent.gameObject.GetComponent<Rigidbody>().useGravity = true;
            gameObject.transform.parent.gameObject.GetComponent<Rigidbody>().isKinematic = false;
            gameObject.transform.parent.gameObject.GetComponent<Rigidbody>().AddForce(transform.forward * velocity);
            gameObject.transform.parent.gameObject.GetComponent<Rigidbody>().mass = mass;
            gameObject.transform.parent.gameObject.GetComponent<Rigidbody>().drag = drag;
        }
    }

    private IEnumerator SetProp()
    {
        yield return new WaitForSeconds(0.05f);
        gameObject.GetComponent<SphereCollider>().enabled = true;
    }

    private IEnumerator LifeSpan()
    {
        yield return new WaitForSeconds(TimeToLive);
        gameObject.transform.parent.gameObject.GetComponent<Rocket>().Collide(explosionName);
    }

    void Update()
    {
        if (VelocityDamage == true)
        {
            gameObject.transform.parent.gameObject.GetComponent<DamageZone>().damageCooldown = 100f;
            gameObject.transform.parent.gameObject.GetComponent<DamageZone>().multiplayerDamage = gameObject.transform.parent.gameObject.GetComponent<Rigidbody>().velocity.magnitude * multiplayerDamageMulti;
            gameObject.transform.parent.gameObject.GetComponent<DamageZone>().coopDamage = gameObject.transform.parent.gameObject.GetComponent<Rigidbody>().velocity.magnitude * coopDamageMulti;
        }
    }


}
