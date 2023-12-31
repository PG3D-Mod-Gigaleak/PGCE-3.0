using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class COMDHShotgunImpact : MonoBehaviour
{
    public GameObject effect;
    public GameObject host;
    public GameObject player;
    public bool ImpactNow;

    public List<GameObject> array = new List<GameObject>();

    void Start()
    {
        player = host.transform.parent.parent.parent.gameObject;
    }
    void OnTriggerStay(Collider other)
    {
        if (ImpactNow == true && !array.Contains(other.gameObject))
        {
            if (other.tag == "BodyCollider")
            {
                if (other.transform.parent.gameObject != player)
                {
                    Instantiate(effect, other.transform.position + new Vector3(0,1,0), Quaternion.identity);
                    array.Add(other.gameObject);
                }
            }
            else if (other.tag == "ZombieCollider")
            {
                Instantiate(effect, other.transform.position + new Vector3(0,1f,0), Quaternion.identity);
                array.Add(other.gameObject);
            }
        }
    }
}
