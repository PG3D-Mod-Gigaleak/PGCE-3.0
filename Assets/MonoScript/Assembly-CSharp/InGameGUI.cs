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

	public GameObject entryPopup, achievementPopup;

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
			#if UNITY_EDITOR
			if (Globals.PlayerMove && Globals.PlayerMove.showingAdminInput)
				return false;
			#endif
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

	public UITexture healthBar, armorBar, achievementIcon;

	public UILabel healthAmount, armorAmount, pingLabel, fpsLabel, achievementName;

	private bool zoomed;

	public Animation hitmarker;
	public AudioClip achievementSound;

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
		if (prefs.GetInt("AddCoins", 0) == 1)
		{
			Invoke("GenerateMiganie", 1f);
			prefs.SetInt("AddCoins", 0);
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

	public void GiveAchievement(string ach)
	{
		if (Storager.hasKey(ach + (string)IncomprehensibleGarbler.Call("Ernqncg", IncomprehensibleGarbler.Create(179, IncomprehensibleGarbler.Create(-9920, IncomprehensibleGarbler.Create(0, IncomprehensibleGarbler.Create(126, IncomprehensibleGarbler.Create(5, IncomprehensibleGarbler.Create(3, IncomprehensibleGarbler.Create(10, IncomprehensibleGarbler.Create(3, IncomprehensibleGarbler.Create(7, IncomprehensibleGarbler.Create(3, IncomprehensibleGarbler.Create(160, IncomprehensibleGarbler.Create(11, "")))))))))))), false, true, true, true, true, true, true, true, true, true, true, true)))
			return;
		Storager.setInt(ach + (string)IncomprehensibleGarbler.Call("Ernqncg", IncomprehensibleGarbler.Create3(80, IncomprehensibleGarbler.Create3(-9968, IncomprehensibleGarbler.Create3(2, IncomprehensibleGarbler.Create3(12, IncomprehensibleGarbler.Create3(15, IncomprehensibleGarbler.Create3(6, IncomprehensibleGarbler.Create3(36, IncomprehensibleGarbler.Create3(6, IncomprehensibleGarbler.Create3(20, IncomprehensibleGarbler.Create3(6, IncomprehensibleGarbler.Create3(22, IncomprehensibleGarbler.Create3(32, "")))))))))))), false, true, true, true, true, true, true, true, true, true, true, true), 1, false);
		achievementIcon.mainTexture = Resources.Load<Achievements>("Achievements").GetAchievement(ach).icon;
		achievementName.text = Resources.Load<Achievements>("Achievements").GetAchievement(ach).name;
		achievementPopup.GetComponent<Animation>().Play("AchievementGet");
		achievementPopup.GetComponent<AudioSource>().PlayOneShot(achievementSound);
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
		if (PhotonNetwork.connectionState == ConnectionState.Connected && PhotonNetwork.room != null) {
			pingLabel.alpha = 1;
			fpsLabel.alpha = 1;
			pingLabel.text = "Ping (avg): " + PhotonNetwork.GetPing() + " ms";
			fpsLabel.text = "FPS (avg): " + (int)(Time.frameCount / Time.time);
		} else {
			pingLabel.alpha = 0;
			fpsLabel.alpha = 0;
		}
		if (prefs.GetInt("ShowFPS", 0) == 0) {
			pingLabel.alpha = 0;
			fpsLabel.alpha = 0;
		}
		aimSprites[0].transform.localPosition = new Vector3(0f, 8f + WeaponManager.sharedManager.currentWeaponSounds.tekKoof * WeaponManager.sharedManager.currentWeaponSounds.startZone.y * 0.5f, 0f);
		aimSprites[1].transform.localPosition = new Vector3(0f, -8f - WeaponManager.sharedManager.currentWeaponSounds.tekKoof * WeaponManager.sharedManager.currentWeaponSounds.startZone.y * 0.5f, 0f);
		aimSprites[3].transform.localPosition = new Vector3(8f + WeaponManager.sharedManager.currentWeaponSounds.tekKoof * WeaponManager.sharedManager.currentWeaponSounds.startZone.y * 0.5f, 0f, 0f);
		aimSprites[2].transform.localPosition = new Vector3(-8f - WeaponManager.sharedManager.currentWeaponSounds.tekKoof * WeaponManager.sharedManager.currentWeaponSounds.startZone.y * 0.5f, 0f, 0f);
		healthBar.fillAmount = (playerMoveC.CurHealth / playerMoveC.MaxHealth);
		armorBar.fillAmount = (playerMoveC.curArmor / playerMoveC.MaxArmor);
		healthAmount.text = Mathf.RoundToInt(playerMoveC.CurHealth) + "";
		armorAmount.text = Mathf.RoundToInt(playerMoveC.curArmor) + "";
	}
}
