using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using UnityEngine;

public class DamageZone : MonoBehaviour
{
    public float coopDamage;
	public float multiplayerDamage;
	public float damageCooldown;
    private float timer;
    private PhotonView photonView;
	private bool isMulti;
	private bool isInet;
	private bool isMine;
	private bool isCompany;
	private bool isCOOP;
	public WeaponManager _weaponManager;
	private bool isKilled;
	private int amount;
	public bool isPierce = false;
	private void Awake()
	{
		isMulti = prefs.GetInt("MultyPlayer") == 1;
		isInet = true;//prefs.GetString("TypeConnect").Equals("inet");
		isCompany = false;//prefs.GetInt("company", 0) == 1;
		isCOOP = prefs.GetInt("COOP", 0) == 1;
	}
	private void Start()
	{
		_weaponManager = GameObject.FindGameObjectWithTag("WeaponManager").GetComponent<WeaponManager>();
		photonView = PhotonView.Get(this);
		timer = 0f;
		if (isMulti)
		{
			isMine = photonView.isMine;
		}
		if (isMulti && isMine)
		{
            return;
		}
		else if (!isMulti)
		{
            return;
		}
		if (!isMulti || isMine)
		{
			return;
		}
	}
    void OnTriggerStay(Collider other)
    {
		if ( (timer <= 0f) && isPierce == false )
		{
        if (other.tag == "ZombieCollider")
        {
			    if (!isMulti)
			    	{
			    		BotHealth component = other.transform.parent.gameObject.GetComponent<BotHealth>();
			    		component.adjustHealth(0f - coopDamage, Camera.main.transform);
			    	}
				Debug.LogError("EnemyDamage");
				Globals.PlayerMove.inGameGUI.Hitmark();
				float health = other.transform.parent.gameObject.GetComponent<ZombiUpravlenie>().health;
				if (health > 0f)
				{
					health -= coopDamage;
					other.transform.parent.gameObject.GetComponent<ZombiUpravlenie>().setHealth(health, true);
					GlobalGameController.Score += 5;
					if (health <= 0f)
					{
						GlobalGameController.Score += other.GetComponent<Sounds>().scorePerKill;
					}
					_weaponManager.myTable.GetComponent<NetworkStartTable>().score = GlobalGameController.Score;
					_weaponManager.myTable.GetComponent<NetworkStartTable>().synchState();
				}
				timer = damageCooldown;
		}
        if (other.tag == "BodyCollider")
		{
			        bool flag = false;
					flag = other.transform.parent.gameObject.GetComponent<PhotonView>().isMine;
					float num = 1f;
					bool isHeadShot = false;
					if (flag)
					{
                    Debug.LogError("PlayerDamage");
					Globals.PlayerMove.inGameGUI.Hitmark();
					float num2 = multiplayerDamage;
					float num3 = num2 - other.transform.parent.gameObject.GetComponent<SkinName>().playerMoveC.curArmor;
					if (num3 < 0f)
					{
						other.transform.parent.gameObject.GetComponent<SkinName>().playerMoveC.curArmor -= num2;
						num3 = 0f;
					}
					else
					{
						other.transform.parent.gameObject.GetComponent<SkinName>().playerMoveC.curArmor = 0f;
					}
					if (other.transform.parent.gameObject.GetComponent<SkinName>().playerMoveC.isMine) {
							float understand = other.transform.parent.gameObject.GetComponent<SkinName>().playerMoveC.CurHealth;
							other.transform.parent.gameObject.GetComponent<SkinName>().playerMoveC.CurHealth -= num3;
							IncomprehensibleGarbler.Dispatch("UrnyguPunatr", other.transform.parent.gameObject.GetComponent<SkinName>().playerMoveC, understand);
						} else {
							other.transform.parent.gameObject.GetComponent<SkinName>().playerMoveC.CurHealth -= num3;
						}
					if (other.transform.parent.gameObject.GetComponent<SkinName>().playerMoveC.CurHealth <= 0f)
						{
							if (other.transform.parent.gameObject.GetComponent<SkinName>().playerMoveC.isMine) {
								other.transform.parent.gameObject.GetComponent<SkinName>().playerMoveC.DispatchDie();
								Achievements.Give("HolyDamage");
							}
							if (!other.transform.parent.gameObject.GetComponent<SkinName>().playerMoveC.isKilled) {
							other.transform.parent.gameObject.GetComponent<SkinName>().playerMoveC.sendImDeath(other.transform.parent.gameObject.GetComponent<SkinName>().NickName);
							}
						}
				    timer = damageCooldown;
					}
		}
		}
		else if ( isPierce == true )
		{
            if (other.tag == "ZombieCollider")
            {
				other.transform.parent.GetComponent<InitializeHealthbar>().DamageNPC("Zombie",coopDamage,multiplayerDamage,damageCooldown,_weaponManager);
		    }
            if (other.tag == "BodyCollider")
		    {
				other.transform.parent.GetComponent<InitializeHealthbar>().DamageNPC("Player",coopDamage,multiplayerDamage,damageCooldown,_weaponManager);
		    }
		}

//                    Globals.PlayerMove.HitPlayer(other, multiplayerDamage);
//                    Globals.PlayerMove.inGameGUI.Hitmark();
//                    Debug.LogError("DamagePlayer");
    }

    void Update()
    {
        timer -= Time.deltaTime;
    }
}
