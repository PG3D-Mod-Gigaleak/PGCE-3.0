using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroyAfterTime : MonoBehaviour
{
    void Start()
    {
        Invoke(nameof(DestroyThis), time);
    }

    public float time;

    void DestroyThis()
    {
        Destroy(gameObject);
    }
}
