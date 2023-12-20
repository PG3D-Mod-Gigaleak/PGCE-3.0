using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SlasherDamage : MonoBehaviour
{
    public List<GameObject> AlreadyHit = new List<GameObject>();
    public GameObject slasheffect;
    void OnTriggerEnter(Collider other)
    {
        if (other.tag == "BodyCollider")
        {
            if (other.transform.parent.GetComponent<SkinName>().playerMoveC.CurHealth > 0f)
            {
                if (!AlreadyHit.Contains(other.gameObject))
                {
                    Instantiate(slasheffect, other.transform.position, Quaternion.identity);
                    AlreadyHit.Add(other.gameObject);
                }
            }
        }
        else if (other.tag == "ZombieCollider")
        {
            if (other.transform.parent.GetComponent<ZombiUpravlenie>().health > 0f)
            {
                if (!AlreadyHit.Contains(other.gameObject))
                {
                    Instantiate(slasheffect, other.transform.position, Quaternion.identity);
                }
            }
        }
    }
}
