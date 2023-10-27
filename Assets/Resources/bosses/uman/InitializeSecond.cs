using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
public class InitializeSecond : MonoBehaviour
{
    private ZombiUpravlenie zombiupravlenie;
    public UnityEvent doSecond;

    void Update()
    {
    zombiupravlenie = GetComponent<ZombiUpravlenie>();
    if (zombiupravlenie.health < 25000f) 
    {
        doSecond?.Invoke();
    }
    }
}
