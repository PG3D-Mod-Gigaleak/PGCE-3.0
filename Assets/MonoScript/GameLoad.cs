using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameLoad : MonoBehaviour
 {
	void Start() 
	{
		BeginLoading();
	}

	public void BeginLoading()
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
		LoadEnemies();
	}

	public void LoadEnemies()
	{
		int i = 1;
		for (;;i++)
		{
			UnityEngine.Object obj = Resources.Load("enemies/Enemy" + i + "_go");
			if (obj == null)
			{
				Debug.Log("broke at " + i);
				break;
			}
			obj.name = obj.name.Replace("_go", "");
			Encyclopedia.storedEntities.Add(obj as GameObject);
		}
		LoadBosses();
	}

	public void LoadBosses()
	{
		int i = 1;
		for (;;i++)
		{
			UnityEngine.Object obj = Resources.Load("bosses/Boss" + i);
			if (obj == null)
			{
				Debug.Log("broke at " + i);
				break;
			}
			Encyclopedia.storedEntities.Add(obj as GameObject);
		}
	}

}
