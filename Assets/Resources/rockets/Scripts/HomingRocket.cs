using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;

public class HomingRocket : MonoBehaviour
{

    public float StartHoming;
    public float velocity;
    public float homeSpeed;
    void Start()
    {
        transform.parent.GetComponent<Rigidbody>().velocity = new Vector3(0, 0, 0);
        transform.parent.GetComponent<Rigidbody>().AddForce(transform.forward * velocity);
        StartCoroutine(StartHome());
    }

    void Home()
    {
        GameObject SelfObject = gameObject;
		string SelfName = SelfObject.name;
		List<GameObject> RealTargets = new List<GameObject>();
		GameObject[] array = GameObject.FindGameObjectsWithTag("ZombieCollider");
		foreach (GameObject gameObject in array)
		{
			string OtherName = gameObject.name;
			if (OtherName == SelfName)
			{
			}
			else 
			{
				RealTargets.Add(gameObject);
			}
		}
		if (RealTargets[0] != null)
		{
		    float num2 = Vector3.Distance(base.transform.position, RealTargets[0].transform.position);
		    Transform target = RealTargets[0].transform;
		    foreach (GameObject gameObject in RealTargets)
		    {
		    	float num3 = Vector3.Distance(base.transform.position, gameObject.transform.position);
		    	if (num3 < num2)
		    	{
		    		num2 = Vector3.Distance(base.transform.position, gameObject.transform.position);
		    		target = gameObject.transform;
		    	}
		    }
            transform.parent.gameObject.transform.LookAt(target);
            transform.parent.GetComponent<Rigidbody>().velocity = new Vector3(0, 0, 0);
            transform.parent.GetComponent<Rigidbody>().AddForce(transform.forward * velocity);
		}
        StartCoroutine(Delay());
    }

    private IEnumerator Delay()
    {
        yield return new WaitForSeconds(0.1f);
        Home();
    }
    private IEnumerator StartHome()
    {
        yield return new WaitForSeconds(StartHoming);
        Home();
    }
}
