using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
public class SpawnCubes : MonoBehaviour
{
    public GameObject Prefab;
    public float initialSpeed;
    float lastSpawned;
    public float frequency;
    
    void Update() {
        if (Time.time > lastSpawned + frequency)
        {
            spawnage();
            lastSpawned = Time.time;
        }
    }
    public void spawnage()
    {
        Debug.LogError("Spawned");
        Instantiate(Prefab, transform.position, Quaternion.identity);
        Prefab.GetComponent<Rigidbody>().velocity = transform.forward * initialSpeed;
    }
}
