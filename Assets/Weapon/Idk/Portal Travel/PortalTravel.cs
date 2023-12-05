using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PortalTravel : MonoBehaviour
{
    public GameObject Nix;
    public Transform TargetObject;
    // Start is called before the first frame update
    void Start()
    {
        TargetObject = gameObject.transform;
        for(int i = 0; i < 6; i++)
        {
            float x = Random.Range(-10f,10f);
            float y = Random.Range(2,10f);
            float z = Random.Range(-10f,10f);
            Vector3 randposition = new Vector3(x,y,z);
            GameObject NixSpawn = Instantiate(Nix, TargetObject.position, TargetObject.rotation);
            NixSpawn.transform.position += randposition;
            NixSpawn.GetComponent<NixShoot>().targetObject = TargetObject;
            NixSpawn.transform.LookAt(NixSpawn.GetComponent<NixShoot>().targetObject.position);
        }
    }
}
