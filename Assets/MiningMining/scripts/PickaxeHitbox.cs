using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PickaxeHitbox : MonoBehaviour
{
    public PickaxeResource pickaxeResource;

    public GameObject hitParticles;

    [HideInInspector] public bool alreadyHit, sweep, smash;

    void OnTriggerEnter(Collider other)
    {
        if (alreadyHit && !sweep)
        {
            return;
        }
        if (other.tag == "Ore")
        {
            Debug.LogError("browhat");
            alreadyHit = true;
            Instantiate(hitParticles, this.transform.position, Quaternion.identity);
            other.GetComponent<Mineable>().Hit(sweep ? PickaxeData.CurrentPickaxe.Damage * 3f : smash ? PickaxeData.CurrentPickaxe.Damage * 20f : PickaxeData.CurrentPickaxe.Damage);
            AudioController.PlayRandomAudio(AudioController.instance.hitRock);
        }
    }
}

public enum PickaxeResource
{
    Stone, Iron, Gold, Amethyst, Ruby, Emerald, Sapphire, Diamond, RGB, Void, Antimatter, UltraMatter
}
