using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LoseScreen : MonoBehaviour
{
	public void Quit()
	{
		GameObject.FindGameObjectWithTag("GameController").GetComponent<Initializer>().isCancelReConnect = true;
		if (PhotonNetwork.connected)
		{
			ConnectGUI.Local();
		}
		else
		{
			LoadConnectScene.loading = null;
			LoadConnectScene.sceneToLoad = "ConnectScene";
			Application.LoadLevel("PromScene");
		}
	}
}
