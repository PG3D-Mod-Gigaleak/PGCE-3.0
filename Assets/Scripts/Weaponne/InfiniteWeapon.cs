using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InfiniteWeapon : Weapon
{
    public override void Shoot()
    {
        if (!shooting)
        {
            weaponAnimation.Play(shootAnimation);
            PlayAudio(shootSound);

            ShootSuccess();
        }
    }
    
    protected virtual void ShootSuccess() {}
}
