using System.Collections;
using System.Collections.Generic;
using UnityEngine;
// using UnityEngine.Rendering.PostProcessing;
// using System;

public class OptionsMenuController : MonoBehaviour {
	public UISlider volumeSlider;
	public UISlider bloomIntensitySlider;
	public UILabel volumeLabel;
	public AudioSource auSr;
	public AudioClip testingAudioCli;
	public GameObject postpanel;
	private int retardedWorkaround = 100;
	public UIInput ToggleKeyInput;
	public GameObject PPDefaultToggle;
	public Color disabledColor;
	public Color enabledColor;
	
	private void Start() {
		volumeSlider.value = prefs.GetFloat("setVolm", 1);
		// PP Toggle Key
		if (prefs.GetString("ToggleKey") == "") 
		{
			prefs.SetString("ToggleKey", "p");
		}
		ToggleKeyInput.value = prefs.GetString("ToggleKey");
		// PP Default Toggle Check
		if (prefs.GetString("PPDefault") == "")
		{
			prefs.SetString("PPDefault", "false");
		}
		if (prefs.GetString("PPDefault") == "true")
		{
			PPDefaultToggle.GetComponent<UIToggle>().value = true;
			TogglePPDefault();
		}
		else
		{
			PPDefaultToggle.GetComponent<UIToggle>().value = false;
			TogglePPDefault();
		}
	}

	public void SaveToggleKey() {
		prefs.SetString("ToggleKey", ToggleKeyInput.value);
		StartCoroutine(LabelAnimation(ToggleKeyInput));
		auSr.PlayOneShot(testingAudioCli);
	}

	IEnumerator LabelAnimation(UIInput input) {
		input.label.color = new Color(255, 0, 0);
		yield return new WaitForSeconds(0.5f);
		input.label.color = new Color(255, 255, 255);
	}
	public void Close() {
		Application.LoadLevel(Defs.CurrentMainMenuScene);
	}
	public void VolumeValueCHANGED() {
		if (retardedWorkaround != (int)Mathf.RoundToInt(volumeSlider.value * 100)) {
			EditorOnlyDebug.Log("it's been set to " + (int)Mathf.RoundToInt(volumeSlider.value * 100));
			retardedWorkaround = (int)Mathf.RoundToInt(volumeSlider.value * 100);
		} else {
			EditorOnlyDebug.Log("what it was gonna be was " + (int)Mathf.RoundToInt(volumeSlider.value * 100));
			return;
		}
		if (volumeSlider.value <= 0.0099f) {
			Achievements.Give("silence");
		}
		prefs.SetFloat("setVolm", volumeSlider.value);
		AudioListener.volume = volumeSlider.value;
		auSr.PlayOneShot(testingAudioCli);
		volumeLabel.text = "Volume (" + (int)Mathf.RoundToInt(volumeSlider.value * 100) + "%)";
	}

	public void PostSettings() {
		postpanel.SetActive(true);
		auSr.PlayOneShot(testingAudioCli);
	}

	public void BackToSettings() {
		postpanel.SetActive(false);
		auSr.PlayOneShot(testingAudioCli);
	}

	public void TogglePPDefault()
	{
		auSr.PlayOneShot(testingAudioCli);
		bool enabled = PPDefaultToggle.GetComponent<UIToggle>().value;
		if (enabled)
		{
			PPDefaultToggle.GetComponent<UITexture>().color = enabledColor;
			prefs.SetString("PPDefault", "true");
		}
		else if (!enabled)
		{
			PPDefaultToggle.GetComponent<UITexture>().color = disabledColor;
			prefs.SetString("PPDefault", "false");
		}
	}
}
