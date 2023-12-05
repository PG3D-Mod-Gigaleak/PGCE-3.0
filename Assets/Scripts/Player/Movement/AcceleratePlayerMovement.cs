using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AcceleratePlayerMovement : BunnyhopPlayerMovement
{
	public float accelerationDelta = 0.1f;
	public override void Start()
	{
		base.Start();
		constantSpeed = false;
	}
	public override void MoveCallback()
	{
		joystickOffset = Vector2.Lerp(joystickOffset, KeyboardToJoystickPosition(), accelerationDelta * Time.deltaTime * 100);
		HandleSetSpeed();
		UpdateVelocity();
		MoveCharacter();
	}
	
	public Vector3 ClampVector3(Vector3 vector, Vector3 minimum, Vector3 maximum)
	{
		vector.x = Mathf.Clamp(vector.x, minimum.x, maximum.x);
		vector.y = Mathf.Clamp(vector.y, minimum.y, maximum.y);
		vector.z = Mathf.Clamp(vector.z, minimum.z, maximum.z);
		return vector;
	}
	public override void ResetBhop()
	{
		// reimplementation of:
		// bhopMultiplier = lerpf(bhopMultiplier, 1, 0.05/bhopMultiplier)
		currentBhopSpeedMultiplier = Mathf.Lerp(currentBhopSpeedMultiplier, 1f, 0.05f/currentBhopSpeedMultiplier);
		currentBhopSpeedMultiplierIncrement = initialBhopSpeedMultiplierIncrement;
	}
}
