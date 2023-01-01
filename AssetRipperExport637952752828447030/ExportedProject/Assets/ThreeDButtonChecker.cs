using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ThreeDButtonChecker : MonoBehaviour
{
	void Update()
	{
		RaycastHit hit;
		Ray ray3 = this.GetComponent<Camera>().ScreenPointToRay(Input.mousePosition);
		if (Physics.Raycast(ray3, out hit) && Input.GetMouseButtonDown(0))
		{
			if (hit.transform.GetComponent<ThreeDButton>())
			{
				hit.transform.SendMessage("OnClicked");
			}
		}
	}
}
