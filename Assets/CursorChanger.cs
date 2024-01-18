using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CursorChanger : MonoBehaviour
{
	//SO I'M LAZY AS FUCK. CRY ABOUT IT
	enum CursorType
	{
		IDLE,
		HOVER,
		PRESS,
	}

	//BY THE WAY, LOWER SNAKE CASE IS SUPERIOR, BUT UNITY DOESN'T LIKE IT WHEN YOU USE IT AND IT SHOWS UP IN INSANELY RETARDED WAYS IN THE INSPECTOR.
	//THIS IS WHY GODOT IS THE BETTER ENGINE.

	//FOR WHEN THE MOUSE ISN'T HOVERING OVER ANYTHING
	public Texture2D idleCursor;
	public Vector2 idleCursorOffset = new Vector2(32, 0);
	//FOR WHEN THE MOUSE IS HOVERING OVER AN NGUI BUTTON
	public Texture2D hoverCursor;
	public Vector2 hoverCursorOffset = new Vector2(32, 0);
	//FOR WHEN THE MOUSE IS PRESSED AND IT IS HOVERING ON AN NGUI BUTTON
	public Texture2D pressedCursor;
	public Vector2 pressedCursorOffset = new Vector2(32, 0);

	private CursorType currentCursorType;

	void Awake()
	{
		DontDestroyOnLoad(this);
	}
	void Update()
	{
		Vector2 randomVOffset = new Vector2(Random.Range(-8, 8), Random.Range(-8, 8));

		//BIGGEST ISSUE IS THAT UNITY CUSTOM CURSORS FUCKING SUCK.
		//THE INTENDED EFFECT WON'T WORK IF I DON'T USE `FORCESOFTWARE` ON CURSORMODE, BUT IF I DO THAT
		//THEN THE ACTUAL CURSOR WILL SHOW UP AS WELL.
		//SETTING CURSOR.VISIBLE DOES NOT FIX IT, AS IT DOESN'T RENDER THE CUSTOM CURSOR BUT IT
		//RENDERS MY OWN. FUCK YOU UNITY. GOD BLESS GODOT. <3 <3

		//TL;DR: HARDWARE CUSTOM CURSOR DOESN'T UPDATE UNLESS YOU MOVE THE CURSOR. THIS CAUSES THE
		//PRESSED ANIMATION TO NOT WORK UNLESS YOU MOVE YOUR MOUSE WHILE YOU HOLD DOWN, AND THE
		//CONSTANTLY RANDOM OFFSET OF THE CURSOR WON'T HAVE AN EFFECT ON THE CURSOR IF IT ISN'T MOVING.

		switch (currentCursorType)
		{
			case CursorType.HOVER:
				Cursor.SetCursor(hoverCursor, hoverCursorOffset + randomVOffset, CursorMode.Auto);
				break;
			case CursorType.PRESS:
				Cursor.SetCursor(pressedCursor, pressedCursorOffset + randomVOffset, CursorMode.Auto);
				break;
			default:
				Cursor.SetCursor(idleCursor, idleCursorOffset + randomVOffset, CursorMode.Auto);
				break;
		}

		//I DON'T KNOW IF THIS IS SAFE FOR LOW END DEVICES. I GENUINELY DO NOT GIVE A FUCK.
		//IT WOULDN'T BE A PROBLEM AT ALL IF THIS WAS A GODOT GAME IN THE FIRST PLACE.
		currentCursorType = CursorType.IDLE;
		foreach (UIButton btn in Object.FindObjectsOfType<UIButton>()) //OBJECT.FINDOBJECTSOFTYPE INSTEAD OF RESOURCES.FINDOBJECTSOFTYPEALL BECAUSE WE DON'T CARE ABOUT DISABLED UIBUTTONS.
		{
			if (btn.state == UIButtonColor.State.Hover) currentCursorType = CursorType.HOVER;
			if (btn.state == UIButtonColor.State.Pressed) currentCursorType = CursorType.PRESS;
		}
	}
}
