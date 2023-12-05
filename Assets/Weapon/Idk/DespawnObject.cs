using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DespawnObject : MonoBehaviour
{
    public GameObject hostObject;
    public Transform hostTransform;
    public float Lifespan = 0f;
    public bool DespawnNow = false;

    private bool hasObject;
    private bool hasTransform;

    void Start()
    {
        if (hostObject != null)
        {
            hasObject = true;
        }
        else if (hostTransform != null)
        {
            hasTransform = true;
        }
        if (Lifespan != 0f)
        {
            StartCoroutine(LifeSpan());
        }
    }
    void Update()
    {
        if (hasObject == true && hostObject == null)
        {
            Destroy(gameObject);
        }
        else if (hasTransform == true && hostTransform == null)
        {
            Destroy(transform);
        }
        if (DespawnNow == true)
        {
            Destroy(gameObject);
        }
    }

    public IEnumerator LifeSpan()
    {
        yield return new WaitForSeconds(Lifespan);
        Destroy(gameObject);
    }
}
