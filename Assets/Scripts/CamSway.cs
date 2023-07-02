using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CamSway : MonoBehaviour
{
	[HideInInspector] public float value;

	void Update()
	{
		Vector3 eulers = transform.rotation.eulerAngles;
		transform.rotation = Quaternion.Euler(eulers.x, eulers.y, 0 + value);
	}
}
