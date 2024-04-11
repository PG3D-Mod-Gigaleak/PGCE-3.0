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

	// Written by Noobite, new to NGUI
	// public PostProcessProfile postProfile;
	// public Texture disabledTexture;
	// public Texture enabledTexture;
	// public UIToggle bloomToggle;
	
	private void Start() {
		volumeSlider.value = prefs.GetFloat("setVolm", 1);
		if (prefs.GetString("ToggleKey") == "") 
		{
			prefs.SetString("ToggleKey", "p");
		}
		ToggleKeyInput.value = prefs.GetString("ToggleKey");
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

	// public void ResetPost() {
    // 
    // }
    // 
    // public void BloomIntensity() {
    // 
    // }
    // 
    // public void BloomToggle() {
    // 
	// }

	public void BackToSettings() {
		postpanel.SetActive(false);
		auSr.PlayOneShot(testingAudioCli);
	}
}
