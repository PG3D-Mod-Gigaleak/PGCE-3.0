using System;
using UnityEngine;

public class MenuBackgroundMusic : MonoBehaviour
{
	private static string[] scenetsToPlayMusicOn = new string[3]
	{
		Defs.MainMenuScene,
		"ConnectScene",
		"SettingScene"
	};

	private void Start()
	{
		UnityEngine.Object.DontDestroyOnLoad(base.gameObject);
	}

	private void OnLevelWasLoaded(int idx)
	{
		if (Array.IndexOf(scenetsToPlayMusicOn, Application.loadedLevelName) >= 0)
		{
			if (!base.GetComponent<AudioSource>().isPlaying)
			{
				base.GetComponent<AudioSource>().Play();
			}
		}
		else
		{
			base.GetComponent<AudioSource>().Stop();
		}
	}
}
