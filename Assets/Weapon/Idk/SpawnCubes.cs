using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
public class SpawnCubes : MonoBehaviour
{
    public GameObject Prefab;
    float lastSpawnedtime;
    public float frequency;
    public void spawnage()
    {
        Debug.LogError("Spawned");
        Instantiate(Prefab, transform.position, Quaternion.identity);
    }
    void Update() {
        if (Time.time > lastSpawnedtime + frequency)
        {
            lastSpawnedtime = Time.time;
            spawnage();
        }
    }
}
