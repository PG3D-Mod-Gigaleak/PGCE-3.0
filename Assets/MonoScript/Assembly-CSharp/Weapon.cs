using UnityEngine;

public class Weapon
{
	public GameObject weaponPrefab;

	public CategoryType category
	{
		get
		{
			return weaponPrefab.GetComponent<WeaponSounds>().category;
		}
	}

	public int currentAmmoInBackpack;

	public int currentAmmoInClip;
}
