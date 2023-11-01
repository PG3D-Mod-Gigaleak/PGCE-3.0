using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Healthbar : MonoBehaviour
{
    [HideInInspector] public Vector3 targetPos = new Vector3(0, -10, 0);

    [HideInInspector] public Mineable currentMining;

    public static Healthbar instance;

    private float value;

    public Transform fillBar;

    void Awake()
    {
        instance = this;
    }

    public void ChangeMineable(Mineable ore)
    {
        value = 1f;
        if (currentMining == ore)
        {
            return;
        }
        currentMining = ore;
        targetPos = new Vector3(ore.transform.position.x - 0.1f, ore.transform.position.y + 2f, ore.transform.position.z - 0.7f);
    }

    public void DestroyMineable()
    {
        targetPos = new Vector3(0, -10, 0);
        currentMining = null;
    }

    void Update()
    {
        if (currentMining != null)
        {
            value = currentMining.health / currentMining.maxHealth;
            fillBar.localScale = new Vector3(Mathf.Lerp(fillBar.localScale.x, value, Time.deltaTime * 3f), fillBar.localScale.y, fillBar.localScale.z);
        }
        transform.LookAt(Camera.main.transform.position);
        transform.localPosition = new Vector3(Mathf.Lerp(transform.position.x, targetPos.x, Time.deltaTime * 10f), Mathf.Lerp(transform.position.y, targetPos.y, Time.deltaTime * 10f), Mathf.Lerp(transform.position.z, targetPos.z, Time.deltaTime * 10f));
    }
}
