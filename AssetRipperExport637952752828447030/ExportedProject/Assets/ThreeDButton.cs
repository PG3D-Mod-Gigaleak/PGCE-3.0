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
		GameObject.Find("3DUI").GetComponent<AudioSource>().PlayOneShot(pressSound);
		Material mat = GetComponent<MeshRenderer>().material;
		GetComponent<MeshRenderer>().material = pressedMat;
		while (Input.GetMouseButton(0))
		{
			yield return new WaitForEndOfFrame();
			if (repeatButton)
			{
				try
				{
					GameObject.Find(ObjectToSendMessageTo).SendMessage("ButtonPress", this.name);
				}
				catch
				{
					Debug.LogError(ObjectToSendMessageTo + " could not receive " + this.name + ". please make sure your objecttosendmessageto isn't a child of any other gameobjects and has any sort of method by THIS gameobject's name");
				}
			}
		}
		if (!repeatButton)
		{
			shouldChangeMat = true;
		}
		try
		{
			GameObject.Find(ObjectToSendMessageTo).SendMessage("ButtonPress", this.name);
		}
		catch
		{
			Debug.LogError(ObjectToSendMessageTo + " could not receive " + this.name + ". please make sure your objecttosendmessageto isn't a child of any other gameobjects and has any sort of method by THIS gameobject's name");
		}
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
