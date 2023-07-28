using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProfileShopNGUIController : MonoBehaviour {
	public void OpenSkinSelector() {
		Application.LoadLevel("SkinMenu");
	}
	public void Back() {
		Debug.Log("let me out!!!");
	}
}
