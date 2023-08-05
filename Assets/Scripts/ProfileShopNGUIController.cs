using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProfileShopNGUIController : MonoBehaviour {
	public UIInput usernameInput;
	public SkinButton button;
	private WeaponManager _weaponManager;
	public IEnumerator Start() {
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
		yield return null;
		AchievementNGUI.instance.gameObject.SetActive(true);
		// the toggle is weird, so i invert true and false
		catEarsToggle.value = (Storager.getInt("earsOn", false) == 0 ? true : false);
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
	public UIToggle catEarsToggle;
	private bool canActuallySet = false;
	public void OnCatEarsToggled() {
		if (canActuallySet) {
			print(!catEarsToggle.value);
			if (!catEarsToggle.value) {
				Achievements.Give("catears");
				Storager.setInt("earsOn", 1, false);
			} else {
				Storager.setInt("earsOn", 0, false);
			}
		}
		canActuallySet = true;
	}
	public void OnUsernameInputCHANGED() {
		prefs.SetString("NamePlayer", _weaponManager.gameObject.GetComponent<FilterBadWorld>().FilterString(usernameInput.value));
	}
}
