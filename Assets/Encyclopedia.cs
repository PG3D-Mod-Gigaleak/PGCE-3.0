using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class Encyclopedia : MonoBehaviour
{
	public static List<GameObject> storedEntities = new List<GameObject>();

	private List<string> unlockedEnemies = new List<string>();

	public UIGrid enemyGridList;

	private GameObject enemyButtonTemplate;

	private GameObject lockedEnemyButtonTemplate;

	public Texture lockedTexure;

	public UILabel enemyNameLabel;

	public UILabel descriptionLabel;

	public Transform enemyInstantiationPoint;

	public Transform scrollThing;

	private List<ParticleSystem> fixedSystems = new List<ParticleSystem>();

	void Start()
	{
		enemyButtonTemplate = Resources.Load<GameObject>("EncyclopediaEnemyButton");
		lockedEnemyButtonTemplate = Resources.Load<GameObject>("EncyclopediaLockedEnemyButton");
		foreach (GameObject entity in storedEntities)
		{
			if (entity.transform.GetChild(0).GetComponent<EncyclopediaStats>() != null && entity.transform.GetChild(0).GetComponent<EncyclopediaStats>().ruleOut)
			{
				continue;
			}
			if (PlayerPrefs.GetInt(entity.name) == 1)
			{
				CreateButton(entity.name, false);
				unlockedEnemies.Add(entity.name);
				continue;
			}
			CreateButton(entity.name, true);
		}
		enemyGridList.Reposition();
		FixParticles();
	}

	void Update()
	{
		//placeholder until the scrollbar decides to function at all
		scrollThing.transform.localPosition = new Vector3(scrollThing.transform.localPosition.x, Mathf.Clamp(scrollThing.transform.localPosition.y + mouseScrollThing, -1467f, -590f), scrollThing.transform.localPosition.z);
	}

	public int mouseScrollThing
	{
		get
		{
			return (Input.GetAxis("Mouse ScrollWheel") == 0 ? 0 : Input.GetAxis("Mouse ScrollWheel") < 0 ? 5 : -5);
		}
	}

	public static bool GetEnemyRuledOut(string name)
	{
		if (name.StartsWith("Enemy"))
		{
			return Resources.Load<GameObject>("enemies/" + name + (name.EndsWith("_go") ? "" : "_go")).transform.GetChild(0).GetComponent<EncyclopediaStats>().ruleOut;
		}
		return Resources.Load<GameObject>("bosses/" + name).transform.GetChild(0).GetComponent<EncyclopediaStats>().ruleOut;
	}

	public void FixParticles()
	{
		foreach (ParticleSystem particle in Resources.FindObjectsOfTypeAll<ParticleSystem>())
		{
			if (!particle.gameObject.activeInHierarchy || fixedSystems.Contains(particle))
			{
				continue;
			}
			particle.startSpeed /= 6f;
			particle.startSize /= 10f;
			ParticleSystem.ShapeModule shape = particle.shape;
			shape.radius /= 10f;
			fixedSystems.Add(particle);
		}
	}

	public static void SetTextureRecursivelyFrom(GameObject obj, Texture txt)
	{
		foreach (Transform item in obj.transform)
		{
			if ((bool)item.gameObject.GetComponent<Renderer>() && (bool)item.gameObject.GetComponent<Renderer>().material)
			{
				if (item.gameObject.GetComponent<Renderer>().materials.Length > 1 && item.gameObject.name.Equals("raven_head"))
				{
					Material[] materials = item.gameObject.GetComponent<Renderer>().materials;
					foreach (Material material in materials)
					{
						if (material.name.Equals("raven_eye (Instance)"))
						{
							if (GlobalGameController.currentLevel == 6)
							{
								material.color = new Color(0.32156864f, 0f, 44f / 85f);
							}
						}
						else
						{
							material.mainTexture = txt;
						}
					}
				}
				else
				{
					item.gameObject.GetComponent<Renderer>().material.mainTexture = txt;
				}
			}
			SetTextureRecursivelyFrom(item.gameObject, txt);
		}
	}

	public void Exit()
	{
		LoadConnectScene.loading = null;
		LoadConnectScene.sceneToLoad = Defs.CurrentMainMenuScene;
		Application.LoadLevel("PromScene");
	}

	public GameObject CreateButton(string name, bool locked)
	{
		bool boss = name.StartsWith("Boss");
		if (!boss && Resources.Load<GameObject>("enemies/" + name + "_go") == null || boss && Resources.Load<GameObject>("bosses/" + name) == null)
		{
			return null;
		}
		GameObject newButton = (locked ? Instantiate(lockedEnemyButtonTemplate, enemyGridList.transform)  : Instantiate(enemyButtonTemplate, enemyGridList.transform));
		EncyclopediaStats newEnemy = Instantiate(Resources.Load<GameObject>(boss ? "bosses/" + name : "enemies/" + name + "_go").transform.GetChild(0).gameObject, newButton.transform.Find("EnemyInstantiation")).GetComponent<EncyclopediaStats>();
		newEnemy.transform.localScale = Resources.Load<GameObject>(boss ? "bosses/" + name : "enemies/" + name + "_go").transform.localScale;
		newEnemy.gameObject.layer = 10;
		foreach (Transform trf in newEnemy.gameObject.GetComponentsInChildren<Transform>())
		{
			trf.gameObject.layer = 10;
		}
		newEnemy.GetComponent<Animation>().Play(Defs.CAnim(newEnemy.gameObject, "Norm_Walk"));
		if (locked)
		{
			SetTextureRecursivelyFrom(newEnemy.gameObject, lockedTexure);
		}
		if (!locked)
		{
			newButton.transform.Find("NameLabel").GetComponent<UILabel>().text = newEnemy.enemyName;
			newButton.GetComponent<ButtonHandler>().Clicked += (object sender2, EventArgs args2) =>
			{
				SelectEnemy(name);
			};
		}
		return newButton;
	}

	public AudioClip btnSound;

	public void SelectEnemy(string name)
	{
		bool boss = name.StartsWith("Boss");
		GetComponent<AudioSource>().PlayOneShot(btnSound);
		try
		{
			Destroy(enemyInstantiationPoint.GetChild(0).gameObject);
		}
		catch
		{
			Debug.Log("nothing there LOL!");
		}
		if (Resources.Load<GameObject>(boss ? "bosses/" + name :"enemies/" + name + "_go") == null)
		{
			return;
		}
		EncyclopediaStats newEnemy = Instantiate(Resources.Load<GameObject>(boss ? "bosses/" + name : "enemies/" + name + "_go").transform.GetChild(0).gameObject, enemyInstantiationPoint).GetComponent<EncyclopediaStats>();
		newEnemy.gameObject.layer = 10;
		foreach (Transform trf in newEnemy.gameObject.GetComponentsInChildren<Transform>())
		{
			trf.gameObject.layer = 10;
		}
		newEnemy.GetComponent<Animation>().Play(Defs.CAnim(newEnemy.gameObject, "Norm_Walk"));
		enemyNameLabel.text = newEnemy.enemyName;
		descriptionLabel.text = newEnemy.descriptio;
		FixParticles();
	}
}
