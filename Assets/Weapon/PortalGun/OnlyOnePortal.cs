using System.ComponentModel;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OnlyOnePortal : MonoBehaviour
{
    public int PortalCounter = 0;
    // Update is called once per frame
    void Update()
    {
        if (PortalCounter == 2)
        {
            Destroy(gameObject);
        }
    }
}
