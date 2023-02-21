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
			LoadConnectScene.sceneToLoad = Defs.CurrentMainMenuScene;
			Application.LoadLevel("PromScene");
		}
	}

	[HideInInspector] public string enemyDiedTo = "Enemy1_go";

	private string enemyFullName
	{
		get
		{
			if (enemyDiedTo.StartsWith("Enemy"))
			{
				return "enemies/" + enemyDiedTo.Replace("(Clone)", "");
			}
			return "bosses/" + enemyDiedTo.Replace("(Clone)", "");
		}
	}

	private string enemyShortName
	{
		get
		{
			if (enemyDiedTo.StartsWith("Enemy"))
			{
				return enemyDiedTo.Replace("_go", "").Replace("(Clone)", "");
			}
			return enemyDiedTo.Replace("(Clone)", "");
		}
	}

	public Transform enemyInstanPoint;

	private void Start()
	{
		Screen.lockCursor = false;
		Cursor.lockState = CursorLockMode.None;
		Cursor.visible = true;
		Debug.LogError(enemyFullName);
		GameObject obj = Instantiate(GetBaseEnemy(Resources.Load<GameObject>(enemyFullName)), enemyInstanPoint);
		obj.layer = 10;
		foreach (Transform trf in obj.GetComponentsInChildren<Transform>())
		{
			trf.gameObject.layer = 10;
		}
		obj.GetComponent<Animation>().Play(Defs.CAnim(obj, "Norm_Walk"));
		ZombiUpravlenie.SetTextureRecursivelyFrom(obj, Resources.Load<Texture>(Defs.GetThisCoopPath(Application.loadedLevelName) + enemyShortName));
	}
	
	public GameObject GetBaseEnemy(GameObject enemy)
	{
		GameObject child = enemy.transform.GetChild(0).gameObject;
		return child;
	}
}
