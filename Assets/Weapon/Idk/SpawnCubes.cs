using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
public class SpawnCubes : MonoBehaviour
{
    public GameObject cuberedPrefab;
    public UnityEvent onSpawn;
    
    void Update() {
        Debug.LogError("Spawned");
        Instantiate(cuberedPrefab, transform.position, Quaternion.identity);
        onSpawn?.Invoke();
    }
}
