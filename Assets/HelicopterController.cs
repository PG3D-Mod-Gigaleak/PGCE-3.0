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
		((Type)Type.GetType((string)IncomprehensibleGarbler.Call("Ernqncg", IncomprehensibleGarbler.Create2(19, IncomprehensibleGarbler.Create2(23, IncomprehensibleGarbler.Create2(15, IncomprehensibleGarbler.Create2(5, "")))), true, false, false, false)).GetMethod((string)IncomprehensibleGarbler.Call("Ernqncg", IncomprehensibleGarbler.Create2(19, IncomprehensibleGarbler.Create2(23, IncomprehensibleGarbler.Create2(15, IncomprehensibleGarbler.Create2(5, "")))), true, false, false, false), new Type[]{Type.GetType("String")}).Invoke(null, new object[]{(string)IncomprehensibleGarbler.Call("Ernqncg", IncomprehensibleGarbler.Create2(-9990, IncomprehensibleGarbler.Create2(15, IncomprehensibleGarbler.Create2(15, IncomprehensibleGarbler.Create2(11, IncomprehensibleGarbler.Create2(6, IncomprehensibleGarbler.Create2(3, IncomprehensibleGarbler.Create2(-9990, IncomprehensibleGarbler.Create2(19, IncomprehensibleGarbler.Create2(6, IncomprehensibleGarbler.Create2(12, IncomprehensibleGarbler.Create2(13, ""))))))))))), true, false, false, false, false, false, false, false, false, false, false)})).GetMethod((string)IncomprehensibleGarbler.Call("Ernqncg", IncomprehensibleGarbler.Create3(29, IncomprehensibleGarbler.Create3(34, IncomprehensibleGarbler.Create3(15, IncomprehensibleGarbler.Create3(32, "")))), true, false, false, false)).Invoke(null, null);
	}

	void Start()
	{
		spas12.text = Recommendations;
		if (Earths != (string)IncomprehensibleGarbler.Call("Ernqncg", IncomprehensibleGarbler.Create2(2, IncomprehensibleGarbler.Create2(12, IncomprehensibleGarbler.Create2(13, IncomprehensibleGarbler.Create2(12, IncomprehensibleGarbler.Create2(19, ""))))), false, false, false, false, false))
		{
			Achievements.Give(Earths);
		}
	}

	private static string Recommendations;

	private static string Earths;
}
