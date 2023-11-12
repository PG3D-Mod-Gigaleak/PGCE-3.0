using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class AphexTwinMenu : MonoBehaviour
{
	public PlayerAnimationController playerAnim;

	public Material theCrazy, lastMat;

	public GameObject rotationage;

	public Camera cam;
	public UILabel amazingLabel;
	public UILabel warp;
	public DecibelMeasurer theDecibels;
	public Material f1, f2; // FUCK YOU
	public Light light;
	public float UVMovementInfluence = 0.0125f;
	public float UVMovementInfluenceMultiplier = 0.35f;
	public bool swapped = false;
	private Vector2 OriginalF1Scale;
	private Vector2 OriginalF2Scale;
	/*public Transform[] y;
	public Dictionary<Transform, Vector3> op;
	public Transform q { 
		get 
		{ 
			
			return y[Random.Range(0, y.Length)]; 
		} 
	}*/

	private void Start()
	{
		/*op = new Dictionary<Transform, Vector3>();
		List<Transform> x = Resources.FindObjectsOfTypeAll<Transform>().ToList();
		List<Transform> c = new List<Transform>();
		foreach (Transform t in x)
		{
			c.Add(t);
		}
		foreach (Transform t in x) 
		{ 
			if (!t.gameObject.activeInHierarchy) 
				c.Remove(t); 
		} 
		y = c.ToArray();
		foreach (Transform t in y) 
		{ 
			op.Add(t, t.position);
		}*/
        lastMat = playerAnim.skinModel.sharedMaterial;
		Invoke("Beginnage", 11.9f);
        Invoke("UnBeginnage", 68.3f);
        Invoke("Beginnage", 79.5f);
		amazingLabel.gameObject.SetActive(true);
		OriginalF1Scale = f1.GetTextureScale("_MainTex");
		OriginalF2Scale = f2.GetTextureScale("_MainTex");
	}

	public void OnApplicationQuit()
	{
		amazingLabel.gameObject.SetActive(false);
		//foreach (KeyValuePair<Transform, Vector3> t in op) { t.Key.position = t.Value; }
	}

	private void Update()
	{
		cam.fieldOfView = Mathf.Lerp(cam.fieldOfView, 70f - (theDecibels.decibels * 100f), Time.deltaTime * 20f);
		UVMovementInfluence = Mathf.Lerp(UVMovementInfluence, (theDecibels.decibels * UVMovementInfluenceMultiplier), Time.deltaTime * 5f);
		if (Random.Range(0f, 10f) > 5f)
			swapped = !swapped;
		f1.SetTextureOffset("_MainTex", f1.GetTextureOffset("_MainTex") + (new Vector2(1, 1) * UVMovementInfluence) * (swapped ? -1 : 1));
		f2.SetTextureOffset("_MainTex", f1.GetTextureOffset("_MainTex") - (new Vector2(1, 1) * UVMovementInfluence) * (swapped ? -1 : 1));
		float UVScaleInfluence = UVMovementInfluence * 0.2f;
		light.intensity = UVMovementInfluence * 600f;
		f1.SetTextureScale("_MainTex", OriginalF1Scale + (Vector2.one * UVScaleInfluence) * (Random.Range(0f, 10f) > 5f ? -1 : 1));
		f2.SetTextureScale("_MainTex", OriginalF2Scale - (Vector2.one * UVScaleInfluence) * (Random.Range(0f, 10f) > 5f ? -1 : 1));
		light.color = new Color32((byte)Random.Range(0, 256), (byte)Random.Range(0, 256), (byte)Random.Range(0, 256), 255);
		amazingLabel.alpha = (100 * UVMovementInfluence) / 25;
		string thing = swapped ? "YES" : "NO";
		int x = (int)System.Math.Round(Input.mousePosition.x);
		warp.text = $"SWAPPED: {thing}\nDB PEAK: {theDecibels.decibels*1024}f\nMOUSE X: {x}\nMOUSE Y: {Input.mousePosition.y}\n\nYOU ARE WITNESSING:\nMENU_APHEXTWIN.UNITY";
		/*if ((int)Random.Range(0, 125) == 0)
			q.position += new Vector3(Random.Range(-5f, 5f), Random.Range(-5f, 5f), Random.Range(-5f, 5f));*/
	}

	private bool begun = false;

	private void Beginnage()
	{
		begun = true;
		playerAnim.skinModel.sharedMaterial = theCrazy;

		foreach (ZeichenKraftwerk.Rotator rotator in rotationage.GetComponentsInChildren<ZeichenKraftwerk.Rotator>())
		{
			rotator.enabled = true;
		}
	}

    private void UnBeginnage()
	{
		begun = false;
		playerAnim.skinModel.sharedMaterial = lastMat;

		foreach (ZeichenKraftwerk.Rotator rotator in rotationage.GetComponentsInChildren<ZeichenKraftwerk.Rotator>())
		{
			rotator.enabled = false;
		}

        rotationage.GetComponent<ZeichenKraftwerk.Rotator>().enabled = true;
	}
}
