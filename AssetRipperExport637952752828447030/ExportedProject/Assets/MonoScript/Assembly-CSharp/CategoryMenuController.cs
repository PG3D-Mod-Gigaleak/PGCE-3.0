using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CategoryMenuController : MonoBehaviour {

public string[] weapons;

public int catSize;

public string catType;

public Texture2D catFon;

public GUIStyle back;

public GUIStyle nameStyle;

public GUIStyle setButton;

private string weaponToSet;

private float koofScreen = (float)Screen.height / 768f;

public static Rect NameFieldRect = new Rect((float)Screen.width * 0.12f - 99.5f * (float)Screen.height / 768f + 700f, (float)Screen.height * 0.9f - 43.5f * (float)Screen.height / 768f - 450f, (float)(199 * Screen.height) / 768f, (float)(87 * Screen.height) / 768f);

public static Rect SetButtonRect = new Rect((float)Screen.width * 0.12f - 99.5f * (float)Screen.height / 768f + 700f, (float)Screen.height * 0.9f - 43.5f * (float)Screen.height / 768f - 350f, (float)(199 * Screen.height) / 768f, (float)(87 * Screen.height) / 768f);

public static Rect LeftButtonRect = new Rect((float)Screen.width * 0.12f - 99.5f * (float)Screen.height / 768f, (float)Screen.height * 0.9f - 43.5f * (float)Screen.height / 768f, (float)(199 * Screen.height) / 768f, (float)(87 * Screen.height) / 768f);

public static Rect RightButtonRect = new Rect((float)Screen.width * 0.88f - 99.5f * (float)Screen.height / 768f, LeftButtonRect.y + LeftButtonRect.height - (float)(193 * Screen.height) / 768f, (float)(199 * Screen.height) / 768f, (float)(193 * Screen.height) / 768f);


	public void OnGUI()
	{
		
		Rect position = new Rect(((float)Screen.width - 2048f * (float)Screen.height / 1154f) / 2f, 0f, 2048f * (float)Screen.height / 1154f, Screen.height);
		GUI.DrawTexture(position, catFon, ScaleMode.StretchToFill);
		weaponToSet = GUI.TextField(new Rect((float)Screen.width * 0.5f, (float)Screen.height * 0.2f, (float)Screen.width * 0.3f, (float)Screen.height * 0.05f), weaponToSet, nameStyle);
		if (GUI.Button(SetButtonRect, string.Empty, setButton))
		{
			if (Array.IndexOf(weapons, weaponToSet) >= 0)
			{
			CategorySet(catType, weaponToSet);
			Debug.LogWarning("Sucessfully Set " + catType + " To " + weaponToSet);
			}
			else if (weaponToSet == "funny")
			{
				Application.LoadLevel("funny");
			}
			else
			{
				Debug.LogError(weaponToSet + " Is Not A Valid Weapon Of " + catType);
			}
		}
		if (GUI.Button(LeftButtonRect, string.Empty, back))
		{
			GUIHelper.DrawLoading();
			Application.LoadLevel("ArmoryScene");
		}
	}
	public static void CategorySet(string catnumber, string weapon)
	{
		PlayerPrefs.SetString(catnumber, weapon);
	} 
}
