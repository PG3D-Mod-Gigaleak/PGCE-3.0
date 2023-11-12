using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TestingController : MonoBehaviour
{
	public void EnterSurvival()
	{
		loading = true;
		prefs.SetInt("MultyPlayer", 0);
		prefs.SetInt("COOP", 0);
		GameObject.FindGameObjectWithTag("WeaponManager").GetComponent<WeaponManager>().Reset();
		prefs.SetFloat(Defs.CurrentHealthSett, 100f);
		prefs.SetFloat(Defs.CurrentArmorSett, 0f);
		FlurryPluginWrapper.LogSurvivalModePress();
		LoadConnectScene.sceneToLoad = "Cementery";
		Application.LoadLevel("PromScene");
	}

	public void EnterCOOP()
	{
		loading = true;
		prefs.SetString("TypeConnect", "inet");
		prefs.SetInt("COOP", 1);
		prefs.SetInt("MultyPlayer", 1);
		GameObject.FindGameObjectWithTag("WeaponManager").GetComponent<WeaponManager>().Reset();
		FlurryPluginWrapper.LogCOOPModePress();
		Application.LoadLevel("NewMapList");
	}

	public void EnterDictionary()
	{
		loading = true;
		Application.LoadLevel("Encyclopedia");
	}

	public void EnterMenu()
	{
		loading = true;
		Application.LoadLevel(Defs.CurrentMainMenuScene);
	}

	private bool loading;

	private void OnGUI()
	{
		if (loading)
		{
			GUIHelper.DrawLoading();
		}
	}
}
