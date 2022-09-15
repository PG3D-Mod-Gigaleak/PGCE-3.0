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

public GUIStyle arrow1;

public GUIStyle arrow2;

public GUIStyle labelThingy;

public string currentWeapon;

public Texture currentWeaponTexture;

public string currentWeaponName;

private float koofScreen = (float)Screen.height / 768f;

	public void Start()
	{
		currentWeapon = weapons[0];
	}

	public void Update()
	{
		currentWeaponTexture = Utilities.LoadObject("Weapons/" + currentWeapon).GetComponent<WeaponSounds>().preview;
		currentWeaponName = Utilities.LoadObject("Weapons/" + currentWeapon).tag;
	}

	public void OnGUI()
	{
		Rect position = new Rect(((float)Screen.width - 2048f * (float)Screen.height / 1154f) / 2f, 0f, 2048f * (float)Screen.height / 1154f, Screen.height);
		GUI.DrawTexture(position, catFon, ScaleMode.StretchToFill);
		GUI.DrawTexture(Utilities.screenScaleRect(0.35f, 0.34f, 0.2f, 0.15f), currentWeaponTexture, ScaleMode.StretchToFill);
		GUI.Label(Utilities.screenScaleRect(0.45f, 0.2f, 0.4f, 0.7f), currentWeaponName, labelThingy);
		if (GUI.Button(Utilities.screenScaleRect(0.6f, 0.4f, 0.03f, 0.05f), string.Empty, arrow1))
		{
			if (weaponIndex() >= weapons.Length - 1)
			{
				currentWeapon = weapons[0];
				return;
			}
			if (weaponIndex() < weapons.Length - 1)
			{
				currentWeapon = weapons[weaponIndex() + 1];
			}
		}
		if (GUI.Button(Utilities.screenScaleRect(0.35f, 0.4f, 0.03f, 0.05f), string.Empty, arrow2))
		{
			if (weaponIndex() < 1)
			{
				currentWeapon = weapons[weapons.Length - 1];
				return;
			}
				currentWeapon = weapons[weaponIndex() - 1];
		}
		if (GUI.Button(Utilities.screenScaleRect(0.43f, 0.55f, 0.12f, 0.1f), string.Empty, setButton))
		{
			CategorySet(catType, currentWeaponName);
			Debug.LogWarning("Sucessfully Set " + catType + " To " + currentWeaponName);
		}
		if (GUI.Button(Utilities.screenScaleRect(0.1f, 0.8f, 0.12f, 0.1f), string.Empty, back))
		{
			GUIHelper.DrawLoading();
			Application.LoadLevel("ArmoryScene");
		}
	}
	public static void CategorySet(string catnumber, string weapon)
	{
		PlayerPrefs.SetString(catnumber, weapon);
	} 
	public int weaponIndex()
	{
		for (int i = 0; i < weapons.Length; i++)
		{
			if (currentWeapon == weapons[i])
			{
				return i;
			}
		}
		return 0;
	}
}
