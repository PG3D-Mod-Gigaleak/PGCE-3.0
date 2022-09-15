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

	private void Start()
	{
		StartCoroutine(loadLevel());
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
