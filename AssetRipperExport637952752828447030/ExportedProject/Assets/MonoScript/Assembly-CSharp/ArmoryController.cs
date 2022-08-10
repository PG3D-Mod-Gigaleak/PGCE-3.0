using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ArmoryController : MonoBehaviour {
	
public Texture2D armoryFon;

public GUIStyle back;

public GUIStyle primary;

public GUIStyle backup;

public GUIStyle melee;

public GUIStyle special;

public GUIStyle premium;

public static Rect LeftButtonRect = new Rect((float)Screen.width * 0.12f - 99.5f * (float)Screen.height / 768f, (float)Screen.height * 0.9f - 43.5f * (float)Screen.height / 768f, (float)(199 * Screen.height) / 768f, (float)(87 * Screen.height) / 768f);

public static Rect RightButtonRect = new Rect((float)Screen.width * 0.88f - 99.5f * (float)Screen.height / 768f, LeftButtonRect.y + LeftButtonRect.height - (float)(193 * Screen.height) / 768f, (float)(199 * Screen.height) / 768f, (float)(193 * Screen.height) / 768f);

public static Rect PrimaryButtonRect = new Rect((float)Screen.width * 0.88f - 99.5f * (float)Screen.height / 768f - 1350f, LeftButtonRect.y + LeftButtonRect.height - (float)(193 * Screen.height) / 768f - 200f, (float)(199 * Screen.height) / 768f, (float)(193 * Screen.height) / 768f - 100f);

public static Rect BackupButtonRect = new Rect((float)Screen.width * 0.88f - 99.5f * (float)Screen.height / 768f - 1050f, LeftButtonRect.y + LeftButtonRect.height - (float)(193 * Screen.height) / 768f - 200f, (float)(199 * Screen.height) / 768f, (float)(193 * Screen.height) / 768f - 100f);

public static Rect MeleeButtonRect = new Rect((float)Screen.width * 0.88f - 99.5f * (float)Screen.height / 768f - 750f, LeftButtonRect.y + LeftButtonRect.height - (float)(193 * Screen.height) / 768f - 200f, (float)(199 * Screen.height) / 768f, (float)(193 * Screen.height) / 768f - 100f);

public static Rect SpecialButtonRect = new Rect((float)Screen.width * 0.88f - 99.5f * (float)Screen.height / 768f - 450f, LeftButtonRect.y + LeftButtonRect.height - (float)(193 * Screen.height) / 768f - 200f, (float)(199 * Screen.height) / 768f, (float)(193 * Screen.height) / 768f - 100f);

public static Rect PremiumButtonRect = new Rect((float)Screen.width * 0.88f - 99.5f * (float)Screen.height / 768f - 150f, LeftButtonRect.y + LeftButtonRect.height - (float)(193 * Screen.height) / 768f - 200f, (float)(199 * Screen.height) / 768f, (float)(193 * Screen.height) / 768f - 100f);

public void OnGUI()
{
	Rect position = new Rect(((float)Screen.width - 2048f * (float)Screen.height / 1154f) / 2f, 0f, 2048f * (float)Screen.height / 1154f, Screen.height);
	GUI.DrawTexture(position, armoryFon, ScaleMode.StretchToFill);

	if (GUI.Button(LeftButtonRect, string.Empty, back))
		{
			GUIHelper.DrawLoading();
			Application.LoadLevel(Defs.CurrentMainMenuScene);
		}
		if (GUI.Button(PrimaryButtonRect, string.Empty, primary))
		{
			Debug.Log("you pressed primary");
			Application.LoadLevel("PrimaryScene");
		}
		if (GUI.Button(BackupButtonRect, string.Empty, backup))
		{
			Debug.Log("you pressed backup!");
			Application.LoadLevel("BackupScene");
		}
		if (GUI.Button(MeleeButtonRect, string.Empty, melee))
		{
			Debug.Log("you pressed melee");
			Application.LoadLevel("MeleeScene");
		}
		if (GUI.Button(SpecialButtonRect, string.Empty, special))
		{
			Debug.Log("you pressed special!");
			Application.LoadLevel("SpecialScene");
		}
		if (GUI.Button(PremiumButtonRect, string.Empty, premium))
		{
			Debug.Log("you pressed premium!");
			Application.LoadLevel("PremiumScene");
		}

}



}
