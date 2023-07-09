using UnityEngine;

public class InGameGUI : MonoBehaviour
{
	public delegate float GetFloatVAlue();

	public delegate string GetString();

	public GetFloatVAlue health;

	public GetFloatVAlue armor;

	public GetString killsToMaxKills;

	public GetString timeLeft;

	public GameObject elixir;

	public GameObject scoreLabel;

	public GameObject enemiesLabel;

	public GameObject timeLabel;

	public GameObject killsLabel;

	private FirstPersonControl fpc
	{
		get
		{
			return WeaponManager.sharedManager.myPlayer.GetComponent<FirstPersonControl>();
		}
	}

	[HideInInspector] public Player_move_c playerMoveC;

	public GameObject altShot;

	public UIButtonColor shootButton;

	public UIButtonColor jumpButton;

	public UIButtonColor altShootButton;

	public GameObject entryPopup;

	private bool jumping
	{
		get
		{
			return jumpButton.state == UIButtonColor.State.Pressed;
		}
	}

	public bool shooting
	{
		get
		{
			return shootButton.state == UIButtonColor.State.Pressed;
		}
	}

	private bool altShooting
	{
		get
		{
			return altShootButton.state == UIButtonColor.State.Pressed;
		}
	}

	public GameObject[] aimSprites;

	public UITexture zoomTex;

	public UITexture healthBar, armorBar;

	public UILabel healthAmount, armorAmount;

	private bool zoomed;

	public Animation hitmarker;

	public void Zoom(bool onOff, int index = 0)
	{
		zoomTex.gameObject.SetActive(onOff);
		zoomTex.mainTexture = Resources.Load<Texture>("scopes/" + index);
		foreach (GameObject aimSprite in aimSprites)
		{
			aimSprite.SetActive(!onOff);
		}
		zoomed = onOff;
	}

	private void Start()
	{
		if (PlayerPrefs.GetInt("AddCoins", 0) == 1)
		{
			Invoke("GenerateMiganie", 1f);
			PlayerPrefs.SetInt("AddCoins", 0);
		}
	}

	public void Hitmark()
	{
		hitmarker.Play("Hitmark");
	}

	public void Headmark()
	{
		hitmarker.Play("Headmarker");
	}

	public void Reload()
	{
		playerMoveC.SendMessage("ReloadPressed");
	}

	public void OpenChat()
	{
		playerMoveC.OpenChat();
	}

	private void GenerateMiganie()
	{
		CoinsMessage.FireCoinsAddedEvent();
	}

	public void newEntryPopup(string name)
	{
		entryPopup.GetComponent<Animation>().PlayQueued("UnlockedNewThing");
	}

	private void Update()
	{
		if (Application.isMobilePlatform)
		{
			fpc.jumpButton.jumpPressed = jumping;
			if (shooting)
			{
				playerMoveC.SendMessage("ShotPressed");
			}
			else if (altShooting)
			{
				playerMoveC.SendMessage("ShotPressed", true);
			}
		}
		if (zoomed)
		{
			return;
		}
		aimSprites[0].transform.localPosition = new Vector3(0f, 8f + WeaponManager.sharedManager.currentWeaponSounds.tekKoof * WeaponManager.sharedManager.currentWeaponSounds.startZone.y * 0.5f, 0f);
		aimSprites[1].transform.localPosition = new Vector3(0f, -8f - WeaponManager.sharedManager.currentWeaponSounds.tekKoof * WeaponManager.sharedManager.currentWeaponSounds.startZone.y * 0.5f, 0f);
		aimSprites[3].transform.localPosition = new Vector3(8f + WeaponManager.sharedManager.currentWeaponSounds.tekKoof * WeaponManager.sharedManager.currentWeaponSounds.startZone.y * 0.5f, 0f, 0f);
		aimSprites[2].transform.localPosition = new Vector3(-8f - WeaponManager.sharedManager.currentWeaponSounds.tekKoof * WeaponManager.sharedManager.currentWeaponSounds.startZone.y * 0.5f, 0f, 0f);
		healthBar.fillAmount = (playerMoveC.CurHealth / playerMoveC.MaxHealth) / 11f;
		armorBar.fillAmount = (playerMoveC.curArmor / playerMoveC.MaxArmor) / 11f;
		healthAmount.text = Mathf.RoundToInt(playerMoveC.CurHealth) + "";
		armorAmount.text = Mathf.RoundToInt(playerMoveC.curArmor) + "";
	}
}
