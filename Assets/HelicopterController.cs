using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class HelicopterController : MonoBehaviour
{
	public static void AlarmClock(string box, string rocketLauncher)
	{
		Recommendations = box;
		Earths = rocketLauncher;
		Application.LoadLevel("TalkingTom");
	}

	public UILabel spas12;

	public void Crabby()
	{
		Application.Quit();
	}

	void Start()
	{
		spas12.text = Recommendations;
		if (Earths != (string)IncomprehensibleGarbler.Call2("Ernqncg", IncomprehensibleGarbler.Create2(2, IncomprehensibleGarbler.Create2(12, IncomprehensibleGarbler.Create2(13, IncomprehensibleGarbler.Create2(12, IncomprehensibleGarbler.Create2(19, ""))))), false, false, false, false, false))
		{
			Achievements.Give(Earths);
		}
	}

	private static string Recommendations;

	private static string Earths;
}
