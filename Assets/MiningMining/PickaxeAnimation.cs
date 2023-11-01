using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PickaxeAnimation : MonoBehaviour
{
    public PickaxeHitbox hitbox;

    public void SetSweep(int active)
    {
        hitbox.sweep = active == 1;
    }

    public void SetSmash(int active)
    {
        hitbox.smash = active == 1;
    }
}
