using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WeaponPlayerAnimation : MonoBehaviour
{
    public GameObject host;
    public GameObject player;
    public GameObject PlayerAnimationChecker;
    public bool isPlayerAnimationChecker;
    public Animation PlayerAnimation;
    public AnimationClip inspectAnim;
    public AnimationClip shootAnim;
    public AnimationClip shoot0Anim;
    public AnimationClip shoot1Anim;
    public AnimationClip idleAnim;
    public AnimationClip walkAnim;
    public AnimationClip reloadAnim;
    public AnimationClip emptyAnim;
    public AnimationClip inspect0Anim;
    public AnimationClip inspect1Anim;
    public AnimationClip chargeupAnim;
    public AnimationClip chargedownAnim;

    void Start()
    {
        if (!isPlayerAnimationChecker)
        {
            player = host.transform.parent.parent.parent.gameObject;
            gameObject.GetComponent<WeaponSounds>().animationObject = player;
            GameObject checker = Instantiate(PlayerAnimationChecker, player.transform.position, host.transform.rotation);
            checker.GetComponent<WeaponPlayerAnimation>().host = gameObject;
            checker.GetComponent<WeaponPlayerAnimation>().player = player;
            checker.GetComponent<WeaponPlayerAnimation>().inspectAnim = inspectAnim;
            checker.GetComponent<WeaponPlayerAnimation>().shootAnim = shootAnim;
            checker.GetComponent<WeaponPlayerAnimation>().shoot0Anim = shoot0Anim;
            checker.GetComponent<WeaponPlayerAnimation>().shoot1Anim = shoot1Anim;
            checker.GetComponent<WeaponPlayerAnimation>().inspect0Anim = inspect0Anim;
            checker.GetComponent<WeaponPlayerAnimation>().inspect1Anim = inspect1Anim;
            checker.GetComponent<WeaponPlayerAnimation>().reloadAnim = reloadAnim;
            checker.GetComponent<WeaponPlayerAnimation>().walkAnim = walkAnim;
            checker.GetComponent<WeaponPlayerAnimation>().idleAnim = idleAnim;
            checker.GetComponent<WeaponPlayerAnimation>().emptyAnim = emptyAnim;
            checker.GetComponent<WeaponPlayerAnimation>().chargeupAnim = chargeupAnim;
            checker.GetComponent<WeaponPlayerAnimation>().chargedownAnim = chargedownAnim;
        }
        else
        {
            PlayerAnimation = player.AddComponent<Animation>();
            if (inspectAnim != null)
            {
                PlayerAnimation.AddClip(inspectAnim, "Inspect");
            }
            if (shootAnim != null)
            {
                PlayerAnimation.AddClip(shootAnim, "Shoot");
            }
            if (shoot0Anim!= null)
            {
                PlayerAnimation.AddClip(shoot0Anim, "Shoot0");
            }
            if (shoot1Anim != null)
            {
                PlayerAnimation.AddClip(shoot1Anim, "Shoot1");
            }
            if (idleAnim != null)
            {
                PlayerAnimation.AddClip(idleAnim, "Idle");
            }
            if (reloadAnim != null)
            {
                PlayerAnimation.AddClip(reloadAnim, "Reload");
            }
            if (emptyAnim != null)
            {
                PlayerAnimation.AddClip(emptyAnim, "Empty");
            }
            if (inspect0Anim != null)
            {
                PlayerAnimation.AddClip(inspect0Anim, "Inspect0");
            }
            if (inspect1Anim != null)
            {
                PlayerAnimation.AddClip(inspect1Anim, "Inspect1");
            }
            if (chargedownAnim != null)
            {
                PlayerAnimation.AddClip(chargedownAnim, "ChargeDown");
            }
            if (inspect1Anim != null)
            {
                PlayerAnimation.AddClip(chargeupAnim, "ChargeUp");
            }
            if (idleAnim != null)
            {
                PlayerAnimation.clip = idleAnim;
            }
            PlayerAnimation.playAutomatically = true;
        }
    }
    void Update()
    {
        if (host == null && isPlayerAnimationChecker)
        {
            PlayerAnimation.Stop();
            Destroy(PlayerAnimation);
            Destroy(gameObject);
        }
    }
}
