using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PROMusket : MonoBehaviour
{
    public int ReflectCount;
    public float velocity;
    public GameObject explosion;
    public bool isBullet;
    public GameObject bullet;
    public GameObject shootbox;
    public GameObject host;
    public AudioClip explosionclip;
    // public bool CanRicochet;

    private Vector3 lastVelocity;

    public void Shoot()
    {
        GameObject orb = Instantiate(bullet, shootbox.transform.position, host.transform.rotation);
        orb.GetComponent<PROMusket>().ReflectCount = ReflectCount;
        orb.GetComponent<PROMusket>().velocity = velocity;
        orb.GetComponent<Rigidbody>().velocity = new Vector3(0f,0f,0f);
        orb.GetComponent<Rigidbody>().AddForce(host.transform.forward * velocity);
    }

    // public void Start()
    // {
    //     CanRicochet = false;
    //     StartCoroutine(Cooldown());
    // }

    void OnCollisionEnter(Collision other)
    {
        if (isBullet)
        {
            ReflectCount -= 1;
            // CanRicochet = false;
            // StartCoroutine(Cooldown());
            GameObject Explosion = Instantiate(explosion, other.contacts[0].point, Quaternion.identity);
            if (ReflectCount < 0)
            {
            Explosion.GetComponent<AudioSource>().Stop();
            Explosion.GetComponent<AudioSource>().clip = explosionclip;
            Explosion.GetComponent<AudioSource>().Play();
            }
            float lastSpeed = lastVelocity.magnitude;
            gameObject.GetComponent<Rigidbody>().velocity = Vector3.Reflect(lastVelocity.normalized, other.contacts[0].normal) * Mathf.Max(lastSpeed, 0);
            if (ReflectCount < 0)
            {

                Destroy(gameObject);
            }
        }
    }

    // IEnumerator Cooldown()
    // {
    //     yield return new WaitForSeconds(0.025f);
    //     CanRicochet = true;
    // }
    void LateUpdate()
    {
        if (isBullet)
        {
        lastVelocity = gameObject.GetComponent<Rigidbody>().velocity;
        }
    }
}
