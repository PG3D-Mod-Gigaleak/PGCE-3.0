using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HealthNPC : MonoBehaviour
{
    [HideInInspector] public Vector3 targetPos = new Vector3(0, -10, 0);
    public static HealthNPC instance;
    [HideInInspector] public GameObject currentNPC;
    public GameObject targetNPC;
    private float value;
    public Transform fillBar;
    void Awake()
    {
        instance = this;
    }

    public void ChangeNPC()
    {
        value = 1f;
        if (currentNPC == targetNPC)
        {
            return;
        }
        currentNPC = targetNPC;
        targetPos = new Vector3(targetNPC.transform.position.x - 0.1f, targetNPC.transform.position.y + 2f, targetNPC.transform.position.z - 0.7f);
    }
    void Update()
    {
        ChangeNPC();
        if (currentNPC != null)
        {
            float health = currentNPC.transform.parent.GetComponent<ZombiUpravlenie>().health;
            float maxhealth = currentNPC.GetComponent<Sounds>().health;
            value = health / maxhealth;
            fillBar.localScale = new Vector3(Mathf.Lerp(fillBar.localScale.x, value, Time.deltaTime * 3f), fillBar.localScale.y, fillBar.localScale.z);
        }
        transform.LookAt(Camera.main.transform.position);
        transform.localPosition = new Vector3(Mathf.Lerp(transform.position.x, targetPos.x, Time.deltaTime * 10f), Mathf.Lerp(transform.position.y, targetPos.y, Time.deltaTime * 10f), Mathf.Lerp(transform.position.z, targetPos.z, Time.deltaTime * 10f));
    }
}
