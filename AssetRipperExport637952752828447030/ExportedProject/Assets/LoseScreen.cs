using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LoseScreen : MonoBehaviour
{
	public void Quit()
	{
		LoadConnectScene.loading = null;
		LoadConnectScene.sceneToLoad = "ConnectScene";
		Application.LoadLevel("PromScene");
	}
}
