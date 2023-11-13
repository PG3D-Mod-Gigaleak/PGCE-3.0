using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Globals
{
	public static Player_move_c PlayerMove;

	public static GameObject Player
	{
		get
		{
			return PlayerMove.GetComponentInParent<SkinName>().gameObject;
		}
	}
	public static SkinName SkinName
	{
		get
		{
			return WeaponManager.sharedManager.myPlayer.GetComponent<SkinName>();
		}
	}
	public static FirstPersonControl FirstPersonControl
	{
		get
		{
			return WeaponManager.sharedManager.myPlayer.GetComponent<FirstPersonControl>();
		}
	}
	public static FilterBadWorld FilterBadWorld
	{
		get
		{
			return WeaponManager.sharedManager.gameObject.GetComponent<FilterBadWorld>();
		}
	}
	public static MapInfo.Map CurrentMap
	{
		get
		{
			return MapInfo.Instance.CurrentMapsList.Find(x => x.sceneName == Application.loadedLevelName);
		}
	}
}
