using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RangedWeapon : AmmoWeapon
{
    public float range;

    protected override void ShootSuccess()
    {
        Vector3 bulletDir = new Vector3((float)Screen.width * 0.5f - bloom * Defs.Coef * 0.5f + (float)UnityEngine.Random.Range(0, Mathf.RoundToInt(bloom * Defs.Coef)), 
            (float)Screen.height * 0.5f - bloom * Defs.Coef * 0.5f + (float)UnityEngine.Random.Range(0, Mathf.RoundToInt(bloom * Defs.Coef)), 0f);

        if (Physics.Raycast(Camera.main.ScreenPointToRay(bulletDir), out RaycastHit hit, range, -2053))
        {
            //implement it .
        }
    }
}
