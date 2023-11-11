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

	void OnTriggerStay(Collider other)
	{
		if (cooldown <= 0f)
		{
			otherPortal.GetChild(3).GetComponent<Portal>().cooldown = 0.25f;
			cooldown = 0.25f;
			otherPortal.GetChild(3).GetComponent<Portal>().cooldown = 0.25f;
			cooldown = 0.25f;
		    if (other.tag == "ZombieCollider")
		    {
		        other.transform.parent.position = otherPortal.position + otherPortal.transform.forward;
		        other.transform.parent.rotation = otherPortal.rotation;
		    }
		    else
		    {
		        other.transform.position = otherPortal.position + otherPortal.transform.forward;
		        other.transform.rotation = otherPortal.rotation;
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
