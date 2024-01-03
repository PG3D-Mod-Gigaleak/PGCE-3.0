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
    public void OnCollisionEnter(Collision other)
    {
        if (other.gameObject.tag == "MarksmanBullet" && Ricochet == false)
        {
            Debug.LogError("CoinRicochet");
            Ricochet = true;
            goldmindist = mindist;
            GameObject[] array1 = GameObject.FindGameObjectsWithTag("ZombieCollider");
            foreach (GameObject gameObject1 in array1)
            {
                if (Vector3.Distance(gameObject.transform.position,gameObject1.transform.position) < mindist)
                {
                    target = gameObject1;
                    mindist = Vector3.Distance(gameObject.transform.position,gameObject1.transform.position);
                }
            }
            GameObject[] array2 = GameObject.FindGameObjectsWithTag("BodyCollider");
            foreach (GameObject gameObject1 in array2)
            {
                if (Vector3.Distance(gameObject.transform.position,gameObject1.transform.position) < mindist && gameObject1.transform.parent.GetComponent<FirstPersonControl>().isMine == false)
                {
                    target = gameObject1;
                    mindist = Vector3.Distance(gameObject.transform.position,gameObject1.transform.position);
                }
            }
            goldmindist = mindist;
            GameObject[] array3 = GameObject.FindGameObjectsWithTag("PlayerCoin");
            Coins = new List<GameObject>();
            foreach (GameObject gameObject1 in array3)
            {
                if (gameObject != gameObject1 && Merged == false && FoundCoin == false && Vector3.Distance(gameObject.transform.position,gameObject1.transform.position) < goldmindist && gameObject1.TryGetComponent<Coin>(out Coin Con))
                {
                if (Con)
                {
                if (Con.Merged == false)
                {
                Coins.Add(gameObject1);
                FoundCoin = true;
                goldmindist = Vector3.Distance(gameObject.transform.position,gameObject1.transform.position);
                target = gameObject1;
                }
                }
                }
            }
            if (target != null && !Coins.Contains(target))
            {
            gameObject.GetComponent<Rigidbody>().useGravity = false;
            transform.LookAt(target.transform.position);
            gameObject.GetComponent<Rigidbody>().velocity = new Vector3(0f,0f,0f);
            transform.LookAt(target.transform.position);
            gameObject.GetComponent<Rigidbody>().AddForce(transform.forward * RicochetVelocity);
            transform.LookAt(target.transform.position);
            gameObject.GetComponent<SphereCollider>().isTrigger = true;
            gameObject.GetComponent<AudioSource>().Play();
            }
            else if (target != null && Coins.Contains(target))
            {
            gameObject.GetComponent<Rigidbody>().useGravity = false;
            transform.LookAt(target.transform.position);
            gameObject.GetComponent<Rigidbody>().velocity = new Vector3(0f,0f,0f);
            transform.LookAt(target.transform.position);
            gameObject.GetComponent<Rigidbody>().AddForce(transform.forward * RicochetVelocity * 1/2);
            transform.LookAt(target.transform.position);
            gameObject.GetComponent<SphereCollider>().isTrigger = true;
            gameObject.GetComponent<AudioSource>().Play();
            }
            else if (target == null)
            {
                gameObject.GetComponent<Rigidbody>().useGravity = false;
                gameObject.GetComponent<Rigidbody>().velocity = new Vector3(0f,0f,0f);
                gameObject.GetComponent<Rigidbody>().AddForce(transform.forward * RicochetVelocity);
                gameObject.GetComponent<AudioSource>().Play();
            }
        }
        else if (other.gameObject.tag == "Untagged" && other.gameObject.tag != "MarksmanBullet" && other.gameObject.tag != "BluePortal" && other.gameObject.tag != "OrangePortal" && other.transform.tag != "PlayerCoin")
        {
            StartCoroutine(DestroyW());
        }
    }

    public void PublicMerge(GameObject other)
    {
        Debug.LogError("CoinRicochet");
        Ricochet = true;
        goldmindist = mindist;
        GameObject[] array1 = GameObject.FindGameObjectsWithTag("ZombieCollider");
        foreach (GameObject gameObject1 in array1)
        {
            if (Vector3.Distance(gameObject.transform.position,gameObject1.transform.position) < mindist)
            {
                target = gameObject1;
                mindist = Vector3.Distance(gameObject.transform.position,gameObject1.transform.position);
            }
        }
        GameObject[] array2 = GameObject.FindGameObjectsWithTag("BodyCollider");
        foreach (GameObject gameObject1 in array2)
        {
            if (Vector3.Distance(gameObject.transform.position,gameObject1.transform.position) < mindist && gameObject1.transform.parent.GetComponent<FirstPersonControl>().isMine == false)
            {
                target = gameObject1;
                mindist = Vector3.Distance(gameObject.transform.position,gameObject1.transform.position);
            }
        }
        goldmindist = mindist;
        GameObject[] array3 = GameObject.FindGameObjectsWithTag("PlayerCoin");
        Coins = new List<GameObject>();
        foreach (GameObject gameObject1 in array3)
        {
            if (gameObject != gameObject1 && Merged == false && FoundCoin == false && Vector3.Distance(gameObject.transform.position,gameObject1.transform.position) < goldmindist && gameObject1.TryGetComponent<Coin>(out Coin Con))
            {
            if (Con)
            {
            if (Con.Merged == false)
            {
            Coins.Add(gameObject1);
            FoundCoin = true;
            goldmindist = Vector3.Distance(gameObject.transform.position,gameObject1.transform.position);
            target = gameObject1;
            }
            }
            }
        }
        if (target != null && !Coins.Contains(target))
        {
        gameObject.GetComponent<Rigidbody>().useGravity = false;
        transform.LookAt(target.transform.position);
        gameObject.GetComponent<Rigidbody>().velocity = new Vector3(0f,0f,0f);
        transform.LookAt(target.transform.position);
        gameObject.GetComponent<Rigidbody>().AddForce(transform.forward * RicochetVelocity);
        transform.LookAt(target.transform.position);
        gameObject.GetComponent<SphereCollider>().isTrigger = true;
        gameObject.GetComponent<AudioSource>().Play();
        }
        else if (target != null && Coins.Contains(target))
        {
        gameObject.GetComponent<Rigidbody>().useGravity = false;
        transform.LookAt(target.transform.position);
        gameObject.GetComponent<Rigidbody>().velocity = new Vector3(0f,0f,0f);
        transform.LookAt(target.transform.position);
        gameObject.GetComponent<Rigidbody>().AddForce(transform.forward * RicochetVelocity * 1/2);
        transform.LookAt(target.transform.position);
        gameObject.GetComponent<SphereCollider>().isTrigger = true;
        gameObject.GetComponent<AudioSource>().Play();
        }
        else if (target == null)
        {
            gameObject.GetComponent<Rigidbody>().useGravity = false;
            gameObject.GetComponent<Rigidbody>().velocity = new Vector3(0f,0f,0f);
            gameObject.GetComponent<Rigidbody>().AddForce(transform.forward * RicochetVelocity);
            gameObject.GetComponent<AudioSource>().Play();
        }
    }
    
    void OnTriggerEnter(Collider other)
    {
        if (Ricochet == true)
        {
            if ((other.tag == "ZombieCollider" || other.tag == "BodyCollider" || other.tag == "HeadCollider" || other.tag == "Enemy" || other.tag == "Player") && other.tag != "PlayerCoin")
            {
                StartCoroutine(DestroyW());
            }
            else if (other.tag != "PlayerCoin")
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
        if (FoundCoin == true && Ricochet == true && Vector3.Distance(gameObject.transform.position,target.transform.position) <= 5f && target != null && Merged == false)
        {
            if (target.GetComponent<Coin>().Merged == false)
            {
                gameObject.transform.position = target.transform.position;
                Merged = true;
                StartCoroutine(ello());
            }
        }
        if (Merged == true)
        {
            gameObject.transform.position = target.transform.position;
            gameObject.transform.rotation = target.transform.rotation;
            gameObject.GetComponent<Rigidbody>().velocity = new Vector3(0f,0f,0f);
            gameObject.GetComponent<Rigidbody>().AddForce(target.transform.forward * RicochetVelocity);
        }
    }

    public IEnumerator ello()
    {
        yield return new WaitForSeconds(0.0001f);
        target.GetComponent<Coin>().PublicMerge(gameObject);
    }
}
