using System;
using UnityEngine;

public class MenuBackgroundMusic : MonoBehaviour
{
	private static string[] scenetsToPlayMusicOn = new string[10]
	{
		Defs.MainMenuScenes[0],
		Defs.MainMenuScenes[1],
		Defs.MainMenuScenes[2],
		Defs.MainMenuScenes[3],
		Defs.MainMenuScenes[4],
		Defs.MainMenuScenes[5],
		Defs.MainMenuScenes[6],
		"ConnectScene",
		"SettingScene",
		"ArmoryScene"
	};

	private void Start()
	{
		UnityEngine.Object.DontDestroyOnLoad(base.gameObject);
	}

	private void OnLevelWasLoaded(int idx)
	{
		if (Array.IndexOf(scenetsToPlayMusicOn, Application.loadedLevelName) >= 0)
		{
			if (!base.GetComponent<AudioSource>().isPlaying && (Array.IndexOf(Defs.MainMenuScenes, Application.loadedLevelName) >= 0))
			{
				base.GetComponent<AudioSource>().clip = Resources.Load("MenuResources/Music/menumusic_" + Application.loadedLevelName) as AudioClip;
				base.GetComponent<AudioSource>().Play();
			}
			if (!base.GetComponent<AudioSource>().isPlaying && !(Array.IndexOf(Defs.MainMenuScenes, Application.loadedLevelName) >= 0))
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
