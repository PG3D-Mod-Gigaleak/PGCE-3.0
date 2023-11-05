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
    private float animLength = 1f;
    void Awake()
    {
        instance = this;
    }
    void Update()
    {
        float health = targetNPC.GetComponent<ZombiUpravlenie>().health;
        float maxhealth = targetNPC.GetChild(0).GetComponent<Sounds>().health;
        if (health <= 0f)
        {
            animLength = gameObject.GetComponent<Animation>()["HealthDown"].length;
            if (alreadyPlayed == 0)
            {
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
        targetPos = new Vector3(targetNPC.position.x,(targetNPC.position.y + 3), targetNPC.position.z);
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
    }
}