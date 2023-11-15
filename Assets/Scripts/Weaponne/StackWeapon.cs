using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StackWeapon : Weapon
{
    public int ammo, maxAmmo;

    public int currentAmmo { get; set; }

    protected override void Awake()
    {
        base.Awake();

        currentAmmo = ammo;
    }

    public override void Shoot()
    {
        if (currentAmmo <= 0)
        {
            return;
        }

        if (!shooting)
        {
            currentAmmo--;
            weaponAnimation.Play(shootAnimation);

            PlayAudio(shootSound);
            Invoke(nameof(ShootSuccess), shotDelay);
        }
    }
    
    public override string DisplayAmmoCount()
    {
        return currentAmmo.ToString();
    }

    public override void CollectAmmo(int count)
    {
        currentAmmo = Mathf.Clamp(currentAmmo + count, 0, maxAmmo);
    }

    protected virtual void ShootSuccess() {}
}
