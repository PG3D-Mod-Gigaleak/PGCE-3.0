using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerCoinThrow : MonoBehaviour
{
    public float forwardVelocity;
    public float mass;
    public float acceleration;
    public float drag;
    public float angulardrag;
    public float coopDamage;
    public float multiplayerDamage;
    public float RicochetRadius;
    public bool throwNow;
    private bool Thrown;
    public float cooldown;
    public Transform rotationFace;
    public GameObject Coin;
    public float RicochetVelocity;
    void Update()
    {
        if (throwNow == true && Thrown == false)
        {
            Thrown = true;
            GameObject coin = Instantiate(Coin, rotationFace.position + rotationFace.forward * 2, rotationFace.rotation);
            coin.GetComponent<Rigidbody>().AddForce(rotationFace.forward * forwardVelocity);
            coin.GetComponent<Coin>().mindist = RicochetRadius;
            coin.GetComponent<DamageZone>().coopDamage = coopDamage;
            coin.GetComponent<DamageZone>().multiplayerDamage = multiplayerDamage;
            coin.GetComponent<DamageZone>().damageCooldown = cooldown;
            coin.GetComponent<Coin>().RicochetVelocity = RicochetVelocity;
            StartCoroutine(Wait());
        }
    }

    IEnumerator Wait()
    {
        yield return new WaitForSeconds(cooldown);
        Thrown = false;
    }
}
