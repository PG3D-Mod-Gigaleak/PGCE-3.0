using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BunnyhopPlayerMovement : JumpPlayerMovement
{
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
