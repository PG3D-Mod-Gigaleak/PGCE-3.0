using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Coin : MonoBehaviour
{
    public float RicochetVelocity;
    private bool Ricochet = false;
    private GameObject target;
    public float mindist;
    void OnCollisionEnter(Collision other)
    {
        if (other.gameObject.tag == "MarksmanBullet" && Ricochet == false)
        {
            Debug.LogError("CoinRicochet");
            Ricochet = true;
            List<GameObject> array = new List<GameObject>();
            foreach (GameObject gameObject in array)
            {
                if (Vector3.Distance(base.transform.position,gameObject.transform.position) < mindist && gameObject.GetComponent<FirstPersonControl>().isMine == false)
                {
                    target = gameObject;
                    mindist = Vector3.Distance(base.transform.position,gameObject.transform.position);
                }
            }
            gameObject.GetComponent<Rigidbody>().useGravity = false;
            gameObject.GetComponent<Rigidbody>().isKinematic = true;
            transform.LookAt(target.transform.position);
            gameObject.GetComponent<Rigidbody>().velocity = new Vector3(0f,0f,0f);
            gameObject.GetComponent<Rigidbody>().AddForce(transform.forward * RicochetVelocity);
        }
        else if (Ricochet == true && (other.gameObject.tag == "ZombieCollider" || other.gameObject.tag == "BodyCollider" || other.gameObject.tag == "HeadCollider"))
        {
            gameObject.GetComponent<DamageZone>().UseCollisionEnter = true;
            StartCoroutine(DestroyW());
        }
    }
    IEnumerator DestroyW()
    {
        yield return new WaitForSeconds(0.1f);
        Destroy(gameObject);
    }
}
