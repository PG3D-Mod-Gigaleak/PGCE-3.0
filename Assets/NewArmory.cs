using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NewArmory : MonoBehaviour
{
	private GameObject gunButtonTemplate;

	public UIGrid weaponList;

	public GameObject scrollThing;

	public void DoManual()
	{
		Debug.Log(WeaponManager.WeaponPrefabs.Count);
		gunButtonTemplate = Resources.Load<GameObject>("WeaponButtonTemplate");
		foreach (UnityEngine.Object weapon in WeaponManager.WeaponPrefabs)
		{
			GameObject weaponObject = weapon as GameObject;
			CreateButton(weaponObject.GetComponent<WeaponSounds>());
		}
		weaponList.Reposition();
	}
	
	void Update()
	{
		//another placeholder, please help
		scrollThing.transform.localPosition = new Vector3(scrollThing.transform.localPosition.x, Mathf.Clamp(scrollThing.transform.localPosition.y + mouseScrollThing, -1750f, 1200f), scrollThing.transform.localPosition.z);
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
		GameObject newButton = Instantiate(gunButtonTemplate, weaponList.transform);
		newButton.name = newButton.name.Replace("(Clone)", "") + "_" + weapon.name;
		newButton.transform.Find("GunInstantiation").localScale = weapon.armoryScale;
		newButton.transform.Find("PriceLabel").GetComponent<UILabel>().text = weapon.price + "";
		newButton.transform.Find("NameLabel").GetComponent<UILabel>().text = weapon.weaponName.Replace("newline", "\n");
		try
		{
			GameObject gunPrefab = Instantiate(weapon.bonusPrefab, newButton.transform.Find("GunInstantiation"));
			gunPrefab.transform.localRotation = Quaternion.Euler(weapon.armoryRotation);
			gunPrefab.transform.localPosition = Vector3.zero;
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
	}
}
