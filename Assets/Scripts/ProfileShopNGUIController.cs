using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProfileShopNGUIController : MonoBehaviour {
	public UIInput usernameInput;
	public SkinButton button;
	private WeaponManager _weaponManager;
	public void Start() {
		_weaponManager = GameObject.FindGameObjectWithTag("WeaponManager").GetComponent<WeaponManager>();
		string skinB64 = CustomPrefs.CurrentSkin;
		byte[] B64byteData = System.Convert.FromBase64String(skinB64); 
		Texture2D skinTex = new Texture2D(1,1);
		skinTex.LoadImage(B64byteData);
		skinTex.filterMode = FilterMode.Point;
		skinTex.mipMapBias = 0;
		usernameInput.value = prefs.GetString("NamePlayer", "Player");
		button.skin.sharedMaterial = new Material(Shader.Find("Mobile/Diffuse"));
		button.skin.sharedMaterial.SetTexture("_MainTex", skinTex);
		usernameInput.onValidate += Validate;
	}
	public char Validate(string text, int charIndex, char addedChar) {
		if ("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz?!^\"',.-_[]{} ".IndexOf(addedChar) == -1) {
			return default(char);
		}
		return addedChar;
	}
	public void OpenSkinSelector() {
		Application.LoadLevel("SkinMenu");
	}
	public void Back() {
		Debug.Log("let me out!!!");
		Application.LoadLevel("ConnectScene");
	}
	public void OnUsernameInputCHANGED() {
		prefs.SetString("NamePlayer", _weaponManager.gameObject.GetComponent<FilterBadWorld>().FilterString(usernameInput.value));
	}
}
