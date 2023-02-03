using UnityEngine;

public class WeaponSounds : MonoBehaviour
{
	[Header("normal stuff")]

	public float swapTime = 1f;

	public bool isSwapIn = false;

	public bool isSwapOut = false;

	public AudioClip shoot;

	public AudioClip reload;

	public AudioClip empty;

	public bool isSerialShooting;

	public GameObject bonusPrefab;

	public int InitialAmmo = 24;

	public int ammoInClip = 12;

	public int maxAmmo = 84;

	public bool isMelee;

	public float range = 3f;

	public int damage = 50;

	public float speedModifier = 1f;

	public GameObject animationObject;

	public int Probability = 1;

	public Vector2 damageRange = new Vector2(-15f, 15f);

	public Vector3 gunPosition = new Vector3(0.35f, -0.25f, 0.6f);

	public Texture preview;

	public int inAppExtensionModifier = 10;

	public float meleeAngle = 45f;

	public float multiplayerDamage = 1f;

	public float meleeAttackTimeModifier = 0.57f;

	[Header("cursed edition stuff")]

	public bool isHeal;

	public float healAmount;

	public bool HealArmor;

	public int maxHealItems;

	public float bloomLow;

	public float bloomHigh;

	public bool isShotgun;

	public int numOfPellets;

	public bool hasAlternateShot;

	public WeaponSounds alternateShot;

	public bool hasRecoil;

	public float recoil;

	public bool hasUpgrades;

	public bool isChargeUp;

	public AudioClip chargeUp;

	public AudioClip chargeDown;

	public bool SpeedBoost;

	public float speedBoostAmount;

	public float speedBoostDuration;

	public bool isDouble;

	public int price;

	public string weaponName;

	public bool oldMeleeSystem;

	[Header("imported stuff")]

	public bool railgun;

	public bool flamethrower;

	public bool bazooka;

	public int rocketNum;

	public float bazookaExplosionRadius = 5f;

	public float bazookaExplosionRadiusSelf = 2.5f;

	public float bazookaImpulseRadius = 6f;

	public float bazookaSpeed = 2f;

	public bool grenadeLauncher;

	public int MaxAmmoWithRespectToInApp
	{
		get
		{
			return maxAmmo;
		}
	}
}
