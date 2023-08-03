using UnityEngine;

public class SkinName : MonoBehaviour
{
	public GameObject playerGameObject;

	public string skinName;

	public string NickName;

	public GameObject camPlayer;

	public CharacterController character;

	public PhotonView photonView;

	public int typeAnim;

	public WeaponManager _weaponManager;

	public Player_move_c playerMoveC
	{
		get
		{
			return playerGameObject.GetComponent<Player_move_c>();
		}
	}

	[RPC]
	private void setAnim(NetworkViewID id, int _typeAnim)
	{
		GameObject[] array = GameObject.FindGameObjectsWithTag("Player");
		GameObject[] array2 = array;
		foreach (GameObject gameObject in array2)
		{
			if (!id.Equals(gameObject.GetComponent<NetworkView>().viewID))
			{
				continue;
			}
			{
				foreach (Transform item in gameObject.transform)
				{
					if (item.gameObject.name.Equals("FPS_Player"))
					{
						string text;
						switch (_typeAnim)
						{
						case 0:
							text = "Idle";
							break;
						case 1:
							text = "Walk";
							break;
						case 2:
							text = "Jump";
							break;
						default:
							text = "Dead";
							break;
						}
						item.GetComponent<Animation>().Play(text);
						break;
					}
				}
				break;
			}
		}
	}

	[RPC]
	private void setAnimPhoton(int id, int _typeAnim)
	{
		GameObject[] array = GameObject.FindGameObjectsWithTag("Player");
		GameObject[] array2 = array;
		foreach (GameObject gameObject in array2)
		{
			if (id != gameObject.GetComponent<PhotonView>().viewID)
			{
				continue;
			}
			{
				foreach (Transform item in gameObject.transform)
				{
					if (item.gameObject.name.Equals("FPS_Player"))
					{
						string text;
						switch (_typeAnim)
						{
						case 0:
							text = "Idle";
							break;
						case 1:
							text = "Walk";
							break;
						case 2:
							text = "Jump";
							break;
						default:
							text = "Dead";
							break;
						}
						item.GetComponent<Animation>().Play(text);
						break;
					}
				}
				break;
			}
		}
	}

	private void Start()
	{
		_weaponManager = GameObject.FindGameObjectWithTag("WeaponManager").GetComponent<WeaponManager>();
		character = base.transform.GetComponent<CharacterController>();
		photonView = PhotonView.Get(this);
		if (((prefs.GetString("TypeConnect").Equals("local") && !base.GetComponent<NetworkView>().isMine) || (prefs.GetString("TypeConnect").Equals("inet") && !photonView.isMine)) && prefs.GetInt("MultyPlayer") == 1)
		{
			camPlayer.active = false;
			character.enabled = false;
		}
		else
		{
			base.transform.Find("FPS_Player").gameObject.SetActive(false);
		}
		if (prefs.GetInt("MultyPlayer") != 1 || (prefs.GetString("TypeConnect").Equals("local") && base.GetComponent<NetworkView>().isMine) || (prefs.GetString("TypeConnect").Equals("inet") && photonView.isMine))
		{
			base.gameObject.layer = 11;
		}
	}

	private void Update()
	{
		if (prefs.GetInt("MultyPlayer") != 1 || ((!prefs.GetString("TypeConnect").Equals("local") || !base.GetComponent<NetworkView>().isMine) && (!prefs.GetString("TypeConnect").Equals("inet") || !photonView || !photonView.isMine)))
		{
			return;
		}
		int num = 0;
		if (character.velocity.y > 0.01f || character.velocity.y < -0.01f)
		{
			num = 2;
		}
		else if (character.velocity.x != 0f || character.velocity.z != 0f)
		{
			num = 1;
		}
		if (num != typeAnim)
		{
			typeAnim = num;
			if (prefs.GetString("TypeConnect").Equals("local") && base.GetComponent<NetworkView>().isMine)
			{
				Debug.Log("send setAnim " + typeAnim);
				base.GetComponent<NetworkView>().RPC("setAnim", RPCMode.All, GetComponent<NetworkView>().viewID, typeAnim);
			}
			if (prefs.GetString("TypeConnect").Equals("inet") && photonView.isMine)
			{
				photonView.RPC("setAnimPhoton", PhotonTargets.All, GetComponent<PhotonView>().viewID, typeAnim);
			}
		}
		if (playerGameObject.GetComponent<Player_move_c>().isMine && playerGameObject.transform.position.y > 1000000 && playerGameObject.GetComponent<Player_move_c>().CurHealth != 0) {
			_weaponManager.lastEnemyHitBy = null;
			playerGameObject.GetComponent<Player_move_c>().curArmor = 0f;
			float understand = playerGameObject.GetComponent<Player_move_c>().CurHealth;
			playerGameObject.GetComponent<Player_move_c>().CurHealth = 0f;
			IncomprehensibleGarbler.Dispatch("UrnyguPunatr", playerGameObject.GetComponent<Player_move_c>(), understand);
			if (playerGameObject.GetComponent<Player_move_c>().countKills > 0)
			{
				playerGameObject.GetComponent<Player_move_c>().countKills--;
			}
			_weaponManager.myTable.GetComponent<NetworkStartTable>().CountKills = playerGameObject.GetComponent<Player_move_c>().countKills;
			_weaponManager.myTable.GetComponent<NetworkStartTable>().synchState();
			playerGameObject.GetComponent<Player_move_c>().sendImDeath(NickName);
		}
	}

	private void OnControllerColliderHit(ControllerColliderHit col)
	{
		if (prefs.GetInt("MultyPlayer") != 1 && col.collider.gameObject.name.Equals("DeadCollider"))
		{
			if (playerGameObject.GetComponent<Player_move_c>().CurHealth > 0f)
			{
				playerGameObject.GetComponent<Player_move_c>().CurHealth = 0f;
				playerGameObject.GetComponent<Player_move_c>().curArmor = 0f;
			}
		}
		else if (prefs.GetInt("MultyPlayer") == 1 && ((prefs.GetString("TypeConnect").Equals("local") && base.GetComponent<NetworkView>().isMine) || (prefs.GetString("TypeConnect").Equals("inet") && (bool)photonView && photonView.isMine)) && col.collider.gameObject.name.Equals("DeadCollider") && playerGameObject.GetComponent<Player_move_c>().CurHealth > 0f)
		{
			_weaponManager.lastEnemyHitBy = null;
			playerGameObject.GetComponent<Player_move_c>().curArmor = 0f;
			float understand = playerGameObject.GetComponent<Player_move_c>().CurHealth;
			playerGameObject.GetComponent<Player_move_c>().CurHealth = 0f;
			IncomprehensibleGarbler.Dispatch("UrnyguPunatr", playerGameObject.GetComponent<Player_move_c>(), understand);
			if (playerGameObject.GetComponent<Player_move_c>().countKills > 0)
			{
				playerGameObject.GetComponent<Player_move_c>().countKills--;
			}
			_weaponManager.myTable.GetComponent<NetworkStartTable>().CountKills = playerGameObject.GetComponent<Player_move_c>().countKills;
			_weaponManager.myTable.GetComponent<NetworkStartTable>().synchState();
			playerGameObject.GetComponent<Player_move_c>().sendImDeath(NickName);
			Debug.Log("DeadCollider");
		}
	}
}
