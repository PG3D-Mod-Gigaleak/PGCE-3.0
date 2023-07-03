using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuGUI : MonoBehaviour
{
	public void EnterDeathmatch()
	{
		loading = true;
		PlayerPrefs.SetInt("MultyPlayer", 1);
		PlayerPrefs.SetInt("COOP", 0);
		GameObject.FindGameObjectWithTag("WeaponManager").GetComponent<WeaponManager>().Reset();
		FlurryPluginWrapper.LogDeathmatchModePress();
		Application.LoadLevel("ConnectScene");
	}

	public void EnterArmory()
	{
		loading = true;
		Application.LoadLevel("NewArmoryScene");
	}

	public void EnterTesting()
	{
		loading = true;
		Application.LoadLevel("BetaTesting");
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
