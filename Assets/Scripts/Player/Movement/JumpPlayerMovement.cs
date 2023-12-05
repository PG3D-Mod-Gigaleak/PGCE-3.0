using UnityEngine;

public class JumpPlayerMovement : DefaultPlayerMovement
{
	public float jumpHeight = 4.5f;
	public bool jumping = false;
	public override void JumpCallback()
	{
		if (IsGrounded())
		{
			Jump();
		}
	}
	public virtual void Jump()
	{
		jumping = true;
		velocity.y = jumpHeight;
	}
	public override void UpdateGrounded()
	{
		jumping = false;
	}
}