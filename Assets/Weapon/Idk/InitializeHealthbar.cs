using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InitializeHealthbar : MonoBehaviour
{
    HealthNPC healthnpc;
    private int alreadyDone = 0;
    public GameObject Healthbar;
    // Start is called before the first frame update
    void Update()
    {
        float health = gameObject.GetComponent<ZombiUpravlenie>().health;
        float maxhealth = transform.GetChild(0).GetComponent<Sounds>().health;
        if (health != maxhealth)
        {
            if (alreadyDone == 0)
            {
                Healthbar.GetComponent<HealthNPC>().targetNPC = transform;
                Instantiate(Healthbar, transform.position, Quaternion.identity);
                alreadyDone = 1;
            }
        }
    }
}
