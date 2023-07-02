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
		StartCoroutine(LoadWeapons());
	}

	public UILabel currentTask;

	public IEnumerator LoadWeapons()
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
			currentTask.text = "Loading Weapon (" + obj.name + ").";
			if (!WeaponManager.WeaponPrefabs.Contains(obj))
			{
				WeaponManager.WeaponPrefabs.Add(obj);
			}
			if (i % 15 == 0)
			{
				yield return null;
			}
		}
		if (Debug.isDebugBuild)
		{
			StartCoroutine(LoadEnemies());
		}
		else
		{
			currentTask.text = "done! loading into the menu...";
			Application.LoadLevel("Loading");
		}
	}

	public IEnumerator LoadEnemies()
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
			currentTask.text = "Loading Enemy (" + obj.name + ")";
			Encyclopedia.storedEntities.Add(obj as GameObject);
			yield return null;
		}
		StartCoroutine(LoadBosses());
	}

	public static IEnumerator LoadEnemiesIntoDictionary(UILabel currentTask)
	{
	    List<SurvivalConfig.Enemy> foundEnemies = new List<SurvivalConfig.Enemy>();
		currentTask.text = "Sorting Enemies Into Dictionary";
		yield return null;
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
		currentTask.text = "done! loading into the menu...";
		Application.LoadLevel("Loading");
		yield return null;
	}

	public IEnumerator LoadBosses()
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
			currentTask.text = "Loading Boss (" + obj.name + ")";
			Encyclopedia.storedEntities.Add(obj as GameObject);
			yield return null;
		}
		StartCoroutine(LoadEnemiesIntoDictionary(currentTask));
	}
}
