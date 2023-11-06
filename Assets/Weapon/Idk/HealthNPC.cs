using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HealthNPC : MonoBehaviour
{
    [HideInInspector] public Vector3 targetPos;
    public static HealthNPC instance;
    public Transform targetNPC;
    private float value;
    public Transform fillBar;
    private int alreadyPlayed = 0;
    private float timer = 1f;
    private float timeNoDamage = 1f;
    private float animLength = 1f;
    private float add = 0.075f;
    private float health;
    public float health1;
    private float maxhealth;
    void Awake()
    {
        instance = this;
    }
    void OnTriggerStay(Collider other)
    {
        if ((other.tag == "ZombieCollider") || (other.tag == "BodyCollider"))
        {
        add = add + 0.025f;
        }
    }
    void Update()
    {
        if (targetNPC.CompareTag("Enemy"))
        {
        health = targetNPC.GetComponent<ZombiUpravlenie>().health;
        maxhealth = targetNPC.GetChild(0).GetComponent<Sounds>().health;
        }
        else if (targetNPC.CompareTag("Player"))
        {
        health = targetNPC.GetComponent<SkinName>().playerMoveC.CurHealth;
        maxhealth = 100f;
        }
        if (health1 == health)
        {
            timeNoDamage += Time.deltaTime;
        }
        else
        {
            timeNoDamage = 0f;
        }
        if ((health <= 0f) || (timeNoDamage >= 5f) )
        {
            animLength = gameObject.GetComponent<Animation>()["HealthDown"].length;
            if (alreadyPlayed == 0)
            {
                if (timeNoDamage >= 5f)
                {
                targetNPC.GetComponent<InitializeHealthbar>().maxhealth = health1;
                targetNPC.GetComponent<InitializeHealthbar>().alreadyTimedBar = 0;
                targetNPC.GetComponent<InitializeHealthbar>().alreadyHealthbar = 0;
                }
                else
                {
                targetNPC.GetComponent<InitializeHealthbar>().alreadyTimedBar = 2;
                targetNPC.GetComponent<InitializeHealthbar>().alreadyHealthbar = 0;
                }
                gameObject.GetComponent<Animation>().Play("HealthDown");
                timer = animLength;
                alreadyPlayed = 1;
            }
            timer -= Time.deltaTime;
            if (timer < 0f)
            {
                Destroy(gameObject);
            }
        }
        targetPos = new Vector3(targetNPC.position.x,(targetNPC.position.y + (30*add)), targetNPC.position.z);
        if (targetNPC != null)
        {
            if (health < 0f)
            {
                health = 0f;
                value = health / maxhealth;
            }
            if (health >= 0f)
            {
                value = health / maxhealth;
            }
            fillBar.localScale = new Vector3(Mathf.Lerp(fillBar.localScale.x, value, Time.deltaTime * 15f), fillBar.localScale.y, fillBar.localScale.z);
        }
        transform.LookAt(Camera.main.transform.position);
        transform.localPosition = new Vector3(targetPos.x,targetPos.y,targetPos.z);
        health1 = health;
    }
}