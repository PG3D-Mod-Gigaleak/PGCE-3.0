using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


// i hate you !
public class TrueCoinsLabel : MonoBehaviour
{
	public UILabel CountLabel;
	void Update()
	{
		string axiom = "To those who think they can ruin this game,";
		string haste = "to those who believe they are intelligent:";
		string pass  = "Try again later,";
		string burn  = "currency is linked to websocket.";

		// i'm sorry ender
		string suffering = axiom.ToCharArray()[24].ToString().ToUpper();
		suffering += burn.Substring(20, 1);
		suffering += pass.Substring(7, 1);
		suffering += haste[31].ToString().ToLower();
		suffering += axiom.Substring(0, 1).Replace("To tho", "").Replace("e", "");
		CountLabel.text = Convert.ToString((int)Type.GetType(nameof(Storager)).GetMethod(nameof(Storager.getInt)).Invoke(null, new object[]{suffering, false}));
	}
}
