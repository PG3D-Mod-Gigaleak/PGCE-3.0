using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public sealed class ZombiUpravlenie : MonoBehaviour
{
	public delegate void DelayedCallback();

	public GameObject playerKill;

	private Player_move_c healthDown;

	private GameObject player;

	private float CurLifeTime;

	private string idleAnim = "Idle";

	private string normWalkAnim = "Norm_Walk";

	private string zombieWalkAnim = "Zombie_Walk";

	private string offAnim = "Zombie_Off";

	private string deathAnim = "Zombie_Dead";

	private string onAnim = "Zombie_On";

	private string attackAnim = "Zombie_Attack";

	private string shootAnim;

	private GameObject _modelChild;

	private Sounds _soundClips;

	private bool falling;

	private UnityEngine.AI.NavMeshAgent _nma;

	private BoxCollider _modelChildCollider;

	private ZombiManager _gameController;

	public bool deaded;

	public bool Friendly = false;

	public Transform target = null;

	public float health;

	private PhotonView photonView;

	public Texture hitTexture;

	private Texture _skin;

	private static SkinsManagerPixlGun _skinsManager;

	private bool _flashing;

	public int typeZombInMas;

	private float timeToUpdateTarget = 5f;

	private float timeToUpdateNavMesh;

	public int tekAnim = -1;

	public GameObject SelfObject;

	public WeaponManager _weaponManager;

	public float healthoffriendly = 1f;
	public float healthofenemy = 1f ;
	public float damagetofriendly = 1f;
	public float damagetoenemy = 1f;
	public string OtherName = "";
	public string SelfName = "";

	public string myCAnim(string a){
        return Defs.CAnim(_modelChild, a);
    }

	private void Awake()
	{
		_modelChild = base.transform.GetChild(0).gameObject;
		health = _modelChild.GetComponent<Sounds>().health;
		if (prefs.GetInt("COOP") != 1)
		{
			base.enabled = false;
		}
	}

	[PunRPC]
	private void setHealthRPC(float _health)
	{
		health = _health;
	}

	[PunRPC]
	private void flashRPC()
	{
	}

	public void setHealth(float _health, bool isFlash)
	{
		photonView.RPC("setHealthRPC", PhotonTargets.All, _health);
		Debug.Log("setHealth=" + _health);
		if (isFlash && !_flashing)
		{
			StartCoroutine(Flash());
			photonView.RPC("flashRPC", PhotonTargets.Others);
		}
	}

	public static Texture SetSkinForObj(GameObject go, string theName)
	{
		if (!_skinsManager)
		{
			_skinsManager = GameObject.FindGameObjectWithTag("SkinsManager").GetComponent<SkinsManagerPixlGun>();
		}
		Texture texture = Defs.GetSkinForEnemyCOOP(Application.loadedLevelName, theName);
		SetTextureRecursivelyFrom(go, texture);
		return texture;
	}

	public static string SkinNameForObj(string objName)
	{
		return objName;
	}

	public static void SetTextureRecursivelyFrom(GameObject obj, Texture txt)
	{
		foreach (Transform item in obj.transform)
		{
			if ((bool)item.gameObject.GetComponent<Renderer>() && (bool)item.gameObject.GetComponent<Renderer>().material)
			{
				if (item.gameObject.GetComponent<Renderer>().materials.Length > 1 && item.gameObject.name.Equals("raven_head"))
				{
					Material[] materials = item.gameObject.GetComponent<Renderer>().materials;
					foreach (Material material in materials)
					{
						if (material.name.Equals("raven_eye (Instance)"))
						{
							if (GlobalGameController.currentLevel == 6)
							{
								material.color = new Color(0.32156864f, 0f, 44f / 85f);
							}
						}
						else
						{
							if (item.tag != "donotchange" && item.tag != "ObjectLabel")
							{
								material.mainTexture = txt;
							}
						}
					}
				}
				else
				{
					if (item.tag != "donotchange" && item.tag != "ObjectLabel")
					{
						item.gameObject.GetComponent<Renderer>().material.mainTexture = txt;
					}
				}
			}
			SetTextureRecursivelyFrom(item.gameObject, txt);
		}
	}

	private IEnumerator Flash()
	{
		_flashing = true;
		SetTextureRecursivelyFrom(_modelChild, hitTexture);
		yield return new WaitForSeconds(0.125f);
		SetTextureRecursivelyFrom(_modelChild, _skin);
		_flashing = false;
	}

	private void Start()
	{
		_weaponManager = GameObject.FindGameObjectWithTag("WeaponManager").GetComponent<WeaponManager>();
		_skin = SetSkinForObj(_modelChild, this.name);
		_nma = GetComponent<UnityEngine.AI.NavMeshAgent>();
		_modelChildCollider = _modelChild.GetComponent<BoxCollider>();
		shootAnim = offAnim;
		player = null;
		_gameController = GameObject.FindGameObjectWithTag("ZombiCreator").GetComponent<ZombiManager>();
		_soundClips = _modelChild.GetComponent<Sounds>();
		CurLifeTime = _soundClips.timeToHit;
		target = null;
		_modelChild.GetComponent<Animation>().Stop();
		Walk();
		_soundClips.attackingSpeed += Random.Range(0f - _soundClips.attackingSpeedRandomRange[0], _soundClips.attackingSpeedRandomRange[1]);
		photonView = PhotonView.Get(this);
		_skin = SetSkinForObj(_modelChild, this.name);
		if (photonView.isMine)
		{
			photonView.RPC("setHealthRPC", PhotonTargets.All, _soundClips.health);
		}
		if (gameObject.name == "HER" || gameObject.name == "Whiteface") {
			_modelChild.transform.Find("Audio Source").GetComponent<AudioSource>().Play();
		}
	}

	public void setId(int _id)
	{
		photonView.RPC("setIdRPC", PhotonTargets.All, _id);
	}

	[PunRPC]
	public void setIdRPC(int _id)
	{
		GetComponent<PhotonView>().viewID = _id;
	}

	private void Update()
	{
		if (!photonView.isMine)
		{
			return;
		}
		if (!deaded)
		{
			if (target != null && timeToUpdateTarget > 0f)
			{
				timeToUpdateTarget -= Time.deltaTime;
				float num = Vector3.Distance(target.position, base.transform.position);
				Vector3 vector = new Vector3(target.position.x, base.transform.position.y, target.position.z);
				if (num >= _soundClips.attackDistance)
				{
					timeToUpdateNavMesh -= Time.deltaTime;
					if (timeToUpdateNavMesh < 0f)
					{
						_nma.SetDestination(vector);
						_nma.speed = _soundClips.attackingSpeed * Mathf.Pow(1.05f, GlobalGameController.AllLevelsCompleted);
						timeToUpdateNavMesh = 0f;
					}
					CurLifeTime = _soundClips.timeToHit;
					PlayZombieRun();
				}
				else
				{
					if (_nma.path != null)
					{
						_nma.ResetPath();
					}
					CurLifeTime -= Time.deltaTime;
					base.transform.LookAt(vector);
					if (CurLifeTime <= 0f)
					{
						Debug.LogError("CurLifeTimed");
						CurLifeTime = _soundClips.timeToHit;
						if (PlayerPrefsX.GetBool(PlayerPrefsX.SndSetting, true))
						{
							base.GetComponent<AudioSource>().PlayOneShot(_soundClips.bite);
						}
						if (Friendly == false)
						{
							string isASummon = "";
							isASummon = target.gameObject.name;
							if ((target.tag == "Player") && (isASummon != "PlayerTrickster"))
							{
						    target.transform.Find("GameObject").GetComponent<Player_move_c>().minusLiveFromZombi(_soundClips.damagePerHit, base.transform.GetChild(0).gameObject);
							Debug.LogError("DamageToPlayer");
							}
							else if ((target.tag == "Player") && (isASummon == "PlayerTrickster"))
							{
							healthoffriendly = target.parent.GetComponent<ZombiUpravlenie>().health;
							damagetofriendly = gameObject.transform.GetChild(0).GetComponent<Sounds>().damagePerHit;
				            if (healthoffriendly > 0f)
				            {
				            	healthoffriendly -= damagetofriendly;
				            	target.parent.gameObject.GetComponent<ZombiUpravlenie>().setHealth(healthoffriendly, true);
							}
				            _weaponManager.myTable.GetComponent<NetworkStartTable>().score = GlobalGameController.Score;
				            _weaponManager.myTable.GetComponent<NetworkStartTable>().synchState();
							Debug.LogError("DamageToSummon");
							}
						}
						else if (Friendly == true)
						{
				            healthofenemy = target.GetComponent<ZombiUpravlenie>().health;
						    damagetoenemy = gameObject.transform.GetChild(0).GetComponent<Sounds>().damagePerHit;
				            if (healthofenemy > 0f)
				            {
				            	healthofenemy -= damagetoenemy;
				            	target.GetComponent<ZombiUpravlenie>().setHealth(healthofenemy, true);
				            	GlobalGameController.Score += 5;
						    }
				            if (healthofenemy <= 0f)
				            {
				            	GlobalGameController.Score += target.GetChild(0).GetComponent<Sounds>().scorePerKill;
				            }
				            _weaponManager.myTable.GetComponent<NetworkStartTable>().score = GlobalGameController.Score;
				            _weaponManager.myTable.GetComponent<NetworkStartTable>().synchState();
							Debug.LogError("DamageToEnemy");
							Globals.PlayerMove.inGameGUI.Hitmark();
				        }
					}
					PlayZombieAttack();
				}
			}
			else
			{
				if (Friendly == false)
				{
				    GameObject[] array = GameObject.FindGameObjectsWithTag("Player");
				    if (array.Length > 0)
				    {
						timeToUpdateTarget = 3f;
				    	float num2 = Vector3.Distance(base.transform.position, array[0].transform.position);
				    	target = array[0].transform;
				    	GameObject[] array2 = array;
				    	foreach (GameObject gameObject in array2)
				    	{
				    		float num3 = Vector3.Distance(base.transform.position, gameObject.transform.position);
				    		if (num3 < num2)
				    		{
				    			num2 = Vector3.Distance(base.transform.position, gameObject.transform.position);
				    			target = gameObject.transform;
				    		}
				    	}
				    }
				}
				if (Friendly == true)
				{
				    Debug.LogError("Friendly");
			        SelfObject = gameObject;
					SelfName = SelfObject.name;
					List<GameObject> RealTargets = new List<GameObject>();
				    GameObject[] array = GameObject.FindGameObjectsWithTag("Enemy");
				    foreach (GameObject gameObject in array)
				    {
						OtherName = gameObject.name;
				    	if (OtherName == SelfName)
				    	{
				    	}
						else 
						{
							RealTargets.Add(gameObject);
				    	}
				    }
					if (RealTargets[0] != null)
					{
					    timeToUpdateTarget = 3f;
				        float num2 = Vector3.Distance(base.transform.position, RealTargets[0].transform.position);
				        target = RealTargets[0].transform;
				        foreach (GameObject gameObject in RealTargets)
				        {
				        	float num3 = Vector3.Distance(base.transform.position, gameObject.transform.position);
				        	if (num3 < num2)
				        	{
				        		num2 = Vector3.Distance(base.transform.position, gameObject.transform.position);
				        		target = gameObject.transform;
				        	}
				        }
					}
				}
			}
			player = target.gameObject;
			if (health <= 0f)
			{
			    photonView.RPC("Death", PhotonTargets.All);
			}
		}
		else if (falling)
		{
			float num4 = 7f;
			base.transform.position = new Vector3(base.transform.position.x, base.transform.position.y - num4 * Time.deltaTime, base.transform.position.z);
		}
	}

	[PunRPC]
	private void Death()
	{
		if (photonView.isMine)
		{
			if (prefs.GetInt(base.name.Replace("(Clone)", "") + "_EncyclopediaUnlock") == 0)
			{
				GameObject.FindGameObjectWithTag("InGameGUI").GetComponent<InGameGUI>().newEntryPopup(base.name.Replace("(Clone)", "") + "_EncyclopediaUnlock");
			}
			prefs.SetInt(base.name.Replace("(Clone)", "") + "_EncyclopediaUnlock", 1);
		}
		if (prefs.GetInt("COOP", 0) == 1)
		{
			if (gameObject.name == "HER" || gameObject.name == "Whiteface") {
				_modelChild.transform.Find("Audio Source").GetComponent<AudioSource>().Stop();
			}
			if (_nma != null)
			{
				_nma.enabled = false;
			}
			float num = 0.1f;
			if (PlayerPrefsX.GetBool(PlayerPrefsX.SndSetting, true) && _soundClips != null)
			{
				base.GetComponent<AudioSource>().PlayOneShot(_soundClips.death);
				num = _soundClips.death.length;
			}
			_modelChild.GetComponent<Animation>().Stop();
			if ((bool)_modelChild.GetComponent<Animation>()[myCAnim(deathAnim)])
			{
				_modelChild.GetComponent<Animation>().Play(myCAnim(deathAnim));
				num = Mathf.Max(num, _modelChild.GetComponent<Animation>()[myCAnim(deathAnim)].length);
				CodeAfterDelay(_modelChild.GetComponent<Animation>()[myCAnim(deathAnim)].length * 1.25f, StartFall);
			}
			else
			{
				StartFall();
			}
			CodeAfterDelay(num, DestroySelf);
			_modelChild.GetComponent<BoxCollider>().enabled = false;
			deaded = true;
			SpawnMonster component = GetComponent<SpawnMonster>();
			component.ShouldMove = false;
		}
	}

	private void DestroySelf()
	{
		Object.Destroy(base.gameObject);
	}

	private void StartFall()
	{
		falling = true;
	}

	private void Walk()
	{
		_modelChild.GetComponent<Animation>().Stop();
		if ((bool)_modelChild.GetComponent<Animation>()[myCAnim(normWalkAnim)])
		{
			_modelChild.GetComponent<Animation>().CrossFade(myCAnim(normWalkAnim));
		}
		else
		{
			_modelChild.GetComponent<Animation>().CrossFade(myCAnim(zombieWalkAnim));
		}
	}

	public void PlayZombieRun()
	{
		if (tekAnim != 1 && prefs.GetInt("COOP", 0) == 1)
		{
			if ((bool)_modelChild.GetComponent<Animation>()[myCAnim(zombieWalkAnim)])
			{
				_modelChild.GetComponent<Animation>().CrossFade(myCAnim(zombieWalkAnim));
			}
			photonView.RPC("PlayZombieRunRPC", PhotonTargets.Others);
		}
		tekAnim = 1;
	}

	public void PlayZombieAttack()
	{
		if (tekAnim != 2 && prefs.GetInt("COOP", 0) == 1)
		{
			if ((bool)_modelChild.GetComponent<Animation>()[myCAnim(attackAnim)])
			{
				_modelChild.GetComponent<Animation>().CrossFade(myCAnim(attackAnim));
			}
			else if ((bool)_modelChild.GetComponent<Animation>()[myCAnim(shootAnim)])
			{
				_modelChild.GetComponent<Animation>().CrossFade(myCAnim(shootAnim));
			}
			photonView.RPC("PlayZombieAttackRPC", PhotonTargets.Others);
		}
		tekAnim = 2;
	}

	[PunRPC]
	public void PlayZombieRunRPC()
	{
		if ((bool)_modelChild.GetComponent<Animation>()[myCAnim(zombieWalkAnim)])
		{
			_modelChild.GetComponent<Animation>().CrossFade(myCAnim(zombieWalkAnim));
		}
		tekAnim = 1;
	}

	[PunRPC]
	public void PlayZombieAttackRPC()
	{
		if ((bool)_modelChild.GetComponent<Animation>()[myCAnim(attackAnim)])
		{
			_modelChild.GetComponent<Animation>().CrossFade(myCAnim(attackAnim));
		}
		else if ((bool)_modelChild.GetComponent<Animation>()[myCAnim(shootAnim)])
		{
			_modelChild.GetComponent<Animation>().CrossFade(myCAnim(shootAnim));
		}
		tekAnim = 2;
	}

	public void CodeAfterDelay(float delay, DelayedCallback callback)
	{
		StartCoroutine(___DelayedCallback(delay, callback));
	}

	private IEnumerator ___DelayedCallback(float time, DelayedCallback callback)
	{
		yield return new WaitForSeconds(time);
		callback();
	}
}
