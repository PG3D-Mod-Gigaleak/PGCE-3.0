using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class InitializeSecond : MonoBehaviour
{
    private ZombiUpravlenie zombiupravlenie;
    private bool AlreadySecond = false;
    void Start()
    {
        zombiupravlenie = GetComponent<ZombiUpravlenie>();
    }
    void Update()
    {
    if (zombiupravlenie.health < (gameObject.transform.GetChild(0).GetComponent<Sounds>().health / 2) && AlreadySecond == false) 
    {
        gameObject.transform.GetChild(0).GetComponent<Animation>().RemoveClip("Zombie_Walk_1");
        gameObject.transform.GetChild(0).GetComponent<Animation>().Stop();
        gameObject.transform.GetChild(0).GetComponent<Animation>().Play("Zombie_Walk");
        AlreadySecond = true;
    }
    }
}
