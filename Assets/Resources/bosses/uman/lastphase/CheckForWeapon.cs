using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CheckForWeapon : MonoBehaviour
{
    public bool hasWeapon = false;
    public string WeaponName;
    void Awake()
    {
        GameObject wm = GameObject.FindGameObjectWithTag("WeaponManager");
        foreach (object obj in wm.GetComponent<WeaponManager>()._playerWeapons)
        {
            if (WeaponName == ((WeaponOld)obj).weaponPrefab.name)
            {
                hasWeapon = true;
            }
        }
    }
}
