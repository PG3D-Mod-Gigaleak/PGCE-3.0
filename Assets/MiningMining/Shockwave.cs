using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Shockwave : MonoBehaviour
{
    void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Ore")
        {
            other.GetComponent<Mineable>().Hit(PickaxeData.CurrentPickaxe.Damage * mult);
            AudioController.PlayRandomAudio(AudioController.instance.hitRock);
        }
    }

    public float mult;
}
