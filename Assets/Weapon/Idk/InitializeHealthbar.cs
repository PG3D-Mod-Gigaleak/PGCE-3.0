using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InitializeHealthbar : MonoBehaviour
{
    HealthNPC healthnpc;
    public GameObject Healthbar;
    // Start is called before the first frame update
    void Start()
    { 
        Healthbar.GetComponent<HealthNPC>().targetNPC = transform;
        Instantiate(Healthbar, transform.position, Quaternion.identity);
    }
}
