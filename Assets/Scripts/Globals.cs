using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Globals
{
	public static Player_move_c PlayerMove
	{
		get
		{
			return WeaponManager.sharedManager.myGun.GetComponent<Player_move_c>();
		}
	}

	public static GameObject Player
	{
		get
		{
			return WeaponManager.sharedManager.myPlayer;
		}
	}
}
