using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuGUI : MonoBehaviour
{
	public void EnterSurvival()
	{
		loading = true;
		PlayerPrefs.SetInt("MultyPlayer", 0);
		PlayerPrefs.SetInt("COOP", 0);
		GameObject.FindGameObjectWithTag("WeaponManager").GetComponent<WeaponManager>().Reset();
		PlayerPrefs.SetFloat(Defs.CurrentHealthSett, Player_move_c.MaxPlayerHealth);
		PlayerPrefs.SetFloat(Defs.CurrentArmorSett, 0f);
		FlurryPluginWrapper.LogSurvivalModePress();
		Application.LoadLevel("LoadingNoWait");
	}

	public void EnterDeathmatch()
	{
		loading = true;
		PlayerPrefs.SetInt("MultyPlayer", 1);
		PlayerPrefs.SetInt("COOP", 0);
		GameObject.FindGameObjectWithTag("WeaponManager").GetComponent<WeaponManager>().Reset();
		FlurryPluginWrapper.LogDeathmatchModePress();
		Application.LoadLevel("ConnectScene");
	}

	public void EnterCOOP()
	{
		loading = true;
		PlayerPrefs.SetString("TypeConnect", "inet");
		PlayerPrefs.SetInt("COOP", 1);
		PlayerPrefs.SetInt("MultyPlayer", 1);
		GameObject.FindGameObjectWithTag("WeaponManager").GetComponent<WeaponManager>().Reset();
		FlurryPluginWrapper.LogCOOPModePress();
		Application.LoadLevel("ConnectScene");
	}

	public void EnterArmory()
	{
		loading = true;
		Application.LoadLevel("NewArmoryScene");
	}

	public void EnterDictionary()
	{
		loading = true;
		Application.LoadLevel("Encyclopedia");
	}

	public void EnterSettings()
	{
		loading = true;
		Application.LoadLevel("SettingScene");
	}

	public void EnterSkinmaker()
	{
		loading = true;
		PlayerPrefs.SetInt(Defs.SkinEditorMode, 0);
		FlurryPluginWrapper.LogSkinsMakerModePress();
		FlurryPluginWrapper.LogSkinsMakerEnteredEvent();
		Application.LoadLevel("SkinEditor");
	}

	private bool loading;

	private void OnGUI()
	{
		if (loading)
		{
			GUIHelper.DrawLoading();
		}
	}

	public void ClickTitle()
	{
		GetComponent<AudioSource>().PlayOneShot(Resources.Load<AudioClip>("themoment"));
	}
}
