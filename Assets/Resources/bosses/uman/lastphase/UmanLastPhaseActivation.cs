using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UmanLastPhaseActivation : MonoBehaviour
{
    public AnimationClip BeamAttack;
    public AnimationClip UmbrellaAttack;
    public AnimationClip DashAttack;
    public AnimationClip BlindAttack;
    public float LastPhaseHealth;
    public AudioClip LastPhaseMusic;
    void Activate()
    {
        Animation anim = gameObject.transform.parent.gameObject.GetComponent<UmanLastPhase>().anim;
        anim.Stop();
        anim.RemoveClip("ToLastPhase");
        anim.AddClip(BeamAttack, "BeamAttack");
        anim.AddClip(UmbrellaAttack, "UmbrellaAttack");
        anim.AddClip(DashAttack, "DashAttack");
        anim.AddClip(BlindAttack, "BlindAttack");
        anim.Stop();
        gameObject.GetComponent<Sounds>().health = LastPhaseHealth;
        gameObject.transform.parent.gameObject.GetComponent<ZombiUpravlenie>().health = LastPhaseHealth;
        gameObject.transform.parent.gameObject.GetComponent<ZombiUpravlenie>().DontDieYet = false;
        gameObject.transform.parent.gameObject.GetComponent<ZombiUpravlenie>().enabled = true;
        gameObject.transform.parent.gameObject.AddComponent<LightmanHP>().music = LastPhaseMusic;
        gameObject.transform.parent.gameObject.AddComponent<LightmanAI>();
        gameObject.transform.parent.gameObject.GetComponent<InitializeHealthbar>().maxhealth = LastPhaseHealth;
        gameObject.transform.parent.gameObject.GetComponent<InitializeHealthbar>().alreadyTimedBar = 0;
        gameObject.transform.parent.gameObject.GetComponent<InitializeHealthbar>().timer = 0f;
        gameObject.GetComponent<Sounds>().timeToHit = 0f;
        gameObject.GetComponent<Sounds>().notAttackingSpeed = 0f;
        gameObject.GetComponent<Sounds>().attackingSpeed = 0f;
        gameObject.GetComponent<Sounds>().detectRadius = 1000f;
        gameObject.GetComponent<Sounds>().attackDistance = 0f;
        anim.Stop();
    }
}
