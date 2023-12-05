using Beebyte.Obfuscator;
using UnityEngine;

public class Bullet : MonoBehaviour
{
	public float speed;

	public float lifetime;

	public bool changeColor, destroySelfOnImpact = true, destroyEffect;

	public GameObject effect;

	private TrailRenderer mTrailRenderer;

	private MeshRenderer mMeshRenderer;

	private MeshRenderer meshRenderer
	{
		get
		{
			if (mMeshRenderer == null)
			{
				mMeshRenderer = GetComponent<MeshRenderer>();
			}
			return mMeshRenderer;
		}
	}

	private TrailRenderer trailRenderer
	{
		get
		{
			if (mTrailRenderer == null)
			{
				mTrailRenderer = GetComponent<TrailRenderer>();
			}
			return mTrailRenderer;
		}
	}

	public Light pointLight;

	void Start()
	{
		if (changeColor)
		{
			mTrailRenderer = GetComponent<TrailRenderer>();
			mMeshRenderer = GetComponent<MeshRenderer>();
		}
		if (lifetime != -1f)
		{
			Invoke(nameof(DestroySelf), lifetime);
		}
	}

	void Update()
	{
		transform.position += transform.forward * (Time.deltaTime * speed);
	}

	void DestroySelf()
	{
		if (destroyEffect)
		{
			Instantiate(effect, transform.position, transform.rotation);
		}
		Destroy(gameObject);
	}

	void OnTriggerEnter(Collider other)
	{
		// if (gameObject.tag == "MarksmanBullet" && ( other.tag == "PlayerCoin" || other.tag == "EnemyCoin" ))
		// {
		// 	return;
		// }
		DestroySelf();
	}

	public void UpdateColor(Color newColor)
	{
		if (!changeColor)
		{
			return;
		}
		GradientColorKey[] colorKeys = trailRenderer.colorGradient.colorKeys;
		for (int i = 0; i < colorKeys.Length; i++)
		{
			colorKeys[i].color = newColor;
		}
		Gradient gradient = trailRenderer.colorGradient;
		gradient.colorKeys = colorKeys;
		trailRenderer.colorGradient = gradient;
		meshRenderer.material.SetColor("_Color", newColor);
		pointLight.color = newColor;
	}
}
