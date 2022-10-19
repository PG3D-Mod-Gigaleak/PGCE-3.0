using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CategoryMenuController : MonoBehaviour {

[System.Serializable]
public class WeaponList
{
	public string[] weaponNames = new string[10];

	public int[] weaponCosts = new int[10];

	public string[] weaponComments = new string[10];

	public string[] weaponStats = new string[10];

	public int index;
}

[SerializeField]
public List<CategoryMenuController.WeaponList> WeaponLists = new List<CategoryMenuController.WeaponList>();

public bool isGear;

private bool popup;

public string popupWeapon;

private int popupIndex;

public string catType;

public Texture2D catFon;

public GUIStyle back;

public GUIStyle nameStyle;

public GUIStyle setButton;

public GUIStyle arrow1;

public GUIStyle arrow2;

public GUIStyle labelThingy;

public GUIStyle commentLabelThingy;

public GUIStyle closeButton;

public GUIStyle next;

public Texture popupBG;

public Texture menuBG;

public Texture[] currentWeaponTextures()
{
	string[] weaponthe = WeaponLists.Find(x => x.index == weaponIndex).weaponNames;
	Texture[] texs = new Texture[weaponsInThisPage()];
	for (int i = 0; i < weaponsInThisPage(); i++)
	{
		if (!isGear)
		{
			texs[i] = Utilities.LoadObject("Weapons/" + weaponthe[i]).GetComponent<WeaponSounds>().preview;
		}
		else
		{
			texs[i] = Utilities.LoadObject("Gear/" + weaponthe[i]).GetComponent<GearStats>().preview;
		}
	}
	return texs;
}

public Texture textureToDraw()
{
	if (!currentWeaponHasUpgrades())
	{
		return currentWeaponTextures()[popupIndex];
	}
	else
	{
		return Utilities.LoadObject("Weapons/" + Utilities.LoadObject("upgrades/" + WeaponLists.Find(x => x.index == weaponIndex).weaponNames[popupIndex]).GetComponent<UpgradeInfo>().weaponNames[currentUpgradeIndex()]).GetComponent<WeaponSounds>().preview;
	}
}

public bool currentWeaponHasUpgrades()
{
	if (isGear)
	{
		return false;
	}
	return Utilities.LoadObject("Weapons/" + WeaponLists.Find(x => x.index == weaponIndex).weaponNames[popupIndex]).GetComponent<WeaponSounds>().hasUpgrades;
}

public int currentUpgradeIndex()
{
	for (int i = 0; i < Utilities.LoadObject("upgrades/" + WeaponLists.Find(x => x.index == weaponIndex).weaponNames[popupIndex]).GetComponent<UpgradeInfo>().weaponNames.Length; i++)
	{
		if(Utilities.LoadObject("Weapons/" + Utilities.LoadObject("upgrades/" + WeaponLists.Find(x => x.index == weaponIndex).weaponNames[popupIndex]).GetComponent<UpgradeInfo>().weaponNames[i]).tag == popupWeapon)
		{
			return i;
		}
	}
	return 0;
}

public string[] currentWeaponNames()
{
	string[] weaponthe =  WeaponLists.Find(x => x.index == weaponIndex).weaponNames;
	string[] names = new string[weaponsInThisPage()];
	for (int i = 0; i < weaponsInThisPage(); i++)
	{
		if (!isGear)
		{
			names[i] = Utilities.LoadObject("Weapons/" + weaponthe[i]).tag;
		}
		else
		{
			names[i] = Utilities.LoadObject("Gear/" + weaponthe[i]).GetComponent<GearStats>().name;
		}
	}
	return names;
}

public string currentWeaponComment()
{
	if (!currentWeaponHasUpgrades())
	{
	return WeaponLists.Find(x => x.index == weaponIndex).weaponComments[popupIndex];
	}
	else
	{
		return Utilities.LoadObject("upgrades/" + WeaponLists.Find(x => x.index == weaponIndex).weaponNames[popupIndex]).GetComponent<UpgradeInfo>().weaponComments[currentUpgradeIndex()];
	}
}

public string currentWeaponStats()
{	
	if (!currentWeaponHasUpgrades())
	{
	return WeaponLists.Find(x => x.index == weaponIndex).weaponStats[popupIndex];
	}
	else
	{
		return Utilities.LoadObject("upgrades/" + WeaponLists.Find(x => x.index == weaponIndex).weaponNames[popupIndex]).GetComponent<UpgradeInfo>().weaponStats[currentUpgradeIndex()];
	}
}



public int weaponsInThisPage()
{
	string[] weaponthe =  WeaponLists.Find(x => x.index == weaponIndex).weaponNames;
	int amount = 0;
	foreach (string str in weaponthe)
	{
		if (str == null || str == string.Empty)
		{
			return amount;
		}
		amount++;
	}
	return 10;
}

public void SetPopup(string weapon, int index)
{
	popup = true;
	popupWeapon = weapon;
	popupIndex = index;
}

public int weaponIndex;

private float koofScreen = (float)Screen.height / 768f;

	public void Start()
	{
	}

	public void Update()
	{
	}

	public Rect FindRects(string type, int index)
	{
		if (type == "icon")
		{
			switch(index)
			{
				case 0:
				return Utilities.screenScaleRect(0.15f, 0.2f, 0.2f, 0.15f);
				case 1:
				return Utilities.screenScaleRect(0.25f, 0.2f, 0.2f, 0.15f);
				case 2:
				return Utilities.screenScaleRect(0.35f, 0.2f, 0.2f, 0.15f);
				case 3:
				return Utilities.screenScaleRect(0.45f, 0.2f, 0.2f, 0.15f);
				case 4:
				return Utilities.screenScaleRect(0.55f, 0.2f, 0.2f, 0.15f);
				case 5:
				return Utilities.screenScaleRect(0.15f, 0.55f, 0.2f, 0.15f);
				case 6:
				return Utilities.screenScaleRect(0.25f, 0.55f, 0.2f, 0.15f);
				case 7:
				return Utilities.screenScaleRect(0.35f, 0.55f, 0.2f, 0.15f);
				case 8:
				return Utilities.screenScaleRect(0.45f, 0.55f, 0.2f, 0.15f);
				case 9:
				return Utilities.screenScaleRect(0.55f, 0.55f, 0.2f, 0.15f);
			}
		}
		if (type == "set")
		{
			switch(index)
			{
				case 0:
				return Utilities.screenScaleRect(0.25f, 0.4f, 0.08f, 0.075f);
				case 1:
				return Utilities.screenScaleRect(0.35f, 0.4f, 0.08f, 0.075f);
				case 2:
				return Utilities.screenScaleRect(0.45f, 0.4f, 0.08f, 0.075f);
				case 3:
				return Utilities.screenScaleRect(0.55f, 0.4f, 0.08f, 0.075f);
				case 4:
				return Utilities.screenScaleRect(0.65f, 0.4f, 0.08f, 0.075f);
				case 5:
				return Utilities.screenScaleRect(0.25f, 0.75f, 0.08f, 0.075f);
				case 6:
				return Utilities.screenScaleRect(0.35f, 0.75f, 0.08f, 0.075f);
				case 7:
				return Utilities.screenScaleRect(0.45f, 0.75f, 0.08f, 0.075f);
				case 8:
				return Utilities.screenScaleRect(0.55f, 0.75f, 0.08f, 0.075f);
				case 9:
				return Utilities.screenScaleRect(0.65f, 0.75f, 0.08f, 0.075f);
			}
		}
		if (type == "labels")
		{
			switch(index)
			{
				case 0:
				return Utilities.screenScaleRect(0.25f, 0.15f, 0.2f, 0.15f);
				case 1:
				return Utilities.screenScaleRect(0.35f, 0.15f, 0.2f, 0.15f);
				case 2:
				return Utilities.screenScaleRect(0.45f, 0.15f, 0.2f, 0.15f);
				case 3:
				return Utilities.screenScaleRect(0.55f, 0.15f, 0.2f, 0.15f);
				case 4:
				return Utilities.screenScaleRect(0.65f, 0.15f, 0.2f, 0.15f);
				case 5:
				return Utilities.screenScaleRect(0.25f, 0.50f, 0.2f, 0.15f);
				case 6:
				return Utilities.screenScaleRect(0.35f, 0.50f, 0.2f, 0.15f);
				case 7:
				return Utilities.screenScaleRect(0.45f, 0.50f, 0.2f, 0.15f);
				case 8:
				return Utilities.screenScaleRect(0.55f, 0.50f, 0.2f, 0.15f);
				case 9:
				return Utilities.screenScaleRect(0.65f, 0.50f, 0.2f, 0.15f);
			}
		}
		return Utilities.screenScaleRect(0f, 0f, 0f, 0f);
	}

	public void OnGUI()
	{
		Rect position = new Rect(((float)Screen.width - 2048f * (float)Screen.height / 1154f) / 2f, 0f, 2048f * (float)Screen.height / 1154f, Screen.height);
		GUI.DrawTexture(position, catFon, ScaleMode.StretchToFill);
		GUI.DrawTexture(Utilities.screenScaleRect(0.19f, 0.03f, 0.6f, 0.9f), menuBG);
		if (!popup)
		{
		for (int i = 0; i < weaponsInThisPage(); i++)
		{
			GUI.DrawTexture(FindRects("icon", i), currentWeaponTextures()[i], ScaleMode.StretchToFill);
		}
		for (int i = 0; i < weaponsInThisPage(); i++)
		{
			GUI.Label(FindRects("labels", i), currentWeaponNames()[i], labelThingy);
		}
		if (GUI.Button(Utilities.screenScaleRect(0.515f, 0.05f, 0.03f, 0.05f), string.Empty, arrow1))
		{
			if (weaponIndex >= WeaponLists.Count - 1)
			{
				weaponIndex = 0;
				return;
			}
			if (weaponIndex < WeaponLists.Count - 1)
			{
				weaponIndex++;
			}
		}
		if (GUI.Button(Utilities.screenScaleRect(0.415f, 0.05f, 0.03f, 0.05f), string.Empty, arrow2))
		{
			if (weaponIndex < 1)
			{
				weaponIndex = WeaponLists.Count - 1;
				return;
			}
			weaponIndex--;
		}
		for (int i = 0; i < weaponsInThisPage(); i++)
		{
			if (GUI.Button(FindRects("set", i), string.Empty, setButton))
			{
				//CategorySet(catType, currentWeaponNames()[i]);
				//Debug.LogWarning("Sucessfully Set " + catType + " To " + currentWeaponNames()[i]);
				SetPopup(currentWeaponNames()[i], i);
			}
		}
		if (GUI.Button(Utilities.screenScaleRect(0.1f, 0.8f, 0.12f, 0.1f), string.Empty, back))
		{
			GUIHelper.DrawLoading();
			Application.LoadLevel("ArmoryScene");
		}
		}
		if (popup)
		{
			GUI.DrawTexture(Utilities.screenScaleRect(0.185f, 0.15f, 0.65f, 0.75f), popupBG);
			if (GUI.Button(Utilities.screenScaleRect(0.625f, 0.72f, 0.15f, 0.125f), string.Empty, setButton))
			{
				CategorySet(catType, popupWeapon);
				Debug.LogWarning("Sucessfully Set " + catType + " To " + popupWeapon);
				popup = false;
			}
			if (GUI.Button(Utilities.screenScaleRect(0.25f, 0.72f, 0.15f, 0.125f), string.Empty, closeButton))
			{
				popup = false;
			}
			GUI.Label(Utilities.screenScaleRect(0.45f, 0.2f, 0.5f, 0.5f), popupWeapon, commentLabelThingy);
			GUI.Label(Utilities.screenScaleRect(0.275f, 0.55f, 0.5f, 0.5f), currentWeaponComment(), commentLabelThingy);
			GUI.DrawTexture(Utilities.screenScaleRect(0.3f, 0.3f, 0.3f, 0.23f), textureToDraw(), ScaleMode.StretchToFill);
			if (isGear)
			{
				GUI.Label(Utilities.screenScaleRect(0.575f, 0.4f, 0.3f, 0.3f), currentWeaponStats(), commentLabelThingy);
			}
			if (currentWeaponHasUpgrades())
			{
				if (GUI.Button(Utilities.screenScaleRect(0.46f, 0.25f, 0.075f, 0.075f), string.Empty, next))
				{
					if (currentUpgradeIndex() >= Utilities.LoadObject("upgrades/" + WeaponLists.Find(x => x.index == weaponIndex).weaponNames[popupIndex]).GetComponent<UpgradeInfo>().weaponNames.Length - 1)
					{
						popupWeapon =  Utilities.LoadObject("Weapons/" + Utilities.LoadObject("upgrades/" + WeaponLists.Find(x => x.index == weaponIndex).weaponNames[popupIndex]).GetComponent<UpgradeInfo>().weaponNames[0]).tag;
						return;
					}
					if (currentUpgradeIndex() < WeaponLists.Count - 1)
					{
						popupWeapon =  Utilities.LoadObject("Weapons/" + Utilities.LoadObject("upgrades/" + WeaponLists.Find(x => x.index == weaponIndex).weaponNames[popupIndex]).GetComponent<UpgradeInfo>().weaponNames[currentUpgradeIndex() + 1]).tag;
					}	
				}
			}
		}
	}
	public static void CategorySet(string catnumber, string weapon)
	{
		PlayerPrefs.SetString(catnumber, weapon);
	} 
	//public int weaponIndex()
	//{
	//	for (int i = 0; i < weapons.Length; i++)
	//	{
	//		if (currentWeapon == weapons[i])
	//		{
	//			return i;
	//		}
	//	}
	//	return 0;
	//}
}
