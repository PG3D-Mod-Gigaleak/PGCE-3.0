using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Portal : MonoBehaviour
{
	public Transform otherPortal;

	void OnTriggerEnter(Collider other)
	{
		Debug.LogError("HALLO??");
		other.transform.position = otherPortal.position;
		other.transform.rotation = otherPortal.rotation;
	}
}
