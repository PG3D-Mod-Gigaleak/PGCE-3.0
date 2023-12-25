using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KnifeOnly : MonoBehaviour
{
    public WeaponManager wm;

    void Start()
    {
        wm = GameObject.FindGameObjectWithTag("WeaponManager").GetComponent<WeaponManager>();
    }
    void Update()
    {
    }
}
