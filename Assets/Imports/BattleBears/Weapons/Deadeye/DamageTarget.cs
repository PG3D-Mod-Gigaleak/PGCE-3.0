using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using System.Threading;
using UnityEngine;

public class DamageTarget : MonoBehaviour
{
    public void CallDamageZone()
    {
        if (gameObject.transform.GetChild(0).GetChild(0).GetComponent<LockDetect>().hasTarget == true)
        {
            gameObject.transform.GetChild(0).GetChild(0).GetComponent<DamageZone>().DamageTarget();
        }
    }
    public void CallDamageCall()
    {
        gameObject.transform.GetChild(0).GetChild(0).GetComponent<LockDetect>().DamageCall();
    }
}
