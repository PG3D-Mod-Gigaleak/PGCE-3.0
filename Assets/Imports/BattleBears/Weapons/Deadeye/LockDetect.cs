using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using System.Threading;
using UnityEngine;

public class LockDetect : MonoBehaviour
{
    public List<Collider> RealTargets = new List<Collider>();
    public GameObject LockCrosshair;
    public GameObject Impact;

    public bool hasLaser;
    public GameObject Laser;
    public bool SameTarget = false;
    public float maxMultiplayerDamage;
    public float maxCoopDamage;
    public float lockTime;
    public bool alreadyInstantiated;
    private GameObject Crosshair;
    private Transform target = null;
    private Transform oldTarget = null;
    private Collider takenTarget = null;
    public bool hasTarget = false;

    public void DamageCall()
    {
        if (hasTarget == true)
        {
            Instantiate(Impact, target.position, Quaternion.identity);
            if (hasLaser == true)
            {
                GameObject TheLaser = Instantiate(Laser, (transform.parent.GetChild(2).position + target.position) / 2, Laser.transform.rotation);
                TheLaser.GetComponent<Animation>().Play("Laser");
                TheLaser.transform.LookAt(target.position); 
                TheLaser.transform.localScale = new Vector3(TheLaser.transform.localScale.x,TheLaser.transform.localScale.y,(TheLaser.transform.localScale.z * Vector3.Distance(target.transform.position,transform.parent.GetChild(2).position)) * 1f * (2f/3f));
                TheLaser.transform.position = transform.parent.GetChild(2).position + ( TheLaser.transform.forward * Vector3.Distance(transform.parent.GetChild(2).position,target.transform.position) * 1f * 1f);
            }
            Destroy(Crosshair);
            gameObject.GetComponent<DamageZone>().multiplayerDamage = 0;
            gameObject.GetComponent<DamageZone>().coopDamage = 0;
            Crosshair = Instantiate(LockCrosshair, transform.position, Quaternion.identity);
            Crosshair.GetComponent<Animation>().Play("LockCrosshair");
            alreadyInstantiated = true;
            SameTarget = true;
            oldTarget = target;
        }
    }
    void OnTriggerStay(Collider other)
    {
        if (other.tag == "ZombieCollider" || other.tag == "BodyCollider")
        {
            if (!RealTargets.Contains(other) && other.tag == "BodyCollider" && other.transform.parent.GetComponent<SkinName>().playerMoveC.CurHealth > 0f )
            {
                RealTargets.Add(other);
            }
            if (!RealTargets.Contains(other) && other.tag == "ZombieCollider" && other.transform.parent.GetComponent<ZombiUpravlenie>().health > 0f )
            {
                RealTargets.Add(other);
            }
        }
    }
    void OnTriggerExit(Collider other)
    {
        if (other.tag == "ZombieCollider" || other.tag == "BodyCollider")
        {
            RealTargets.Remove(other);
        }
    }
    void FixedUpdate()
    {
        hasTarget = false;
		float num2 = 0f;
		foreach (Collider gameObject in RealTargets)
		{
			float num3 = Vector3.Distance(base.transform.position, gameObject.transform.position);
			if (num3 > num2)
			{
				num2 = num3;
                takenTarget = gameObject;
				target = takenTarget.transform;
			}
		}
        foreach (Collider gameObject in RealTargets)
		{
            if (takenTarget == gameObject)
            {
                hasTarget = true;
            }
        }
        if (hasTarget == true)
        {
            if (oldTarget == target)
            {
                SameTarget = true;
            }
            else
            {
                Destroy(Crosshair);
                gameObject.GetComponent<DamageZone>().multiplayerDamage = 0;
                gameObject.GetComponent<DamageZone>().coopDamage = 0;
                Crosshair = Instantiate(LockCrosshair, transform.position, Quaternion.identity);
                Crosshair.GetComponent<Animation>().Play("LockCrosshair");
                alreadyInstantiated = true;
                SameTarget = true;
                oldTarget = target;
            }
            if (target != null)
            {
                if (SameTarget == true)
                {
                    gameObject.GetComponent<DamageZone>().target = target;
                    gameObject.GetComponent<DamageZone>().multiplayerDamage += ( maxMultiplayerDamage / (lockTime * 50) );
                    gameObject.GetComponent<DamageZone>().coopDamage += ( maxCoopDamage / (lockTime * 50));
                    if (gameObject.GetComponent<DamageZone>().multiplayerDamage >= maxMultiplayerDamage)
                    {
                        gameObject.GetComponent<DamageZone>().multiplayerDamage = maxMultiplayerDamage;
                    }
                    if (gameObject.GetComponent<DamageZone>().coopDamage >= maxCoopDamage)
                    {
                        gameObject.GetComponent<DamageZone>().coopDamage = maxCoopDamage;
                    }
                }
            }
            Crosshair.transform.LookAt(Camera.main.transform.position);
            Crosshair.transform.position = target.position;
        }
        else
        {
            if (alreadyInstantiated == true)
            {
                Destroy(Crosshair);
                gameObject.GetComponent<DamageZone>().multiplayerDamage = 0;
                gameObject.GetComponent<DamageZone>().coopDamage = 0;
                Crosshair = Instantiate(LockCrosshair, transform.position, Quaternion.identity);
                Crosshair.GetComponent<Animation>().Play("LockCrosshair");
                alreadyInstantiated = true;
            }
        }
        oldTarget = target;
        RealTargets = new List<Collider>();
    }
}
