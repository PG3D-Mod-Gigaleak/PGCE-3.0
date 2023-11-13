using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StackWeapon : Weapon
{
    public int ammo, maxAmmo;

    public int currentAmmo { get; set; }

    public override void Shoot()
    {
        if (currentAmmo <= 0)
        {
            return;
        }

        if (!shooting)
        {
            ammo--;
            weaponAnimation.Play(shootAnimation);

            PlayAudio(shootSound);
            ShootSuccess();
        }
    }

    
    public override string DisplayAmmoCount()
    {
        return currentAmmo.ToString();
    }

    protected virtual void ShootSuccess() { }
}
