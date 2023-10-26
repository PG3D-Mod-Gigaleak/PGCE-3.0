using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
public class TriggerDespawn : MonoBehaviour
{
    public UnityEvent triggerdespawn;
    void Start()
    {
        triggerdespawn?.Invoke();
    }

}
