using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NailGunTurret : MonoBehaviour
{
    public GameObject player;
    public Transform target;
    public float RadiusShoot;
    public float timer;
    public float Lifespan;
    public GameObject axis;
    public bool alreadyexploded;
    void Update()
    {
        timer -= Time.deltaTime;
        Lifespan -= Time.deltaTime;
        if (timer < 0f)
        {
            List<GameObject> RealTargets = new List<GameObject>();
		    GameObject[] array = GameObject.FindGameObjectsWithTag("Enemy");
		    foreach (GameObject gameObject in array)
		    {
                if (gameObject.GetComponent<ZombiUpravlenie>().health <= 0f)
                {
                }
                else
                {
		    	RealTargets.Add(gameObject);
                }
		    }
            GameObject[] array2 = GameObject.FindGameObjectsWithTag("Player");
            foreach (GameObject gameObject in array2)
            {
                if (gameObject == player || gameObject.GetComponent<SkinName>().playerMoveC.CurHealth <= 0f)
                {
                }
                else
                {
                    RealTargets.Add(gameObject);
                }
            }
		    if (RealTargets.Count > 0)
		    {
		        float num2 = Vector3.Distance(base.transform.position, RealTargets[0].transform.position);
		        target = RealTargets[0].transform;
		        foreach (GameObject gameObject in RealTargets)
		        {
		        	float num3 = Vector3.Distance(base.transform.position, gameObject.transform.position);
		        	if (num3 < num2)
		        	{
		        		num2 = Vector3.Distance(base.transform.position, gameObject.transform.position);
		        		target = gameObject.transform;
		        	}
		        }
		    }
            else
            {
                target = null;
            }
            timer = 0.1f;
        }
        if (target != null)
        {
        if (Vector3.Distance(target.transform.position, gameObject.transform.position) < RadiusShoot && !gameObject.GetComponent<Animation>().isPlaying && alreadyexploded == false)
            {
                axis.transform.LookAt(target.transform.position);
                gameObject.GetComponent<Animation>().Play("TurretShoot");
            }
        }
        if (Lifespan < 0f && alreadyexploded == false)
        {
            alreadyexploded = true;
            gameObject.GetComponent<Animation>().Play("TurretExplode");
        }
    }
}
