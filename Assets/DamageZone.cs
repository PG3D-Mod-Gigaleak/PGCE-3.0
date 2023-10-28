using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DamageZone : MonoBehaviour
{
    public float coopDamage = 25f, multiplayerDamage = 15f, damageCooldown = 1f;
    private float timer;

    void OnTriggerEnter(Collider other)
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
			    }
                break;

            case "BodyCollider":
            case "HeadCollider":
                Globals.PlayerMove.HitPlayer(other, multiplayerDamage);
                Debug.LogError("DamagePlayer");
                break;
        }

        timer = damageCooldown;
    }

    void Update()
    {
        timer -= Time.deltaTime;
    }
}
