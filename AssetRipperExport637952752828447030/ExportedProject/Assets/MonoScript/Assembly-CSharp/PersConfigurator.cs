using System.Collections.Generic;
using UnityEngine;

public class PersConfigurator : MonoBehaviour
{
	public GameObject body;

	public GameObject gun;

	private GameObject weapon;

	public string myCAnim(string a){
        return Defs.CAnim(weapon.GetComponent<WeaponSounds>().animationObject, a);
    }

	private void Start()
	{
		PlayerPrefs.SetInt("MultyPlayer", 1);
		WeaponManager component = GameObject.FindGameObjectWithTag("WeaponManager").GetComponent<WeaponManager>();
		component.Reset();
		int num = 0;
		GameObject original = null;
		List<UnityEngine.Object> list = new List<UnityEngine.Object>();
		for (int i = 0; i < Defs.numOfWeapons; i++)
		{
			int i2 = i + 1;
			Object obj = Resources.Load("Weapons/Weapon" + i2);
			list.Add(obj);
		}
		Object obj2 = Resources.Load("Weapons/Weapon" + Defs.numOfWeapons);
		list.Add(obj2);
		//List<Weapon> list = new List<Weapon>();
		//foreach (Weapon playerWeapon in component.playerWeapons)
		//{
		//	if (WeaponManager.tagToStoreIDMapping.ContainsKey(playerWeapon.weaponPrefab.tag))
		//	{
		//		list.Add(playerWeapon);
		//	}
		//}
		//if (list.Count == 0)
		//{
		//	foreach (Weapon playerWeapon2 in component.playerWeapons)
		//	{
		//		if (playerWeapon2.weaponPrefab.tag.Equals(WeaponManager._initialWeaponName))
		//		{
		//			original = playerWeapon2.weaponPrefab;
		//			break;
		//		}
		//	}
		//}
		//else
		//{
			original = list[Random.Range(0, list.Count)] as GameObject;
		//}
		GameObject gameObject = Object.Instantiate(original) as GameObject;
		gameObject.transform.parent = body.transform;
		weapon = gameObject;
		weapon.transform.localPosition = Vector3.zero;
		weapon.transform.localRotation = Quaternion.identity;
		weapon.GetComponent<WeaponSounds>().animationObject.GetComponent<Animation>().Play(myCAnim("Profile"));
		gun = gameObject.GetComponent<WeaponSounds>().bonusPrefab;
		Texture texture = SkinsManager.currentMultiplayerSkin();
		texture.filterMode = FilterMode.Point;
		Player_move_c.SetTextureRecursivelyFrom(base.gameObject, texture, new GameObject[1] { gun });
	}

	private void Update()
	{
		Ray ray = Camera.main.ScreenPointToRay(new Vector3(Screen.width / 2, Screen.height / 2, 0f));
		Touch[] touches = Input.touches;
		foreach (Touch touch in touches)
		{
			RaycastHit hitInfo;
			if (touch.phase == TouchPhase.Began && Physics.Raycast(ray, out hitInfo, 1000f, -5) && hitInfo.collider.gameObject.name.Equals("MainMenu_Pers"))
			{
				PlayerPrefs.SetInt(Defs.ProfileEnteredFromMenu, 1);
				ConnectGUI.GoToProfile();
				break;
			}
		}
	}
}
