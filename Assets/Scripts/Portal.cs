using System.Xml.Xsl;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Portal : MonoBehaviour
{
	public Transform otherPortal;

	void OnTriggerEnter(Collider other)
	{
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

	void Update()
	{
		string CurrentPortalName = transform.parent.gameObject.name;
		if (CurrentPortalName == "PortalBlue(Clone)")
		{
			otherPortal = GameObject.Find("PortalOrange(Clone)").transform;
		}
		if (CurrentPortalName == "PortalOrange(Clone)")
		{
			otherPortal = GameObject.Find("PortalBlue(Clone)").transform;
		}
	}
}
