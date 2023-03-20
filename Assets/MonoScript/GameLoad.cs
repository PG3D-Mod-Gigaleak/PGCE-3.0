using System.Collections;
using System.Collections.Generic;
using System.Linq;
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
			if (!WeaponManager.WeaponPrefabs.Contains(obj))
			{
				WeaponManager.WeaponPrefabs.Add(obj);
			}
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
			Encyclopedia.storedEntities.Add(obj as GameObject);
		}
		LoadBosses();
	}

	public static void LoadEnemiesIntoDictionary()
	{
	    List<SurvivalConfig.Enemy> foundEnemies = new List<SurvivalConfig.Enemy>();
	    foreach (SurvivalConfig.BaseLevel possibleLevel in Defs.m_SurvivalConfig.levels.levels)
	    {
			foreach (SurvivalConfig.LevelSettings level in possibleLevel.PossibleLevels)
			{
	        	foreach (SurvivalConfig.Enemy enemy in level.enemies)
	        	{
	        	    if (foundEnemies.Find(x => x.name == enemy.name) == null)
	        	    {
	        	        foundEnemies.Add(enemy);
	        	    }
	        	}
			}
	    }
	    foreach (TimeSurvivalConfig.MapSettings level in Defs.m_TimeSurvivalConfig.maps.mapSettings)
	    {
	        foreach (SurvivalConfig.Enemy enemy in level.enemies)
	        {
	            if (foundEnemies.Find(x => x.name == enemy.name) == null)
	            {
	                foundEnemies.Add(enemy);
	            }
	        }
	    }
	    Encyclopedia.parsedEnemies.AddRange(foundEnemies);
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
		LoadEnemiesIntoDictionary();
	}
}
