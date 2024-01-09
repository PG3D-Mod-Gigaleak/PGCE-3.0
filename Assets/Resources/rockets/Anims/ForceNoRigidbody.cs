using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ForceNoRigidbody : MonoBehaviour
{
    public GameObject targetObject;
    void FixedUpdate()
    {
        gameObject.transform.parent.transform.GetComponent<BoxCollider>().center = targetObject.transform.localPosition;
        gameObject.transform.parent.transform.GetComponent<Rigidbody>().interpolation = RigidbodyInterpolation.Extrapolate;
        gameObject.transform.parent.transform.GetComponent<Rocket>().oldPosition = targetObject.transform.position;
        gameObject.transform.parent.transform.GetComponent<Rocket>().oldForward = targetObject.transform.forward;


    }


}
