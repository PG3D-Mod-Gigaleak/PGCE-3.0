using UnityEngine;

public class Bullet : MonoBehaviour
{
	public float speed;

	public float lifetime;

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

	void Start()
	{
		mTrailRenderer = GetComponent<TrailRenderer>();
		mMeshRenderer = GetComponent<MeshRenderer>();
		Invoke("DestroySelf", lifetime);
	}

	void Update()
	{
		transform.position += (transform.forward * speed) * Time.deltaTime;
	}

	void DestroySelf()
	{
		Destroy(gameObject);
	}

	public void UpdateColor(Color newColor)
	{
		GradientColorKey[] colorKeys = trailRenderer.colorGradient.colorKeys;
		for (int i = 0; i < colorKeys.Length; i++)
		{
			colorKeys[i].color = newColor;
		}
		Gradient gradient = trailRenderer.colorGradient;
		gradient.colorKeys = colorKeys;
		trailRenderer.colorGradient = gradient;
		meshRenderer.material.SetColor("_Color", newColor);
	}
}
