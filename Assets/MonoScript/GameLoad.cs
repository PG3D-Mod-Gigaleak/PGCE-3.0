using System.Collections;
using System.Collections.Generic;
using System.Linq;
#if USES_WEBSOCKET
using handler.crash;
using handler.data;
using handler.logger;
using handler.networking;
#endif
using UnityEngine;

public class GameLoad : MonoBehaviour
 {
	void Start() 
	{
		#if USES_WEBSOCKET
		Log.Init();
		CrashHandler.Init();
		WebsocketHandler.Init();
		#endif
		#if UNITY_EDITOR
		Debug.ClearDeveloperConsole();
		Debug.unityLogger.filterLogType = LogType.Log | LogType.Error;
		Debug.Log("<color=#aa0000ff><b>^^^!!! WARNING !!!^^^</b></color>");
		Debug.Log("<color=yellow>## DO <color=#aa0000ff><b>NOT</b></color> ALLOW WARNINGS IN THE LOG FILTERS!!! ##</color>");
		Debug.Log("<color=yellow>## IF YOU WANT TO GET YOUR HWID, MAKE SURE <color=#aa0000ff><b>NOBODY</b></color> IS LOOKING!! ##</color>");
		Debug.LogWarning("Your HWID is " + IncomprehensibleGarbler.GetMacAddress());
		#endif
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
			//if (i % 4 == 0)
			//{
				yield return null;
			//}
		}
		if (Debug.isDebugBuild)
		{
			StartCoroutine(LoadEnemies());
		}
		else
		{
			StartCoroutine(CacheAllPhotonViewItems());
		}
	}
	public void Done() {
		currentTask.text = "done! loading into the menu...";
		Application.LoadLevel("Loading");
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
	public IEnumerator CacheAllPhotonViewItems() {
		#if UNITY_EDITOR
		// tysm ender
		currentTask.text = "Caching PhotonView Objects (might take a while!)";
		GameObject[] allObjects = Resources.LoadAll<GameObject>("");
		yield return allObjects;
		yield return null;
		GameObject[] photonObjects = (from go in allObjects where go.GetComponent<PhotonView>() != null select go).ToArray();
		yield return photonObjects;
		yield return null;
		int i = 0;
		foreach (GameObject photonObject in photonObjects) {
			MiscCache.photonViewGameObjects.Add(photonObject);
			currentTask.text = "Adding to cache (" + i + "/" + photonObjects.Length + ")";
			i++;
			yield return null;
		}
		#endif
		yield return null;
		Done();
		yield break;
	}

	public IEnumerator LoadEnemiesIntoDictionary()
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
		StartCoroutine(CacheAllPhotonViewItems());
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
		StartCoroutine(LoadEnemiesIntoDictionary());
	}
}
