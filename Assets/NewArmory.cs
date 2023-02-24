using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class NewArmory : MonoBehaviour
{
	private GameObject gunButtonTemplate;

	public UIGrid weaponList;

	public GameObject scrollThing;

	private int currentCategoryIndex;

	public List<GameObject> primaries = new List<GameObject>();

	public List<GameObject> backup = new List<GameObject>();

	public List<GameObject> melee = new List<GameObject>();

	public List<GameObject> special = new List<GameObject>();

	public List<GameObject> heavy = new List<GameObject>();

	public List<ButtonHandler> categoryButtons;

	public List<GameObject> getCategoryWeaponList(int index)
	{
		switch (index)
		{
			case 0:
			return primaries;
			case 1:
			return backup;
			case 2:
			return melee;
			case 3:
			return special;
			case 4:
			return heavy;
		}
		return primaries;
	}

	public void DoManual()
	{
		Debug.Log(WeaponManager.WeaponPrefabs.Count);
		gunButtonTemplate = Resources.Load<GameObject>("WeaponButtonTemplate");
		foreach (UnityEngine.Object weapon in WeaponManager.WeaponPrefabs)
		{
			GameObject weaponObject = weapon as GameObject;
			CreateButton(weaponObject.GetComponent<WeaponSounds>());
		}
		ChangeCategory(0, true);
	}

	void Start()
	{
		categoryButtons[0].Clicked += (object sender2, EventArgs args2) =>
		{
			ChangeCategory(0);
		};
		categoryButtons[1].Clicked += (object sender2, EventArgs args2) =>
		{
			ChangeCategory(1);
		};
		categoryButtons[2].Clicked += (object sender2, EventArgs args2) =>
		{
			ChangeCategory(2);
		};
		categoryButtons[3].Clicked += (object sender2, EventArgs args2) =>
		{
			ChangeCategory(3);
		};
		categoryButtons[4].Clicked += (object sender2, EventArgs args2) =>
		{
			ChangeCategory(4);
		};
	}
	
	void Update()
	{
		//another placeholder, please help
		Debug.LogError(GetGridSize);
		scrollThing.transform.localPosition = new Vector3(scrollThing.transform.localPosition.x, Mathf.Clamp(scrollThing.transform.localPosition.y + mouseScrollThing, -1680f, GetGridSize), scrollThing.transform.localPosition.z);
	}

	public float GetGridSize
	{
		get
		{
			int count = 0;
			foreach (Transform trf in weaponList.gameObject.GetComponentsInChildren<Transform>())
			{
				if (trf.name.StartsWith("WeaponButton"))
				{
					count++;
				}
			}
			int itemsToCount = count / 5;
			if (itemsToCount < 5)
			{
				return -1680f;
			}
			float minusCount = weaponList.cellHeight * itemsToCount;
			float final = -1680f + minusCount - 35f;
			return final * 2;
		}
	}

	public void ChangeCategory(int categoryIndex, bool first = false)
	{
		if (categoryIndex == currentCategoryIndex && !first)
		{
			return;
		}
		foreach (GameObject weaponButton in getCategoryWeaponList(categoryIndex))
		{
			weaponButton.SetActive(true);
			weaponButton.transform.parent = weaponList.transform;
			weaponButton.transform.localScale = Vector3.one;
			weaponButton.transform.localPosition = new Vector3(weaponButton.transform.localPosition.x, weaponButton.transform.localPosition.y, 0f);
		}
		if (!first)
		{
			foreach (GameObject weaponButton in getCategoryWeaponList(currentCategoryIndex))
			{
				weaponButton.SetActive(false);
				weaponButton.transform.parent = null;
				weaponButton.transform.localScale = Vector3.one;
				weaponButton.transform.localPosition = new Vector3(weaponButton.transform.localPosition.x, weaponButton.transform.localPosition.y, 0f);
			}
		}
		currentCategoryIndex = categoryIndex;
		scrollThing.transform.localPosition = new Vector3(scrollThing.transform.localPosition.x, -1680f, scrollThing.transform.localPosition.z);
		weaponList.Reposition();
	}

	public int mouseScrollThing
	{
		get
		{
			return (Input.GetAxis("Mouse ScrollWheel") == 0 ? 0 : Input.GetAxis("Mouse ScrollWheel") < 0 ? 25 : -25);
		}
	}

	public void CreateButton(WeaponSounds weapon)
	{
		GameObject newButton = Instantiate(gunButtonTemplate);
		newButton.name = newButton.name.Replace("(Clone)", "") + "_" + weapon.name;
		newButton.transform.Find("GunInstantiation").localScale = weapon.armoryScale;
		newButton.transform.Find("PriceLabel").GetComponent<UILabel>().text = weapon.price + "";
		newButton.transform.Find("NameLabel").GetComponent<UILabel>().text = weapon.weaponName.Replace("newline", "\n");
		try
		{
			GameObject gunPrefab = Instantiate(weapon.bonusPrefab, newButton.transform.Find("GunInstantiation"));
			gunPrefab.transform.localRotation = Quaternion.Euler(weapon.armoryRotation);
			gunPrefab.transform.localPosition = weapon.armoryPosition;
			gunPrefab.gameObject.layer = 10;
			foreach (Transform trf in gunPrefab.gameObject.GetComponentsInChildren<Transform>())
			{
				trf.gameObject.layer = 10;
			}
		}
		catch
		{
			Debug.LogError("BONUS PREFAB IN " + weapon.name  +  " MISSING. SKIPPING GUN UNTIL YOU FIX IT YOU LAZY LITTL-");
		}
		newButton.transform.Find("GunInstantiation").localScale = weapon.armoryScale;
		newButton.SetActive(false);
		getCategoryWeaponList((int)weapon.category).Add(newButton);
	}
}
