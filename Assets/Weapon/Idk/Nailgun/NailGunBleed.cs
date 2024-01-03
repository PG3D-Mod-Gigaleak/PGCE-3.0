using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NailGunBleed : MonoBehaviour
{
    public GameObject target;
	public float bleedmultidamage;
    public float initmultidamage;
    public float initcoopdamage;
    public float bleedcoopdamage;
    public float cooldown;
    public float lifetime;
    public Vector3 posdiff;
    public GameObject Nail;
    private PhotonView photonView;
	private bool isMulti;
	private bool isInet;
	private bool isMine;
	private bool isCompany;
	private bool isCOOP;
	public WeaponManager _weaponManager;
	private bool isKilled;
	private int amount;

	private void Awake()
	{
		isMulti = prefs.GetInt("MultyPlayer") == 1;
		isInet = true;//prefs.GetString("TypeConnect").Equals("inet");
		isCompany = false;//prefs.GetInt("company", 0) == 1;
		isCOOP = prefs.GetInt("COOP") == 1;
	}
    void Start()
    {
        _weaponManager = GameObject.FindGameObjectWithTag("WeaponManager").GetComponent<WeaponManager>();
        Globals.PlayerMove.inGameGUI.Hitmark();
        if (target.tag == "ZombieCollider")
        {
            if (!isMulti)
		    	{
		    		BotHealth component = target.transform.parent.gameObject.GetComponent<BotHealth>();
		    		component.adjustHealth(0f - initcoopdamage, Camera.main.transform);
		    	}
		    float health = target.transform.parent.gameObject.GetComponent<ZombiUpravlenie>().health;
		    if (health > 0f)
		    {
		    	health -= initcoopdamage;
		    	target.transform.parent.gameObject.GetComponent<ZombiUpravlenie>().setHealth(health, true);
		    	GlobalGameController.Score += 5;
		    	if (health <= 0f)
		    	{
		    		GlobalGameController.Score += target.GetComponent<Sounds>().scorePerKill;
		    	}
		    	_weaponManager.myTable.GetComponent<NetworkStartTable>().score = GlobalGameController.Score;
		    	_weaponManager.myTable.GetComponent<NetworkStartTable>().synchState();
            }
        }
        else if (target.tag == "BodyCollider")
        {
            bool flag = false;
		    flag = target.transform.parent.gameObject.GetComponent<PhotonView>().isMine;
		    float num = 1f;
		    bool isHeadShot = false;
		    if (flag)
		    {
		    float num2 = initmultidamage;
		    float num3 = num2 - target.transform.parent.gameObject.GetComponent<SkinName>().playerMoveC.curArmor;
		    if (num3 < 0f)
		    {
		    	target.transform.parent.gameObject.GetComponent<SkinName>().playerMoveC.curArmor -= num2;
		    	num3 = 0f;
		    }
		    else
		    {
		    	target.transform.parent.gameObject.GetComponent<SkinName>().playerMoveC.curArmor = 0f;
		    }
            target.transform.parent.gameObject.GetComponent<SkinName>().playerMoveC.CurHealth -= num3;
		    if (target.transform.parent.gameObject.GetComponent<SkinName>().playerMoveC.CurHealth <= 0f)
		    	{
		    		if (!target.transform.parent.gameObject.GetComponent<SkinName>().playerMoveC.isKilled) {
		    		target.transform.parent.gameObject.GetComponent<SkinName>().playerMoveC.sendImDeath(target.transform.parent.gameObject.GetComponent<SkinName>().NickName);
		    		}
		    	}
            }
        }
        posdiff = transform.position - target.transform.position;
        StartCoroutine(Life());
        StartBleed();
    }

    void Update()
    {
        if (target.tag == "ZombieCollider")
        {
            if (target.transform.parent.gameObject.GetComponent<ZombiUpravlenie>().health <= 0f)
            {
                Destroy(Nail);
                Destroy(gameObject);
            }
        }
        else if (target.tag == "BodyCollider")
        {
            if (target.transform.parent.gameObject.GetComponent<SkinName>().playerMoveC.CurHealth <= 0f)
            {
                Destroy(Nail);
                Destroy(gameObject);
            }
        }
        gameObject.transform.position = target.transform.position + posdiff;
        Nail.transform.position = target.transform.position + posdiff;
    }
    
    void StartBleed()
    {
        StartCoroutine(Bleed());
    }
    public IEnumerator Life()
    {
        yield return new WaitForSeconds(lifetime);
        Destroy(gameObject);
    }

    public IEnumerator Bleed()
    {
        yield return new WaitForSeconds(cooldown);
        gameObject.GetComponent<AudioSource>().Play();
        if (target.tag == "ZombieCollider")
        {
            if (!isMulti)
		    	{
		    		BotHealth component = target.transform.parent.gameObject.GetComponent<BotHealth>();
		    		component.adjustHealth(0f - (bleedcoopdamage), Camera.main.transform);
		    	}
		    float health = target.transform.parent.gameObject.GetComponent<ZombiUpravlenie>().health;
		    if (health > 0f)
		    {
		    	health -= bleedcoopdamage;
		    	target.transform.parent.gameObject.GetComponent<ZombiUpravlenie>().setHealth(health, true);
		    	GlobalGameController.Score += 5;
		    	if (health <= 0f)
		    	{
		    		GlobalGameController.Score += target.GetComponent<Sounds>().scorePerKill;
		    	}
		    	_weaponManager.myTable.GetComponent<NetworkStartTable>().score = GlobalGameController.Score;
		    	_weaponManager.myTable.GetComponent<NetworkStartTable>().synchState();
            }
        }
        else if (target.tag == "BodyCollider")
        {
            bool flag = false;
		    flag = target.transform.parent.gameObject.GetComponent<PhotonView>().isMine;
		    float num = 1f;
		    bool isHeadShot = false;
		    if (flag)
		    {
		        float num2 = bleedmultidamage;
		        float num3 = num2 - target.transform.parent.gameObject.GetComponent<SkinName>().playerMoveC.curArmor;
		        if (num3 < 0f)
		        {
		        	target.transform.parent.gameObject.GetComponent<SkinName>().playerMoveC.curArmor -= num2;
		        	num3 = 0f;
		        }
		        else
		        {
		        	target.transform.parent.gameObject.GetComponent<SkinName>().playerMoveC.curArmor = 0f;
		        }
                target.transform.parent.gameObject.GetComponent<SkinName>().playerMoveC.CurHealth -= num3;
		        if (target.transform.parent.gameObject.GetComponent<SkinName>().playerMoveC.CurHealth <= 0f)
		        	{
		        		if (!target.transform.parent.gameObject.GetComponent<SkinName>().playerMoveC.isKilled) {
		        		target.transform.parent.gameObject.GetComponent<SkinName>().playerMoveC.sendImDeath(target.transform.parent.gameObject.GetComponent<SkinName>().NickName);
		        		}
		        	}
            }
        }
        StartBleed();
    }
}
