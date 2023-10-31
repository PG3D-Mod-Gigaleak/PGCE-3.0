using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using UnityEngine;

public class DamageZone : MonoBehaviour
{
    public float coopDamage = 25f, multiplayerDamage = 15f, damageCooldown = 1f;
    private float timer;
    private PhotonView photonView;

	private bool isMulti;

	private bool isInet;

	private bool isMine;

	private bool isCompany;

	private bool isCOOP;

	private WeaponManager _weaponManager;

	private bool isKilled;
	private void Start()
	{
		_weaponManager = GameObject.FindGameObjectWithTag("WeaponManager").GetComponent<WeaponManager>();
	}
    void OnTriggerStay(Collider other)
    {
        if (timer > 0f)
        {
            return;
        }

        switch (other.tag)
        {
            case "Enemy":
			    if (!Defs.isMulti)
			    {
			    	Globals.PlayerMove.inGameGUI.Hitmark();
			    	other.transform.GetComponent<BotHealth>().adjustHealth(coopDamage, Camera.main.transform);
                    Debug.LogError("EnemyDamage");
			    }
			    else
			    {
			    	ZombiUpravlenie controller = other.transform.GetComponent<ZombiUpravlenie>();
			    	float health = controller.health;
			    	health -= coopDamage;
			    	controller.setHealth(health, true);
                    Debug.LogError("EnemyHealth");
			    	if (health <= 0f)
			    	{
			    		GlobalGameController.Score += controller.transform.GetChild(0).GetComponent<Sounds>().scorePerKill;
                        Debug.LogError("Score");
			    	}
			    	WeaponManager.sharedManager.myTable.GetComponent<NetworkStartTable>().score = GlobalGameController.Score;
			    	WeaponManager.sharedManager.myTable.GetComponent<NetworkStartTable>().synchState();
                    Globals.PlayerMove.inGameGUI.Hitmark();
			    }
                break;

            case "Player":
                    Globals.PlayerMove.inGameGUI.Hitmark();
                    Debug.LogError("DamagePlayer");
                    float num = 1f;
					bool isHeadShot = false;
					_weaponManager.lastEnemyHitBy = null;
					float num2 = multiplayerDamage;
					float num3 = num2 - other.GetComponent<SkinName>().playerMoveC.curArmor;
					if (num3 < 0f)
					{
						other.GetComponent<SkinName>().playerMoveC.curArmor -= num2;
						num3 = 0f;
					}
					else
					{
						other.GetComponent<SkinName>().playerMoveC.curArmor = 0f;
					}
					if (other.GetComponent<SkinName>().playerMoveC.CurHealth > 0f)
					{
						if (other.GetComponent<SkinName>().playerMoveC.isMine) {
							float understand = other.GetComponent<SkinName>().playerMoveC.CurHealth;
							other.GetComponent<SkinName>().playerMoveC.CurHealth -= num3;
							IncomprehensibleGarbler.Dispatch("UrnyguPunatr", other.GetComponent<SkinName>().playerMoveC, understand);
						} else {
							other.GetComponent<SkinName>().playerMoveC.CurHealth -= num3;
						}
						if (other.GetComponent<SkinName>().playerMoveC.CurHealth <= 0f)
						{
							if (isMine && other.GetComponent<SkinName>().playerMoveC.isMine) {
								other.GetComponent<SkinName>().playerMoveC.DispatchDie();
								Achievements.Give("HolyDamage");
							}
							other.GetComponent<SkinName>().playerMoveC.sendImDeath(other.GetComponent<SkinName>().NickName);
						}
					}
//                    Globals.PlayerMove.HitPlayer(other, multiplayerDamage);
//                    Globals.PlayerMove.inGameGUI.Hitmark();
//                    Debug.LogError("DamagePlayer");
                    break;
        }

        timer = damageCooldown;
    }

    void Update()
    {
        timer -= Time.deltaTime;
    }
}
