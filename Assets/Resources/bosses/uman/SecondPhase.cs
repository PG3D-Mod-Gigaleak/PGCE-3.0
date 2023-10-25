using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
public class SecondPhase : MonoBehaviour
{
public UnityEvent onSecond;
void Start()
{
    onSecond?.Invoke();
    
    Debug.LogError("Second Phase");
    }
}
