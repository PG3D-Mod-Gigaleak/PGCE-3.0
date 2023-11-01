using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Laser : MonoBehaviour
{
    void OnTriggerStay(Collider other)
    {
        if (other.tag == "Ore")
        {
            other.GetComponent<Mineable>().Hit(PickaxeData.CurrentPickaxe.Damage/* * AbilityData.AbilitiesInGame[3].damage * AbilityPrefs.GetActiveAbilityLevel("Laser Beam")*/);
        }
    }
}
