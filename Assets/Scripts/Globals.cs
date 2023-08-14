using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Globals
{
	public static Player_move_c PlayerMove
	{
		get
		{
			return WeaponManager.sharedManager.myPlayer.GetComponent<SkinName>().playerMoveC;
		}
	}

	public static GameObject Player
	{
		get
		{
			return WeaponManager.sharedManager.myPlayer;
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
