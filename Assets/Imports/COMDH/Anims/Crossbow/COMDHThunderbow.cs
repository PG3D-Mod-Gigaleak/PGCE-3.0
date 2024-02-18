using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class COMDHThunderbow : MonoBehaviour
{
    public GameObject Bullet;
    public float velocity;
    public GameObject host;
    public GameObject player;
    public GameObject spawner;
    public float multiplayerDamage;
    public float coopDamage;
    public float cooldown;
    public float stuntime;
    public GameObject stuneffect;
    public bool isBullet;
    public bool isStunEffect;
    public GameObject target;
    private PhotonView photonView;
	private bool isMulti;
	private bool isInet;
	private bool isMine;
	private bool isCompany;
	private bool isCOOP;
	public WeaponManager _weaponManager;
	private bool isKilled;
	private int amount;
    private float nomove;
    private float move;
    private AnimationState previousanim;
	private void Awake()
	{
		isMulti = prefs.GetInt("MultyPlayer") == 1;
		isInet = true;//prefs.GetString("TypeConnect").Equals("inet");
		isCompany = false;//prefs.GetInt("company", 0) == 1;
		isCOOP = prefs.GetInt("COOP") == 1;
	}

    public void Start()
    {
        if (!isBullet && !isStunEffect)
        {
        player = host.transform.parent.parent.parent.gameObject;
        }
        else if (isStunEffect)
        {
            _weaponManager = GameObject.FindGameObjectWithTag("WeaponManager").GetComponent<WeaponManager>();
            Globals.PlayerMove.inGameGUI.Hitmark(); 
            if (target.transform.parent.tag == "Player")
            {
                bool flag = false;
		        flag = target.transform.parent.gameObject.GetComponent<PhotonView>().isMine;
		        float num = 1f;
		        bool isHeadShot = false;
		        if (flag)
		        {
		            float num2 = multiplayerDamage;
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
            else if (target.transform.parent.tag == "Enemy")
            {
                if (!isMulti)
		    	{
		    		BotHealth component = target.transform.parent.gameObject.GetComponent<BotHealth>();
		    		component.adjustHealth(0f - coopDamage, Camera.main.transform);
		    	}
		        float health = target.transform.parent.gameObject.GetComponent<ZombiUpravlenie>().health;
		        if (health > 0f)
		        {
		        	health -= coopDamage;
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
            StartCoroutine(Stun());
        }
    }

    IEnumerator Stun()
    {
        if (target.tag == "BodyCollider")
        {

        }
        if (target.tag == "ZombieCollider")
        {
            if (!(target.transform.parent.GetComponent<ZombiUpravlenie>().health <= 0f))
            {
                nomove = target.GetComponent<Sounds>().notAttackingSpeed;
                target.GetComponent<Sounds>().notAttackingSpeed = 0f;
                move = target.GetComponent<Sounds>().attackingSpeed;
                target.GetComponent<Sounds>().attackingSpeed = 0f;
                foreach (AnimationState state in target.GetComponent<Animation>())
                {
                    if (target.GetComponent<Animation>().IsPlaying(state.name))
                    {
                        previousanim = state;
                        state.speed = 0f;
                    }
                }
            }
        }
        yield return new WaitForSeconds(stuntime);
        if (target.tag == "BodyCollider")
        {

        }
        if (target.tag == "ZombieCollider")
        {
            if (!(target.transform.parent.GetComponent<ZombiUpravlenie>().health <= 0f))
            {
            target.GetComponent<Sounds>().notAttackingSpeed = nomove;
            target.GetComponent<Sounds>().attackingSpeed = move;
            target.GetComponent<Animation>().enabled = true;
            previousanim.speed = 1f;
            }
        }
        yield return new WaitForSeconds(2f);
        Destroy(gameObject);
    }

    public void Shoot()
    {
        GameObject bullet = PhotonNetwork.Instantiate(LoadObject(Bullet), spawner.transform.position, host.transform.rotation,0);
        bullet.GetComponent<Rigidbody>().velocity = new Vector3(0f,0f,0f);
        bullet.GetComponent<Rigidbody>().AddForce(host.transform.forward * velocity);
        bullet.GetComponent<COMDHThunderbow>().multiplayerDamage = multiplayerDamage;
        bullet.GetComponent<COMDHThunderbow>().coopDamage = coopDamage;
        bullet.GetComponent<COMDHThunderbow>().cooldown = cooldown;
        bullet.GetComponent<COMDHThunderbow>().stuntime = stuntime;
        bullet.GetComponent<COMDHThunderbow>().player = player;
        bullet.GetComponent<COMDHThunderbow>().stuneffect = stuneffect;
        bullet.GetComponent<COMDHThunderbow>().isBullet = true;
    }

    void OnTriggerEnter(Collider other)
    {
        if (isBullet)
        {
            if (other.tag == "BodyCollider" && other.transform.parent.gameObject == player)
            {
                return;
            }
            if (other.tag == "ZombieCollider")
            {
                if (!(other.transform.parent.GetComponent<ZombiUpravlenie>().health <= 0f))
                {
                    GameObject effect = PhotonNetwork.Instantiate(LoadObject(stuneffect), gameObject.transform.position + new Vector3(0f,0.5f,0f), Quaternion.identity,0);
                    effect.GetComponent<COMDHThunderbow>().isStunEffect = true;
                    effect.transform.parent = other.transform.parent;
                    effect.GetComponent<COMDHThunderbow>().multiplayerDamage = multiplayerDamage;
                    effect.GetComponent<COMDHThunderbow>().coopDamage = coopDamage;
                    effect.GetComponent<COMDHThunderbow>().cooldown = cooldown;
                    effect.GetComponent<COMDHThunderbow>().stuntime = stuntime;
                    effect.GetComponent<COMDHThunderbow>().player = player;
                    effect.GetComponent<COMDHThunderbow>().stuneffect = stuneffect;
                    effect.GetComponent<COMDHThunderbow>().target = other.gameObject;
                    Destroy(gameObject);  
                }
            }
            if (other.tag == "BodyCollider")
            {
                if (!(other.transform.parent.GetComponent<SkinName>().playerMoveC.CurHealth <= 0f))
                {
                    GameObject effect = PhotonNetwork.Instantiate(LoadObject(stuneffect), gameObject.transform.position + new Vector3(0f,0.5f,0f), Quaternion.identity,0);
                    effect.GetComponent<COMDHThunderbow>().isStunEffect = true;
                    effect.transform.parent = other.transform.parent;
                    effect.GetComponent<COMDHThunderbow>().multiplayerDamage = multiplayerDamage;
                    effect.GetComponent<COMDHThunderbow>().coopDamage = coopDamage;
                    effect.GetComponent<COMDHThunderbow>().cooldown = cooldown;
                    effect.GetComponent<COMDHThunderbow>().stuntime = stuntime;
                    effect.GetComponent<COMDHThunderbow>().player = player;
                    effect.GetComponent<COMDHThunderbow>().stuneffect = stuneffect;
                    effect.GetComponent<COMDHThunderbow>().target = other.gameObject;
                    Destroy(gameObject);
                }
            }
            else if (other.gameObject.tag == "Untagged")
            {
                Destroy(gameObject);
            }
        }
    }

    string LoadObject(GameObject Object)
    {
        GameObject Prefab = Object;
        Prefab.TryGetComponent<PhotonView>(out PhotonView _pv);
        if (!_pv)
        {
            Prefab.AddComponent<PhotonView>();
        }
        string ObjectName = Object.name;
        return ObjectName.StartsWith("Enemy") ? "Instantiatables/enemyobjects/" + ObjectName : "Instantiatables/playerobjects/" + ObjectName;
    }
}