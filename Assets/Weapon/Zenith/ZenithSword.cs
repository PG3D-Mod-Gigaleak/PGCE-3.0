using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZenithSword : MonoBehaviour
{
    public Transform host;
    public float initialvelocity;
    public float decelerationmulti = 1f;
    public Transform spawner;
    public bool GoBack = false;

    public float Distance = 0f;
    void Update()
    {
        if (decelerationmulti >= 0f)
        {
            gameObject.transform.parent.gameObject.GetComponent<Rigidbody>().velocity = new Vector3(0f,0f,0f);
            decelerationmulti -= Time.deltaTime;
            float velocity = initialvelocity * decelerationmulti;
            gameObject.transform.parent.gameObject.GetComponent<Rigidbody>().AddForce(transform.parent.forward * velocity);
        }
        else
        {
            transform.parent.LookAt(host.transform.position);
            gameObject.transform.parent.gameObject.GetComponent<Rigidbody>().velocity = new Vector3(0f,0f,0f);
            decelerationmulti -= Time.deltaTime;
            float velocity = initialvelocity * decelerationmulti * -1;
            gameObject.transform.parent.gameObject.GetComponent<Rigidbody>().AddForce(transform.parent.forward * velocity);
        }
        Distance = Vector3.Distance(transform.parent.position,host.position);
        if (decelerationmulti < 0f && Distance < 2f)
        {
            Destroy(transform.parent.gameObject);
        }
    }
}
