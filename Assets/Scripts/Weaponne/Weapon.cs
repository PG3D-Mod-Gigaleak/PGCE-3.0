using UnityEngine;

public class Weapon : MonoBehaviour
{
	public float playerDamage, enemyDamage, movementMultiplier, swapTime;

	public bool fullAuto;

	public Vector3 gunOffset = new Vector3(0f, -1.7f, 0f);

	public CategoryType category;

	public Animation weaponAnimation;

	public GameObject bonusPrefab;

	public AudioClip shootSound;

	public Transform bulletSpawn;

	protected bool hasSwapIn, idle;

	protected string shootAnimation, idleAnimation;

	protected const string ShootAnimation = "Shoot", IdleAnimation = "Idle";

	protected PhotonView view;

	protected AudioSource source;

	protected bool shooting { get { return weaponAnimation.IsPlaying(shootAnimation); } }

	protected virtual void Awake()
	{
		view = GetComponentInParent<PhotonView>();
		hasSwapIn = weaponAnimation.GetClip("SwapIn") != null;

		shootAnimation = Defs.CAnim(weaponAnimation.gameObject, ShootAnimation);
		idleAnimation = Defs.CAnim(weaponAnimation.gameObject, IdleAnimation);

		source = GetComponent<AudioSource>();
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

	public virtual void Shoot() {}

	public virtual string DisplayAmmoCount() { return ""; }
}
