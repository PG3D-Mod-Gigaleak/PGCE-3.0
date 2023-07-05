using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NewLabel : MonoBehaviour
{
	[HideInInspector] public Transform target;

	void Update()
	{
		transform.LookAt(Camera.main.transform);
	}
}
