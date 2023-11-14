using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(CharacterController))]
public class DefaultPlayerMovement : MonoBehaviour
{
	public virtual void HandleInput()
	{
		MoveCallback();
		if (Input.GetKey(jumpKey))
		{
			JumpCallback();
		}
	}
	public virtual void MoveCallback()
	{
		joystickOffset = KeyboardToJoystickPosition();
		HandleSetSpeed();
		UpdateVelocity();
		MoveCharacter();
	}
	public virtual void UpdateGrounded() {} // stub
	public virtual bool IsGrounded()
	{
		// TODO: re-add the gravflip grounded check :3
		return characterController.isGrounded;
	}
	public virtual void UpdateVelocity()
	{
		if (IsGrounded())
		{
			UpdateGrounded();
		}
		else
		{
			velocity.y += Physics.gravity.y * Time.deltaTime;
		}
		if (constantSpeed)
		{
			currentForwardSpeed = constantForwardSpeed;
			currentBackwardSpeed = constantBackwardSpeed;
			currentSidestepSpeed = constantSidestepSpeed;
		}
		float joystickXOffset = joystickOffset.x;
		float joystickYOffset = joystickOffset.y;
		velocity = (joystickYOffset < 0 ? myTransform.forward * joystickYOffset * currentBackwardSpeed : myTransform.forward * joystickYOffset * currentForwardSpeed) + myTransform.right * joystickXOffset * currentSidestepSpeed;
	}
	public virtual void HandleSetSpeed() {} // stub
	public virtual void MoveCharacter()
	{
		characterController.Move(velocity * Time.deltaTime);
	}
	public virtual void JumpCallback() {} // stub
	public virtual float GetSpeedModifier()
	{
		return GlobalSpeedMultiplier;
	}
	public virtual void Start()
	{
		myTransform = GetComponent<Transform>();
		characterController = GetComponent<CharacterController>();
		playerGameObject = Globals.PlayerMove.gameObject;
	}
	public virtual void Update()
	{
		HandleInput();
	}
	public virtual Vector2 KeyboardToJoystickPosition()
	{
		#if UNITY_EDITOR
		if (Globals.PlayerMove && Globals.PlayerMove.showingAdminInput) {
			return new Vector2(0, 0);
		}
		#endif
		if (Globals.PlayerMove && Globals.PlayerMove.showChat) {
			return new Vector2(0, 0);
		}
		int joystickXOffset = 0, joystickYOffset = 0;
		if (Input.GetKey(forwardKey))
		{
			joystickYOffset = 1;
		}
		if (Input.GetKey(backwardKey))
		{
			joystickYOffset = -1;
		}
		if (Input.GetKey(leftKey))
		{
			joystickXOffset = -1;
		}
		if (Input.GetKey(rightKey))
		{
			joystickXOffset = 1;
		}
		return new Vector2(joystickXOffset, joystickYOffset);
	}
	public float currentForwardSpeed = 0f;
	public float currentBackwardSpeed = 0f;
	public float currentSidestepSpeed = 0f;
	public float constantForwardSpeed = 6f;
	public float constantBackwardSpeed = 3f;
	public float constantSidestepSpeed = 3f;
	public bool constantSpeed = true;
	public const float GlobalSpeedMultiplier = 1.35f;
	[Header("Default Movement Variables")]
	public Vector2 joystickOffset;
	public Vector3 velocity;
	public KeyCode forwardKey = KeyCode.W;
	public KeyCode backwardKey = KeyCode.S;
	public KeyCode leftKey = KeyCode.A;
	public KeyCode rightKey = KeyCode.D;
	public KeyCode jumpKey = KeyCode.Space;
	[Header("Default General Variables")]
	public CharacterController characterController;
	public Transform myTransform;
	public GameObject playerGameObject;
}
