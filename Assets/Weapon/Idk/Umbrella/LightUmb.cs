using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LightUmb : MonoBehaviour
{
    public GameObject orb;
    public float velocity;
    public GameObject umbrella;
    public GameObject host;
    public bool isOrb;
    public bool isUmbrella;
    public GameObject player;
    public int Orbs;
    public float distance;
    public GameObject target;
    public bool Exploded;
    public float Timer;
    public float x;
    public float y;
    public float z;

    void Start()
    {
        if (!isOrb && !isUmbrella)
        {
            player = host.transform.parent.parent.parent.gameObject;
        }
    }

    public void Shoot()
    {
        target = null;
        int oldorbs = Orbs;
        List<GameObject> enemylist = new List<GameObject>();
        GameObject[] array = GameObject.FindGameObjectsWithTag("ZombieCollider");
        foreach (GameObject game in array)
        {
            if (!(Orbs <= 0f))
            {
                if (Vector3.Distance(player.transform.position, game.transform.position) < distance && game.transform.parent.GetComponent<ZombiUpravlenie>().health > 0f && !enemylist.Contains(game.gameObject))
                {
                    GameObject Orb = PhotonNetwork.Instantiate(LoadObject(orb), player.transform.position + new Vector3(0f,0.5f,0f), host.transform.rotation,0);
                    Orb.GetComponent<LightUmb>().player = player;
                    Orb.GetComponent<LightUmb>().target = game.transform.parent.gameObject;
                    Orb.GetComponent<LightUmb>().velocity = velocity;
                    enemylist.Add(game.gameObject);
                    Orbs -= 1;
                }
            }
        }
        GameObject[] array2 = GameObject.FindGameObjectsWithTag("BodyCollider");
        foreach (GameObject game in array2)
        {
            if (!(Orbs <= 0f))
            {
                if (Vector3.Distance(player.transform.position, game.transform.position) < distance && game.transform.parent.GetComponent<SkinName>().playerMoveC.CurHealth > 0f && game.transform.parent.gameObject != player && !enemylist.Contains(game.gameObject))
                {
                    GameObject Orb = PhotonNetwork.Instantiate(LoadObject(orb), player.transform.position + new Vector3(0f,0.5f,0f), host.transform.rotation,0);
                    Orb.GetComponent<LightUmb>().player = player;
                    Orb.GetComponent<LightUmb>().target = game.transform.parent.gameObject;
                    Orb.GetComponent<LightUmb>().velocity = velocity;
                    enemylist.Add(game.gameObject);
                    Orbs -= 1;
                }
            }
        }
        Orbs = oldorbs;
    }

    public void Umbrellas()
    {
        Vector3 pos = player.transform.position;
        Timer = 10f;
        Umbr(pos);
    }

    public void Umbr(Vector3 pos)
    {
        if (Timer > 0f)
        {
            StartCoroutine(Umb(pos));
        }
    }

    public IEnumerator Umb(Vector3 pos)
    {
        GameObject Um = PhotonNetwork.Instantiate(LoadObject(umbrella), pos + new Vector3(Random.Range(-x,x),y,Random.Range(-z,z)), Quaternion.identity,0);
        Um.transform.localEulerAngles = Um.transform.rotation.eulerAngles + new Vector3(90f,0f,0f);
        Um.transform.localEulerAngles = Um.transform.rotation.eulerAngles + new Vector3(Random.Range(-45,45),Random.Range(-45,45),Random.Range(-45,45));
        Um.GetComponent<Rigidbody>().velocity = new Vector3(0f,0f,0f);
        Um.GetComponent<Rigidbody>().AddForce(Um.transform.forward * velocity);
        yield return new WaitForSeconds(0.5f);
        Umbr(pos);
    }


    void Update()
    {
        Timer -= Time.deltaTime;
    }

    void FixedUpdate()
    {
        if (isOrb && !Exploded && target != null)
        {
            gameObject.GetComponent<Rigidbody>().velocity = new Vector3(0f,0f,0f);
            gameObject.transform.LookAt(target.transform.position);
            gameObject.transform.localEulerAngles = gameObject.transform.rotation.eulerAngles + new Vector3(-30f,0f,0f);
            gameObject.GetComponent<Rigidbody>().AddForce(gameObject.transform.forward * velocity);
        }
    }

    void OnTriggerEnter(Collider other)
    {
        if (isOrb && !Exploded && target != null)
        {
            if ((other.tag == "BodyCollider" || other.tag == "ZombieCollider") && other.transform.parent.gameObject != player)
            {
                gameObject.transform.GetComponent<Animation>().Stop();
                gameObject.transform.GetComponent<Animation>().Play();
                gameObject.GetComponent<Rigidbody>().velocity = new Vector3(0f,0f,0f);
                Exploded = true;
            }
        }
        if (isUmbrella && !Exploded && other.gameObject.name != "Explosion")
        {
            gameObject.transform.GetComponent<Animation>().Stop();
            gameObject.transform.GetComponent<Animation>().Play();
            gameObject.GetComponent<Rigidbody>().velocity = new Vector3(0f,0f,0f);
            Exploded = true;
        }
    }

    string LoadObject(GameObject Object)
    {
        GameObject Prefab = Object;
        Prefab.TryGetComponent<PhotonView>(out PhotonView _pv);
        if (!_pv)
        {
            Prefab.AddComponent<PhotonView>();
        }
        string ObjectName = Object.name;
        return ObjectName.StartsWith("Enemy") ? "Instantiatables/enemyobjects/" + ObjectName : "Instantiatables/playerobjects/" + ObjectName;
    }
}
