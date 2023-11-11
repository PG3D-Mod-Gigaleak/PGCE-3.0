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
	IEnumerator Start() 
	{
		#if USES_WEBSOCKET
		Log.Init();
		CrashHandler.Init();
		ChatController.Init();
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
		#if USES_WEBSOCKET
		currentTask.text = "Awaiting server response";
		yield return new WaitUntil(() => WebsocketHandler.WSIsAlive);
		BeginLoading();
		#else
		BeginLoading();
		#endif
		yield break;
	}

	public void BeginLoading()
	{
		if (prefs.GetInt("startingValues") == 0)
		{
			prefs.SetFloat("setVolm", 0.5f);
			prefs.SetFloat("SensitivitySett", 25f);
			prefs.SetInt("startingValues", 1);
		}
		StartCoroutine(LoadWeapons());
	}

	public UILabel currentTask;

	public bool forTesting;

	public IEnumerator LoadWeapons()
	{
		currentTask.text = "Loading Weapons";
		yield return null;
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
			//if (i % 4 == 0)
			//{
			//	yield return null;
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
		yield break;
	}
	public void Done() {
		if (!forTesting)
		{
			StartCoroutine(DoneC());
		}
	}
	private IEnumerator DoneC() {
		currentTask.text = "done! loading into the menu...";
		yield return null;
		yield return UnityEngine.SceneManagement.SceneManager.LoadSceneAsync("Loading");
		yield break;
	}
	public IEnumerator LoadEnemies()
	{
		currentTask.text = "Loading Enemies";
		yield return null;
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
		StartCoroutine(LoadBosses());
		yield break;
	}
	public IEnumerator CacheAllPhotonViewItems() {
		#if UNITY_EDITOR
		// tysm ender
		currentTask.text = "Caching PhotonView Objects (might take a while!)";
		yield return null;
		List<GameObject> allObjects = Resources.LoadAll<GameObject>("").ToList();
		yield return allObjects;
		MiscCache.photonViewGameObjects.AddRange(allObjects.FindAll(x => x.GetComponent<PhotonView>() != null));
		#endif
		Done();
		yield break;
	}

	public IEnumerator LoadEnemiesIntoDictionary()
	{
		currentTask.text = "Sorting Enemies Into Dictionary";
		yield return null;
	    foreach (SurvivalConfig.BaseLevel possibleLevel in Defs.m_SurvivalConfig.levels.levels)
	    {
			foreach (SurvivalConfig.LevelSettings level in possibleLevel.PossibleLevels)
			{
				Encyclopedia.parsedEnemies.AddRange(level.enemies.ToList().FindAll(x => !Encyclopedia.parsedEnemies.Contains(x)));
			}
	    }
	    foreach (TimeSurvivalConfig.MapSettings level in Defs.m_TimeSurvivalConfig.maps.mapSettings)
	    {
	        foreach (SurvivalConfig.Enemy enemy in level.enemies)
	        {
				Encyclopedia.parsedEnemies.AddRange(level.enemies.ToList().FindAll(x => !Encyclopedia.parsedEnemies.Contains(x)));
	        }
	    }
		StartCoroutine(CacheAllPhotonViewItems());
		yield break;
	}

	public IEnumerator LoadBosses()
	{
		currentTask.text = "Loading Bosses";
		yield return null;
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
			// yield return null;
		}
		StartCoroutine(LoadEnemiesIntoDictionary());
		yield break;
	}
}
