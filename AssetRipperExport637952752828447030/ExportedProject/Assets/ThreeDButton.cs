using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ThreeDButton : MonoBehaviour
{
	[SerializeField]
	public Material pressedMat;

	[SerializeField]
	public AudioClip pressSound;

	private Material originalMaterial;

	private bool shouldChangeMat;

	public bool repeatButton;

	public string ObjectToSendMessageTo;

	public void OnClicked()
	{
		StartCoroutine(click());
	}

	IEnumerator click()
	{
		GameObject.Find("AudioPlayer").GetComponent<AudioSource>().PlayOneShot(pressSound);
		Material mat = GetComponent<MeshRenderer>().material;
		GetComponent<MeshRenderer>().material = pressedMat;
		while (Input.GetMouseButton(0))
		{
			yield return new WaitForEndOfFrame();
			if (repeatButton)
			{
				GameObject.Find(ObjectToSendMessageTo).SendMessage("ButtonPress", this.name);
			}
		}
		if (!repeatButton)
		{
			shouldChangeMat = true;
		}
		GameObject.Find(ObjectToSendMessageTo).SendMessage("ButtonPress", this.name);
	}

	void Start()
	{
		originalMaterial = GetComponent<MeshRenderer>().material;
	}

	void Update()
	{
		if (shouldChangeMat)
		{
			GetComponent<MeshRenderer>().material = originalMaterial;
			shouldChangeMat = false;
		}
	}
}
