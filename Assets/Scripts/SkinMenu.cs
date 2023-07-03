using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class SkinMenu : MonoBehaviour
{
	private GameObject skinBtn;

	public Transform scroll;

	public UIGrid skinGrid;

	void Start()
	{
		skinBtn = Resources.Load<GameObject>("SkinButton");
		Skins skins = Resources.Load<Skins>("Skins");
		foreach (Skins.Skin skin in skins.skins)
		{
			CreateSkinButton(skin);
		}
		skinGrid.Reposition();
	}

	public void EnterMenu()
	{
		Application.LoadLevel(Defs.CurrentMainMenuScene);
	}

	void Update()
	{
		scroll.localPosition = new Vector3(scroll.localPosition.x, scroll.localPosition.y + mouseScrollThing, scroll.localPosition.z);
	}

	public int mouseScrollThing
	{
		get
		{
			return (Input.GetAxis("Mouse ScrollWheel") == 0 ? 0 : Input.GetAxis("Mouse ScrollWheel") < 0 ? 25 : -25);
		}
	}

	public void SetSkin(Skins.Skin skin)
	{
		PlayerPrefs.SetString("base64_multskin", Convert.ToBase64String(ImageConversion.EncodeToPNG((Texture2D)skin.skinTexture)));
	}

	public IEnumerator SetBack(Transform transform)
	{
		yield return new WaitForSeconds(0.1f);
		transform.localScale = Vector3.one;
	}

	public void CreateSkinButton(Skins.Skin skin)
	{
		SkinButton button = Instantiate(skinBtn).GetComponent<SkinButton>();
		button.transform.parent = skinGrid.transform;
		button.nameLabel.text = skin.skin;
		button.button.color = skin.color;
		button.nameLabel.color = skin.color;
		button.skin.sharedMaterial = new Material(Shader.Find("Mobile/Diffuse"));
		button.skin.sharedMaterial.SetTexture("_MainTex", skin.skinTexture);
		button.button.GetComponent<ButtonHandler>().Clicked += (object sender2, EventArgs args2)=> { SetSkin(skin);  if (button.transform.localScale == Vector3.one) { button.transform.localScale *= 0.8f; } StartCoroutine(SetBack(button.transform)); };
		button.transform.localScale = Vector3.one;
	}
}
