using System.Collections;
using UnityEngine;

public sealed class AppsMenu : MonoBehaviour
{
	public Texture fon;

	public Texture pixlgun3d;

	public Texture man;

	public Texture androidFon;

	public GUIStyle shooter;

	public GUIStyle skinsmaker;

	private string expPath = string.Empty;

	private string logtxt;

	private bool downloadStarted;

	private bool ApplicationBinarySplitted
	{
		get
		{
			return Defs.AndroidEdition == Defs.RuntimeAndroidEdition.GoogleLite || Defs.AndroidEdition == Defs.RuntimeAndroidEdition.GooglePro;
		}
	}

	private void Update()
	{
		if (Application.platform == RuntimePlatform.Android && Input.GetKey(KeyCode.Escape))
		{
			Application.Quit();
		}
	}

	public void SetRandomLevels()
	{
		int[] the = new int[Defs.numOfLevels];
		int index = 0;
		foreach (SurvivalConfig.BaseLevel baseLevel in Defs.m_SurvivalConfig.levels.levels)
		{
			the[index] = UnityEngine.Random.Range(0, baseLevel.PossibleLevels.Length);
			index++;
		}
		Defs.randomScenesThisLoad = the;
	}

	private void Start()
	{
		SetRandomLevels();
		#if UNITY_EDITOR
		Debug.ClearDeveloperConsole();
		Debug.unityLogger.filterLogType = LogType.Log | LogType.Error;
		Debug.Log("<color=#aa0000ff><b>^^^!!! WARNING !!!^^^</b></color>");
		Debug.Log("<color=yellow>## DO <color=#aa0000ff><b>NOT</b></color> ALLOW WARNINGS IN THE LOG FILTERS!!! ##</color>");
		Debug.Log("<color=yellow>## IF YOU WANT TO GET YOUR HWID, MAKE SURE <color=#aa0000ff><b>NOBODY</b></color> IS LOOKING!! ##</color>");
		Debug.LogWarning("Your HWID is " + IncomprehensibleGarbler.GetMacAddress());
		#endif
		//StartCoroutine(loadLevel());
	}

	private void LoadLoading()
	{
		GlobalGameController.currentLevel = -1;
		Application.LoadLevel("Loading");
	}

	private void log(string t)
	{
		logtxt = logtxt + t + "\n";
		MonoBehaviour.print("MYLOG " + t);
	}

	private void OnGUI()
	{
	}

	protected IEnumerator loadLevel()
	{
		Application.LoadLevel("Loading");
		yield return new WaitForSeconds(0.001f);
	}
}
