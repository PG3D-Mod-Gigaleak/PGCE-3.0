using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Coin : MonoBehaviour
{
    public float RicochetVelocity;
    private bool Ricochet = false;
    private GameObject target = null;
    public float mindist;
    public bool Merged = false;
    public bool FoundCoin = false;

    public float goldmindist;
    public List<GameObject> Coins = new List<GameObject>();
    void OnCollisionEnter(Collision other)
    {
        if (other.gameObject.tag == "MarksmanBullet" && Ricochet == false)
        {
            Debug.LogError("CoinRicochet");
            Ricochet = true;
            goldmindist = mindist;
            GameObject[] array1 = GameObject.FindGameObjectsWithTag("ZombieCollider");
            foreach (GameObject gameObject in array1)
            {
                if (Vector3.Distance(base.transform.position,gameObject.transform.position) < mindist)
                {
                    target = gameObject;
                    mindist = Vector3.Distance(base.transform.position,gameObject.transform.position);
                }
            }
            GameObject[] array2 = GameObject.FindGameObjectsWithTag("BodyCollider");
            foreach (GameObject gameObject in array2)
            {
                if (Vector3.Distance(base.transform.position,gameObject.transform.position) < mindist && gameObject.transform.parent.GetComponent<FirstPersonControl>().isMine == false)
                {
                    target = gameObject;
                    mindist = Vector3.Distance(base.transform.position,gameObject.transform.position);
                }
            }
            GameObject[] array3 = GameObject.FindGameObjectsWithTag("PlayerCoin");
            Coins = new List<GameObject>();
            foreach (GameObject gameObject1 in array3)
            {
                if (gameObject != gameObject1 && Merged == false && FoundCoin == false && Vector3.Distance(base.transform.position,gameObject1.transform.position) < goldmindist)
                {
                Coins.Add(gameObject);
                FoundCoin = true;
                goldmindist = Vector3.Distance(base.transform.position,gameObject1.transform.position);
                }
            }
            // if (Coins.Count > 0)
            // {
            //     target = Coins[0];
            //     gameObject.GetComponent<Rigidbody>().useGravity = false;
            //     transform.LookAt(target.transform.position);
            //     gameObject.GetComponent<Rigidbody>().velocity = new Vector3(0f,0f,0f);
            //     transform.LookAt(target.transform.position);
            //     gameObject.GetComponent<Rigidbody>().AddForce(transform.forward * RicochetVelocity);
            //     transform.LookAt(target.transform.position);
            //     gameObject.GetComponent<SphereCollider>().isTrigger = true;
            // }
            if (target != null && !Coins.Contains(target))
            {
            gameObject.GetComponent<Rigidbody>().useGravity = false;
            transform.LookAt(target.transform.position);
            gameObject.GetComponent<Rigidbody>().velocity = new Vector3(0f,0f,0f);
            transform.LookAt(target.transform.position);
            gameObject.GetComponent<Rigidbody>().AddForce(transform.forward * RicochetVelocity);
            transform.LookAt(target.transform.position);
            gameObject.GetComponent<SphereCollider>().isTrigger = true;
            }
            else if (target == null)
            {
                gameObject.GetComponent<Rigidbody>().useGravity = false;
                gameObject.GetComponent<Rigidbody>().velocity = new Vector3(0f,0f,0f);
                gameObject.GetComponent<Rigidbody>().AddForce(transform.forward * RicochetVelocity);
            }
        }
        else if (other.gameObject.tag == "Untagged" && other.gameObject.tag != "MarksmanBullet" && other.gameObject.tag != "BluePortal" && other.gameObject.tag != "OrangePortal")
        {
            StartCoroutine(DestroyW());
        }
    }
    
    void OnTriggerEnter(Collider other)
    {
        if (Ricochet == true)
        {
            if (other.tag == "ZombieCollider" || other.tag == "BodyCollider" || other.tag == "HeadCollider" || other.tag == "Enemy" || other.tag == "Player")
            {
                StartCoroutine(DestroyW());
            }
            // else if (other.tag == "PlayerCoin" && other == Coins[0] && Merged == false && Coins.Contains(target))
            // {
            //     Merged = true;
            // }
            else
            {
                StartCoroutine(DestroyW());
            }
        }
    }

    IEnumerator DestroyW()
    {
        yield return new WaitForSeconds(0.01f);
        Destroy(gameObject);
    }

    void FixedUpdate()
    {
        if (Merged == true)
        {
            gameObject.transform.position = Coins[0].transform.position;
        }
    }
}
