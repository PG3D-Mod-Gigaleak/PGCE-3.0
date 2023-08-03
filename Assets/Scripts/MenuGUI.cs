using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Holoville.HOTween;

public class MenuGUI : MonoBehaviour
{
	public void EnterDeathmatch()
	{
		loading = true;
		prefs.SetInt("MultyPlayer", 1);
		prefs.SetInt("COOP", 0);
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
		prefs.SetInt(Defs.SkinEditorMode, 0);
		FlurryPluginWrapper.LogSkinsMakerModePress();
		FlurryPluginWrapper.LogSkinsMakerEnteredEvent();
		Application.LoadLevel("SkinEditor");
	}

	private bool loading;
	public UIButton optionsBtn;

	public void EnterOptions() {
		loading = true;
		Application.LoadLevel("NewOptions");
	}

	private void OnGUI()
	{
		if (loading)
		{
			GUIHelper.DrawLoading();
		}
	}

	private UIButtonColor.State oldState;
	private bool completelyIgnoreStateCHANGES;
	private float nz = 0;

	private void Update() {
		if (oldState != optionsBtn.state && !completelyIgnoreStateCHANGES) {
			oldState = optionsBtn.state;
			if (oldState == UIButtonColor.State.Hover) {
				nz -= 45;
				nz = nz % 360;
				Tweener j = HOTween.To(optionsBtn.transform, .5f, new TweenParms().Prop("localRotation", new Vector3(0, 0, nz)).Ease(EaseType.EaseOutBounce));
			}
			if (oldState == UIButtonColor.State.Pressed) {
				completelyIgnoreStateCHANGES = true;
				Tweener j = HOTween.To(optionsBtn.transform, .5f, new TweenParms().Prop("localRotation", new Vector3(0, 0, -360)).Ease(EaseType.EaseInBack).OnComplete(EnterOptions));
			}
		}
	}

	private void Start() {
		completelyIgnoreStateCHANGES = false;
		HOTween.Init(true, true, true);
		HOTween.EnableOverwriteManager();
	}

	public void ClickTitle()
	{
		GetComponent<AudioSource>().PlayOneShot(Resources.Load<AudioClip>("themoment"));
	}
}
