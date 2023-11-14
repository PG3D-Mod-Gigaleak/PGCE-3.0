using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BunnyhopPlayerMovement : JumpPlayerMovement
{
	public override void Jump()
	{
		base.Jump();
		if (currentBhopTimer < bhopJumpDelayTimeout && !isHoldingJump)
		{
			currentBhopSpeedMultiplier += currentBhopSpeedMultiplierIncrement;
			currentBhopSpeedMultiplierIncrement /= 1.15f;
		}
	}
	public override void Update()
	{
		base.Update();
		if (!IsGrounded())
		{
			currentBhopTimer = 0;
		}
	}
	public override void UpdateGrounded()
	{
		base.UpdateGrounded();
		currentBhopTimer += Time.deltaTime;
		if (currentBhopTimer > bhopJumpDelayTimeout)
		{
			ResetBhop();
		}
	}
	public virtual void ResetBhop()
	{
		currentBhopSpeedMultiplier = 1.0f;
		currentBhopSpeedMultiplierIncrement = initialBhopSpeedMultiplierIncrement;
	}
	public override float GetSpeedModifier()
	{
		return base.GetSpeedModifier() * currentBhopSpeedMultiplier;
	}
	[Header("Bunnyhop Behaviour")]
	public float currentBhopSpeedMultiplier = 1f;
	public float initialBhopSpeedMultiplierIncrement = 0.25f;
	public float currentBhopSpeedMultiplierIncrement = 0.25f;
	public float bhopJumpDelayTimeout = 0.05f;
	public float currentBhopTimer = 0f;
	public float runtime = 0f;
	public float runtimeAtLastJump = 0f;
	public float bhopJumpHoldTimeout = 0.2f;
	public bool isHoldingJump = false;
}
