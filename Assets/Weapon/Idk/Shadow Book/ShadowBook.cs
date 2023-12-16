using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShadowBook : MonoBehaviour
{
    public bool isAlreadySpawned = false;
    public GameObject ShadowBall;
    public GameObject SpawnedBall;
    public float OrbCooldown;
    public GameObject host;
    void Update()
    {
        if (Input.GetMouseButtonDown(0) && isAlreadySpawned == false)
        {
            SpawnedBall = Instantiate(ShadowBall, transform.position + (transform.forward * 10) + new Vector3(0f,5f,0f), Quaternion.identity);
            SpawnedBall.GetComponent<DespawnObject>().hostObject = host;
            SpawnedBall.GetComponent<ShadowBall>().OrbCooldown = OrbCooldown;
            SpawnedBall.GetComponent<ShadowBall>().Discharge = false;
            isAlreadySpawned = true;
        }
        if (Input.GetMouseButtonUp(0) && isAlreadySpawned == true)
        {
            SpawnedBall.GetComponent<ShadowBall>().Discharge = true;
            isAlreadySpawned = false;
        }
    }
}
