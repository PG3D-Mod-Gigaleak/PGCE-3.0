using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RangedWeapon : AmmoWeapon
{
    public float range;

    public Color bulletColor;

    public int bulletIndex;

    protected override void ShootSuccess()
    {
        Vector3 bulletDir = new Vector3((float)Screen.width * 0.5f - bloom * Defs.Coef * 0.5f + (float)UnityEngine.Random.Range(0, Mathf.RoundToInt(bloom * Defs.Coef)), 
            (float)Screen.height * 0.5f - bloom * Defs.Coef * 0.5f + (float)UnityEngine.Random.Range(0, Mathf.RoundToInt(bloom * Defs.Coef)), 0f);

        Ray ray = Camera.main.ScreenPointToRay(bulletDir);

        if (Defs.isMulti)
        {
            view.RPC("SpawnBullet", PhotonTargets.All, new Vector3(bulletColor.r, bulletColor.g, bulletColor.b), bulletSpawn.position, Quaternion.LookRotation(ray.direction), bulletIndex);
        }
        else
        {
            Instantiate(Resources.Load<GameObject>("Bullets/Bullet_" + bulletIndex), bulletSpawn.position, Quaternion.LookRotation(ray.direction)).GetComponent<Bullet>().UpdateColor(bulletColor);
        }

        if (Physics.Raycast(ray, out RaycastHit hitInfo, range, -2053))
        {
            //redo this awful awful code when you feel like doing so !!

            bool flag;
            if ((hitInfo.collider.gameObject.transform.parent == null && !hitInfo.collider.gameObject.transform.CompareTag("Player")) || (hitInfo.collider.gameObject.transform.parent != null && !hitInfo.collider.gameObject.transform.parent.CompareTag("Enemy") && !hitInfo.collider.gameObject.transform.parent.CompareTag("Player")))
			{
				UnityEngine.Object.Instantiate(Globals.PlayerMove.hole, hitInfo.point + hitInfo.normal * 0.001f, Quaternion.FromToRotation(Vector3.up, hitInfo.normal));
				UnityEngine.Object.Instantiate(Globals.PlayerMove.wallParticle, hitInfo.point + hitInfo.normal * 0.001f, Quaternion.FromToRotation(Vector3.up, hitInfo.normal));
				flag = false;
			}
			else
			{
				UnityEngine.Object.Instantiate(Globals.PlayerMove.bloodParticle, hitInfo.point + hitInfo.normal * 0.001f, Quaternion.FromToRotation(Vector3.up, hitInfo.normal));
				flag = true;
			}
			if (prefs.GetInt("MultyPlayer") == 1)
			{
				view.RPC("HoleRPC", PhotonTargets.Others, flag, hitInfo.point + hitInfo.normal * 0.001f, Quaternion.FromToRotation(Vector3.up, hitInfo.normal));
			}

            if ((bool)hitInfo.collider.gameObject.transform.parent && hitInfo.collider.gameObject.transform.parent.CompareTag("Enemy"))
			{
				if (prefs.GetInt("MultyPlayer") != 1)
				{
					BotHealth component = hitInfo.collider.gameObject.transform.parent.GetComponent<BotHealth>();
					component.adjustHealth((float)(-enemyDamage), Camera.main.transform);
				}
				else if (prefs.GetInt("COOP", 0) == 1)
				{
					float health = hitInfo.collider.gameObject.transform.parent.GetComponent<ZombiUpravlenie>().health;
					if (health > 0f)
					{
						health -= (float)enemyDamage;
						hitInfo.collider.gameObject.transform.parent.GetComponent<ZombiUpravlenie>().setHealth(health, true);
						GlobalGameController.Score += 5;
						if (health <= 0f)
						{
							GlobalGameController.Score += hitInfo.collider.gameObject.GetComponent<Sounds>().scorePerKill;
						}
						WeaponManager.sharedManager.myTable.GetComponent<NetworkStartTable>().score = GlobalGameController.Score;
						WeaponManager.sharedManager.myTable.GetComponent<NetworkStartTable>().synchState();
					}
				}
				Globals.PlayerMove.inGameGUI.Hitmark();
			}
            //we'll open this can of worms later
			//if (prefs.GetInt("MultyPlayer") == 1)
			//{
			//	photonView.RPC("fireFlashPhoton", PhotonTargets.Others, base.gameObject.transform.GetComponent<PhotonView>().viewID, true, hitInfo.distance, Quaternion.LookRotation(Camera.main.transform.TransformDirection(Vector3.forward)), doubleShotIndex, alt);
			//}
			if ((hitInfo.collider.gameObject.CompareTag("BodyCollider") || hitInfo.collider.gameObject.CompareTag("HeadCollider")) && prefs.GetInt("MultyPlayer") == 1 && prefs.GetInt("COOP", 0) != 1 && !hitInfo.collider.transform.parent.gameObject.GetComponent<FirstPersonControl>().playerGameObject.GetComponent<Player_move_c>().isMine)
			{
				Globals.PlayerMove.MinusLivePlayer(hitInfo.collider.transform.parent.gameObject.GetComponent<PhotonView>().viewID, Player_move_c.WeaponIDFromName(name), hitInfo.collider.gameObject.CompareTag("HeadCollider"));
			}
        }
    }

    [PunRPC]
    protected virtual void SpawnBullet(Vector3 color, Vector3 position, Quaternion rotation, int index)
    {
        Instantiate(Resources.Load<GameObject>("Bullets/Bullet_" + index), position, rotation).GetComponent<Bullet>().UpdateColor(new Color(color.x, color.y, color.z, 1f));
    }

    //redo this

    [PunRPC]
	public void HoleRPC(bool _isBloodParticle, Vector3 _pos, Quaternion _rot)
	{
		if (_isBloodParticle)
		{
			UnityEngine.Object.Instantiate(Globals.PlayerMove.bloodParticle, _pos, _rot);
			return;
		}
		UnityEngine.Object.Instantiate(Globals.PlayerMove.hole, _pos, _rot);
		UnityEngine.Object.Instantiate(Globals.PlayerMove.wallParticle, _pos, _rot);
	}
}
