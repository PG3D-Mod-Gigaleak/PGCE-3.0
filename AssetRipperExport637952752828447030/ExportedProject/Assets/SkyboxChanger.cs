using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SkyboxChanger : MonoBehaviour {

public Material[] skyboxes;

public float interval;

private bool isChanging;

private int index;

void Update()
{
	if (index > skyboxes.Length - 2)
	{
		index = 0;
	}
	if (!isChanging)
	{
		StartCoroutine(Change());
	}
}

public IEnumerator Change()
{
	isChanging = true;
	yield return new WaitForSeconds(interval);
	RenderSettings.skybox = skyboxes[index];
	index++;
	isChanging = false;
}
}
