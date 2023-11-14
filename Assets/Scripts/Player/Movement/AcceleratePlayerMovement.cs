using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AcceleratePlayerMovement : BunnyhopPlayerMovement
{
	public float forwardAcceleration = 6f;
	public float backwardAcceleration = 3f;
	public float sidestepAcceleration = 3f;
	public override void Start()
	{
		base.Start();
		constantSpeed = false;
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
	public override void UpdateVelocity()
	{
		if (IsGrounded())
		{
			UpdateGrounded();
		}
		else
		{
			velocity.y += Physics.gravity.y * Time.deltaTime;
		}
		float joystickXOffset = joystickOffset.x;
		float joystickYOffset = joystickOffset.y;
		float old_y = velocity.y;
		velocity += ((
			(joystickYOffset < 0 ? myTransform.forward * joystickYOffset * backwardAcceleration : 
									myTransform.forward * joystickYOffset * forwardAcceleration) + 
			myTransform.right * joystickXOffset * sidestepAcceleration) * Time.deltaTime * 100f) / 6f;
		velocity = ClampVector3(velocity, -Vector3.one*forwardAcceleration, Vector3.one*forwardAcceleration);
		velocity = Vector3.Lerp(velocity, Vector3.zero, 0.1f);
		velocity.y = old_y;
	}
}
