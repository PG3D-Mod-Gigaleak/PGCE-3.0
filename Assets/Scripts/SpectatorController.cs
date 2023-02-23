using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpectatorController : MonoBehaviour 
{
	void Update()
	{
		float x2 = -updateKeyboardControls().x;
        float z2 = -updateKeyboardControls().y;
        Vector3 move2 = transform.right * x2 + transform.forward * z2;
		move2.y += (Input.GetKey(KeyCode.Space) ? 1f : (Input.GetKey(KeyCode.C) ? -1f : 0f));
		GetComponent<CharacterController>().Move(move2 * 10f * Time.deltaTime);
	}

	public Camera spectateCam;

	public GameObject NGUI;

	public void disableCameraOverride()
	{
		Destroy(NGUI);
		Destroy(spectateCam);
		Destroy(spectateCam.GetComponent<AudioListener>());
		Destroy(spectateCam.GetComponent<MouseControls>());
		Destroy(spectateCam.GetComponent<FlareLayer>());
		Destroy(this);
	}

	public Vector2 updateKeyboardControls()
	{
		float num = default(float);
		float num2 = default(float);
		if (Input.GetKey("w"))
		{
			num = -1f;
		}
		if (Input.GetKey("s"))
		{
			num = 1f;
		}
		if (Input.GetKey("a"))
		{
			num2 = 1f;
		}
		if (Input.GetKey("d"))
		{
			num2 = -1f;
		}
		return new Vector2(num2, num);
	}
}
