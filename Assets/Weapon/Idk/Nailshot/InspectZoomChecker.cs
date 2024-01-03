using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InspectZoomChecker : MonoBehaviour
{
    public GameObject origin;
    public Camera origincam;
    public float originfov;
    void Update()
    {
        if (!origin)
        {
            origincam.fieldOfView = originfov;
            Destroy(gameObject);
        }
    }
}
