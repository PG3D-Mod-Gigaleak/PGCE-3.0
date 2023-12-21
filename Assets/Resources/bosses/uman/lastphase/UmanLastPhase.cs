using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UmanLastPhase : MonoBehaviour
{
    public bool alreadyLastPhase = false;
    public AnimationClip LastPhase;
    public Animation anim;
    void Update()
    {
        if (gameObject.GetComponent<CheckForWeapon>().hasWeapon == true && alreadyLastPhase == false )
        {
            if (gameObject.GetComponent<ZombiUpravlenie>().health <= 0f)
            {
                gameObject.GetComponent<ZombiUpravlenie>().deaded = false;
                gameObject.GetComponent<ZombiUpravlenie>().enabled = false;
                alreadyLastPhase = true;
                anim = gameObject.transform.GetChild(0).gameObject.GetComponent<Animation>();
                anim.Stop();
                gameObject.transform.GetChild(0).gameObject.GetComponent<Sounds>().timeToHit = 0f;
                gameObject.transform.GetChild(0).gameObject.GetComponent<Sounds>().notAttackingSpeed = 0f;
                gameObject.transform.GetChild(0).gameObject.GetComponent<Sounds>().attackingSpeed = 0f;
                gameObject.transform.GetChild(0).gameObject.GetComponent<Sounds>().detectRadius = 1000f;
                gameObject.transform.GetChild(0).gameObject.GetComponent<Sounds>().attackDistance = 0f;
                anim.Play("ToLastPhase");
            }
        }
    }
}
