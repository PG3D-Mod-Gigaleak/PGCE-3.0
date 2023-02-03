using UnityEngine;

public class InGameGUI : MonoBehaviour
{
	public delegate float GetFloatVAlue();

	public delegate string GetString();

	public GetFloatVAlue health;

	public GetFloatVAlue armor;

	public GetString killsToMaxKills;

	public GetString timeLeft;

	public GameObject[] hearts = new GameObject[0];

	public GameObject[] armorShields = new GameObject[0];

	public GameObject elixir;

	public GameObject scoreLabel;

	public GameObject enemiesLabel;

	public GameObject timeLabel;

	public GameObject killsLabel;

	[HideInInspector] public Player_move_c playerMoveC;

	public GameObject[] aimSprites;

	private void Start()
	{
		if (PlayerPrefs.GetInt("AddCoins", 0) == 1)
		{
			Invoke("GenerateMiganie", 1f);
			PlayerPrefs.SetInt("AddCoins", 0);
		}
	}

	public void OpenChat()
	{
		playerMoveC.OpenChat();
	}

	private void GenerateMiganie()
	{
		CoinsMessage.FireCoinsAddedEvent();
	}

	private void Update()
	{
		aimSprites[0].transform.localPosition = new Vector3(0f, 8f + WeaponManager.sharedManager.currentWeaponSounds.tekKoof * WeaponManager.sharedManager.currentWeaponSounds.startZone.y * 0.5f, 0f);
		aimSprites[1].transform.localPosition = new Vector3(0f, -8f - WeaponManager.sharedManager.currentWeaponSounds.tekKoof * WeaponManager.sharedManager.currentWeaponSounds.startZone.y * 0.5f, 0f);
		aimSprites[3].transform.localPosition = new Vector3(8f + WeaponManager.sharedManager.currentWeaponSounds.tekKoof * WeaponManager.sharedManager.currentWeaponSounds.startZone.y * 0.5f, 0f, 0f);
		aimSprites[2].transform.localPosition = new Vector3(-8f - WeaponManager.sharedManager.currentWeaponSounds.tekKoof * WeaponManager.sharedManager.currentWeaponSounds.startZone.y * 0.5f, 0f, 0f);
		for (int i = 0; i < Player_move_c.MaxPlayerHealth; i++)
		{
			hearts[i].SetActive((float)i < health());
		}
		for (int j = 0; j < Player_move_c.MaxPlayerHealth; j++)
		{
			armorShields[j].SetActive((float)j < armor());
		}
	}
}
