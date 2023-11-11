using System;
using System.Threading;
using System.Xml.Xsl;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Portal : MonoBehaviour
{
	public Transform otherPortal;
	public float cooldown = 0f;

	void OnTriggerEnter(Collider other)
	{
		if (cooldown <= 0f)
		{
		    if (other.tag == "ZombieCollider")
		    {
		    other.transform.parent.position = otherPortal.position + otherPortal.transform.forward;
		    other.transform.parent.rotation = otherPortal.rotation;
			otherPortal.GetChild(3).GetComponent<Portal>().cooldown = 0.1f;
			cooldown = 0.1f;
		    }
		    else
		    {
		    other.transform.position = otherPortal.position + otherPortal.transform.forward;
		    other.transform.rotation = otherPortal.rotation;
			otherPortal.GetChild(3).GetComponent<Portal>().cooldown = 0.1f;
			cooldown = 0.1f;
		    }
		}
	}

	void Update()
	{
		string CurrentPortalName = transform.parent.gameObject.name;
		if (CurrentPortalName == "PortalBlue(Clone)")
		{
			otherPortal = GameObject.Find("PortalOrange(Clone)").transform;
			cooldown = otherPortal.GetChild(3).GetComponent<Portal>().cooldown;
			cooldown -= Time.deltaTime;
		}
		if (CurrentPortalName == "PortalOrange(Clone)")
		{
			otherPortal = GameObject.Find("PortalBlue(Clone)").transform;
			cooldown = otherPortal.GetChild(3).GetComponent<Portal>().cooldown;
			cooldown -= Time.deltaTime;
		}
	}
}
