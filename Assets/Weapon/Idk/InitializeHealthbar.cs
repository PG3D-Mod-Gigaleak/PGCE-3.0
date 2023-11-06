using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InitializeHealthbar : MonoBehaviour
{
    HealthNPC healthnpc;
    public int alreadyHealthbar = 0;
    public GameObject Healthbar;
    private float health;
    public float maxhealth;
    private float timer = 0;
    private float timer2 = 0;
    public int alreadyTimedBar = 0;
    private PhotonView photonView;
	private bool isMulti;
	private bool isInet;
	private bool isMine;
	private bool isCompany;
	private bool isCOOP;
	private bool isKilled;
	private int amount;

    private void Awake()
	{
		isMulti = prefs.GetInt("MultyPlayer") == 1;
		isInet = true;//prefs.GetString("TypeConnect").Equals("inet");
		isCompany = false;//prefs.GetInt("company", 0) == 1;
		isCOOP = prefs.GetInt("COOP", 0) == 1;
	}
    void Start()
    {
        if (gameObject.CompareTag("Enemy"))
        {
        gameObject.transform.GetChild(0).tag="ZombieCollider";
        gameObject.AddComponent<Rigidbody>();
        gameObject.GetComponent<Rigidbody>().isKinematic = true;
        maxhealth = transform.GetChild(0).GetComponent<Sounds>().health;
        }
        else if (gameObject.CompareTag("Player"))
        {
        gameObject.AddComponent<Rigidbody>();
        gameObject.GetComponent<Rigidbody>().isKinematic = true;
        maxhealth = 100f;
        }
    }
    void Update()
    {
        timer -= Time.deltaTime;
        timer2 -= Time.deltaTime;
        if (gameObject.CompareTag("Enemy"))
        {
            health = gameObject.GetComponent<ZombiUpravlenie>().health;
            if (alreadyTimedBar == 2)
            {
                timer = 1000f;
            }
        }
        else if (gameObject.CompareTag("Player"))
        {
            health = transform.GetComponent<SkinName>().playerMoveC.CurHealth;
            if (alreadyTimedBar == 0)
            {
                timer = 1f;
                alreadyTimedBar = 1;
            }
            else if (alreadyTimedBar == 2)
            {
                if (gameObject.CompareTag("Enemy"))
                {
                    maxhealth = transform.GetChild(0).GetComponent<Sounds>().health;
                }
                else if (gameObject.CompareTag("Player"))
                {
                    maxhealth = 100f;
                }
                timer = 3f;
                alreadyTimedBar = 1;
            }
        }
        if ((health < maxhealth) && timer <= 0f)
        {
            if (alreadyHealthbar == 0)
            {
                Healthbar.GetComponent<HealthNPC>().targetNPC = transform;
                Instantiate(Healthbar, transform.position, Quaternion.identity);
                if (gameObject.CompareTag("Enemy"))
                {
                    gameObject.transform.GetChild(0).tag="ZombieCollider";
                    gameObject.AddComponent<Rigidbody>();
                    gameObject.GetComponent<Rigidbody>().isKinematic = true;
                }
                else if (gameObject.CompareTag("Player"))
                {
                    gameObject.AddComponent<Rigidbody>();
                    gameObject.GetComponent<Rigidbody>().isKinematic = true;
                }
                alreadyHealthbar = 1;
            }
        }
    }
    public void DamageNPC(string typenpc, float coopDamage, float multiplayerDamage, float damageCooldown,WeaponManager _weaponManager)
    {
        if ((typenpc == "Zombie") && timer2 <= 0f)
        {
            if (!isMulti)
			    	{
			    		BotHealth component = gameObject.GetComponent<BotHealth>();
			    		component.adjustHealth(0f - coopDamage, Camera.main.transform);
			    	}
				Debug.LogError("EnemyDamage");
				Globals.PlayerMove.inGameGUI.Hitmark();
				float health = gameObject.GetComponent<ZombiUpravlenie>().health;
				if (health > 0f)
				{
					health -= coopDamage;
					gameObject.GetComponent<ZombiUpravlenie>().setHealth(health, true);
					GlobalGameController.Score += 5;
					if (health <= 0f)
					{
						GlobalGameController.Score += gameObject.transform.GetChild(0).GetComponent<Sounds>().scorePerKill;
					}
					_weaponManager.myTable.GetComponent<NetworkStartTable>().score = GlobalGameController.Score;
					_weaponManager.myTable.GetComponent<NetworkStartTable>().synchState();
				}
				timer2 = damageCooldown;
        }
        else if ((typenpc == "Player") && timer2 <= 0f)
        {
			        bool flag = false;
					flag = gameObject.GetComponent<PhotonView>().isMine;
					float num = 1f;
					bool isHeadShot = false;
					if (flag)
					{
                    Debug.LogError("PlayerDamage");
					Globals.PlayerMove.inGameGUI.Hitmark();
					float num2 = multiplayerDamage;
					float num3 = num2 - gameObject.GetComponent<SkinName>().playerMoveC.curArmor;
					if (num3 < 0f)
					{
						gameObject.GetComponent<SkinName>().playerMoveC.curArmor -= num2;
						num3 = 0f;
					}
					else
					{
						gameObject.GetComponent<SkinName>().playerMoveC.curArmor = 0f;
					}
					if (gameObject.GetComponent<SkinName>().playerMoveC.isMine) {
							float understand = gameObject.GetComponent<SkinName>().playerMoveC.CurHealth;
							gameObject.GetComponent<SkinName>().playerMoveC.CurHealth -= num3;
							IncomprehensibleGarbler.Dispatch("UrnyguPunatr", gameObject.GetComponent<SkinName>().playerMoveC, understand);
						} else {
							gameObject.GetComponent<SkinName>().playerMoveC.CurHealth -= num3;
						}
					if (gameObject.GetComponent<SkinName>().playerMoveC.CurHealth <= 0f)
						{
							if (gameObject.GetComponent<SkinName>().playerMoveC.isMine) {
								gameObject.GetComponent<SkinName>().playerMoveC.DispatchDie();
								Achievements.Give("HolyDamage");
							}
							if (!gameObject.GetComponent<SkinName>().playerMoveC.isKilled) {
							gameObject.GetComponent<SkinName>().playerMoveC.sendImDeath(gameObject.GetComponent<SkinName>().NickName);
							}
						}
				    timer2 = damageCooldown;
					}
        }
    }
}
