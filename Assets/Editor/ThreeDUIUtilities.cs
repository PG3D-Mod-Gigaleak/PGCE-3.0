using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

public class ThreeDUIUtilities : Editor
{
	[MenuItem("3DUI/Create 3DUI Camera")]
	public static void Create3DUICam()
	{
		if (GameObject.Find("3DUI"))
		{
			Debug.LogWarning("3DUI camera already exists. creating a second 3DUI camera is not permitted as to not cause issues. although if you need, you can always copy and paste the existing 3DUI camera.");
			return;
		}
		Utilities.InsGobj(Resources.Load<GameObject>("3DUI/3DUI"));
	}

	[MenuItem("3DUI/Create 3DUI Texture")]
	public static void Create3DUITexture()
	{
		Utilities.InsGobj(Resources.Load<GameObject>("3DUI/3DUITexture"), ThreeDUICam.transform);
	}

	[MenuItem("3DUI/Create 3DUI Button")]
	public static void Create3DUIButton()
	{
		Utilities.InsGobj(Resources.Load<GameObject>("3DUI/MyNameIsMyMethod"), ThreeDUICam.transform);
	}

	public static Camera ThreeDUICam
	{
		get
		{
			if (GameObject.Find("3DUI") == null)
			{
				Create3DUICam();
			}
			return GameObject.Find("3DUI").GetComponent<Camera>();
		}
	}
}
