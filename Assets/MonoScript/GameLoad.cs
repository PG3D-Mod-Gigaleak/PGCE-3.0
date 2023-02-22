using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameLoad : MonoBehaviour
 {
	void Start() 
	{
		LoadWeapons();
	}

	public void LoadWeapons()
	{
		int i = 1;
		for (;;i++)
		{
			UnityEngine.Object obj = Resources.Load("Weapons/Weapon" + i);
			if (obj == null)
			{
				Debug.Log("broke at " + i);
				break;
			}
			WeaponManager.WeaponPrefabs.Add(obj);
		}
	}
}
