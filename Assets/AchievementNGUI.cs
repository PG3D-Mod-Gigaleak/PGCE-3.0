using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AchievementNGUI : MonoBehaviour
{
	public static AchievementNGUI instance;

	public UILabel achievementName;

	public UITexture achievementIcon;

	public AudioClip achievementSound;

	public GameObject achievementPopup;

	private List<string> queuedAchievements = new List<string>();
	
	private Achievements achievements;

	void Awake()
	{
		instance = this;
		DontDestroyOnLoad(gameObject);
	}

	void Start()
	{
		achievements = Resources.Load<Achievements>("Achievements");
	}

	void Update()
	{
		if (queuedAchievements.Count > 0)
		{
			if (!achievementPopup.GetComponent<Animation>().isPlaying)
			{
				Achievements.Achievement achievement = achievements.GetAchievement(queuedAchievements[0]);
				achievementIcon.mainTexture = achievement.icon;
				achievementName.text = achievement.name;

				achievementPopup.GetComponent<Animation>().Play("AchievementGet");
				achievementPopup.GetComponent<AudioSource>().PlayOneShot(achievementSound);
				queuedAchievements.RemoveAt(0);
			}
		}
	}

	public void GiveAchievement(string achievement)
	{
		if (Storager.hasKey(achievement + (string)IncomprehensibleGarbler.Call2("Ernqncg", IncomprehensibleGarbler.Create(179, IncomprehensibleGarbler.Create(-9920, IncomprehensibleGarbler.Create(0, IncomprehensibleGarbler.Create(126, IncomprehensibleGarbler.Create(5, IncomprehensibleGarbler.Create(3, IncomprehensibleGarbler.Create(10, IncomprehensibleGarbler.Create(3, IncomprehensibleGarbler.Create(7, IncomprehensibleGarbler.Create(3, IncomprehensibleGarbler.Create(160, IncomprehensibleGarbler.Create(11, "")))))))))))), false, true, true, true, true, true, true, true, true, true, true, true)))
			return;

		Storager.setInt(achievement + (string)IncomprehensibleGarbler.Call2("Ernqncg", IncomprehensibleGarbler.Create3(80, IncomprehensibleGarbler.Create3(-9968, IncomprehensibleGarbler.Create3(2, IncomprehensibleGarbler.Create3(12, IncomprehensibleGarbler.Create3(15, IncomprehensibleGarbler.Create3(6, IncomprehensibleGarbler.Create3(36, IncomprehensibleGarbler.Create3(6, IncomprehensibleGarbler.Create3(20, IncomprehensibleGarbler.Create3(6, IncomprehensibleGarbler.Create3(22, IncomprehensibleGarbler.Create3(32, "")))))))))))), false, true, true, true, true, true, true, true, true, true, true, true), 1, false);
		queuedAchievements.Add(achievement);
	}
}
