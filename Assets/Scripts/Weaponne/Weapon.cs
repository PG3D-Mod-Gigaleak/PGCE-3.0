using UnityEngine;

public class Weapon : MonoBehaviour
{
	public float playerDamage, enemyDamage, movementMultiplier, swapTime;

	public bool fullAuto;

	public Vector3 gunOffset = new Vector3(0f, -1.7f, 0f);

	public CategoryType category;

	public Animation weaponAnimation;

	public GameObject bonusPrefab;

	public AudioClip shootSound, chargeSound, unchargeSound;

	public int burstCount;

	public ExtraShoot[] extraShootAnimations;

	public AltWeapon[] alternateShots;

	public int scopeIndex = -1;

	public float shotDelay;

	protected bool hasSwapIn, idle, hasChargeUp, hasChargeDown, hasScope;

	protected string shootAnimation, idleAnimation;

	protected const string ShootAnimation = "Shoot", IdleAnimation = "Idle", SwapIn = "SwapIn", ChargeUp = "ChargeUp", ChargeDown = "ChargeDown";

	protected PhotonView view;

	protected AudioSource source;

	protected Player_move_c PMC;

	protected bool shooting { get { return weaponAnimation.IsPlaying(shootAnimation); } }

	protected virtual void Awake()
	{
		view = GetComponentInParent<PhotonView>();
		source = GetComponent<AudioSource>();

		PMC = Globals.PlayerMove;

		hasScope = scopeIndex != -1;
		hasSwapIn = weaponAnimation.GetClip(SwapIn) != null;

		hasChargeUp = weaponAnimation.GetClip(ChargeUp) != null;
		hasChargeDown = weaponAnimation.GetClip(ChargeDown) != null;

		shootAnimation = Defs.CAnim(weaponAnimation.gameObject, ShootAnimation);
		idleAnimation = Defs.CAnim(weaponAnimation.gameObject, IdleAnimation);
	}

	protected void PlayAudio(AudioClip clip, float volume = 1f)
	{
		source.PlayOneShot(clip, volume);
	}

	public virtual void GoIdle()
	{
		idle = true;
		weaponAnimation.Play(idleAnimation);
	}

	public virtual string DisplayAmmoCount() { return ""; }

	public virtual void CollectAmmo(int count) {}

	public virtual void Shoot() {}

	public class AltWeapon
	{
		public Weapon weapon;

		public KeyCode altKey;
	}

	public class ExtraShoot
	{
		public string animation;

		public Transform bulletSpawn;
	}
}
