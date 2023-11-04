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
    void Awake()
    {
        instance = this;
    }
    void Update()
    {
        try
        {
            targetPos = new Vector3(targetNPC.position.x,(targetNPC.position.y + 3), targetNPC.position.z);
        }
        catch (MissingReferenceException) // Check if targetNPC is there
        {
            Destroy(gameObject);
        }
        targetPos = new Vector3(targetNPC.position.x,(targetNPC.position.y + 3), targetNPC.position.z);
        if (targetNPC != null)
        {
            float health = targetNPC.GetComponent<ZombiUpravlenie>().health;
            float maxhealth = targetNPC.GetChild(0).GetComponent<Sounds>().health;
            if (health < 0f)
            {
                health = 0f;
                value = health / maxhealth;
            }
            if (health >= 0f)
            {
                value = health / maxhealth;
            }
            fillBar.localScale = new Vector3(Mathf.Lerp(fillBar.localScale.x, value, Time.deltaTime * 3f), fillBar.localScale.y, fillBar.localScale.z);
        }
        transform.LookAt(Camera.main.transform.position);
        transform.localPosition = new Vector3(targetPos.x,targetPos.y,targetPos.z);
    }
}