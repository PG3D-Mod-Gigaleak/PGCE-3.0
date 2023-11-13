using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AmmoWeapon : Weapon
{
    public int maxAmmoInClip, startAmmoInBackpack, maxAmmoInBackpack;

    public int currentAmmoInClip { get; set; }

    public int currentAmmoInBackpack { get; set; }

    public AudioClip reloadSound;

    public float bloomMin, bloomMax, bloomPerShot, bloomRecover, bloomRecoverTimer;

    public Transform bulletSpawn;

    public float bloom { get; set; }

    protected float bloomTimer;

    protected bool reloading;

    protected bool playingReload { get { return weaponAnimation.IsPlaying(reloadAnimation); } }

    protected const string ReloadAnimation = "Reload";

    protected string reloadAnimation;

    protected override void Awake()
    {
        base.Awake();

        reloadAnimation = Defs.CAnim(weaponAnimation.gameObject, ReloadAnimation);
    }

    protected virtual void Update()
    {
        if (bloomTimer > 0f)
        {
            bloomTimer -= Time.deltaTime;
        }
        else
        {
            UpdateBloom(bloom - (Time.deltaTime * bloomRecover), false);
        }

        if (reloading && !playingReload)
        {
            FinishReloading();
        }
    }

    public override void Shoot()
    {
        if (currentAmmoInClip <= 0)
        {
            Reload();
            return;
        }

        if (!shooting && !reloading)
        {
            currentAmmoInClip--;
            weaponAnimation.Play(shootAnimation);

            PlayAudio(shootSound);
            Invoke("ShootSuccess", shotDelay);

            UpdateBloom(bloom + bloomPerShot);
        }
    }

    public override string DisplayAmmoCount()
    {
        return currentAmmoInClip + "/" + currentAmmoInBackpack;
    }

    public virtual void UpdateBloom(float bloom, bool setTimer = true)
    {
        if (setTimer)
        {
            bloomTimer = bloomRecoverTimer;
        }

        this.bloom = Mathf.Clamp(bloom, bloomMin, bloomMax);
    }

    public virtual void Reload()
    {
        if (currentAmmoInBackpack <= 0 || reloading || shooting)
        {
            return;
        }

        reloading = true;

        weaponAnimation.Play(reloadAnimation);
        PlayAudio(reloadSound);
    }

    protected virtual void FinishReloading()
    {
        reloading = false;

        int difference = maxAmmoInClip - currentAmmoInClip;

        if (difference >= currentAmmoInBackpack)
        {
            currentAmmoInBackpack -= difference;
            currentAmmoInClip += difference;
        }
        else
        {
            currentAmmoInClip += currentAmmoInBackpack;
            currentAmmoInBackpack = 0;
        }
    }

    public override void CollectAmmo(int count)
    {
        currentAmmoInBackpack = Mathf.Clamp(currentAmmoInBackpack + count, 0, maxAmmoInBackpack);
    }

    protected virtual void ShootSuccess() {}
}
