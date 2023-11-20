using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OreSpawner : MonoBehaviour
{
    public Mineable[] ores;

    public Vector2 cooldownRandom;

    private int currentOres;

    public float AstralChance;

    public Color AstralColor;

    public float newDensity;

    public AudioClip AstralMusic;

    private AudioSource bgm;

    public Material AstralSkybox;

    public GameObject AstralOre;

    public bool isAstral = false;

    public float GetRandX(Mineable ore)
    {
        //return UnityEngine.Random.Range(0, 2) == 1 ? UnityEngine.Random.Range(ore.boundsX.x, ore.boundsX.y) : -UnityEngine.Random.Range(ore.boundsX.x, ore.boundsX.y);
        return UnityEngine.Random.Range(-1000, 1000);
    }

    public float GetRandY(Mineable ore)
    {
        //return UnityEngine.Random.Range(0, 2) == 1 ? UnityEngine.Random.Range(ore.boundsY.x, ore.boundsY.y) : -UnityEngine.Random.Range(ore.boundsY.x, ore.boundsY.y);
        return UnityEngine.Random.Range(-1000, 1000);
    }

    void Start()
    {
        bgm = GameObject.Find("BGM").GetComponent<AudioSource>();
        AstralChance *= 1000;
    }
    void Update()
    {
        currentOres = 0;
        float Roll = Random.Range(1f,1000000f);
        if (Roll < AstralChance)
		{
            if (isAstral == false)
            {
                GameObject[] array2 = GameObject.FindGameObjectsWithTag("Ore");
                foreach (GameObject gameObject in array2)
                {
                    Destroy(gameObject);
                }
                GameObject.Find("Plane").GetComponent<Animation>().Play("ToAstral");
                bgm.gameObject.GetComponent<MusicController>().enabled = !bgm.gameObject.GetComponent<MusicController>().enabled;
                bgm.Stop();
                bgm.clip = AstralMusic;
                bgm.volume = 1f;
                bgm.Play();
                RenderSettings.skybox = AstralSkybox;
	            RenderSettings.ambientLight = AstralColor;
                RenderSettings.fogColor = AstralColor;
                RenderSettings.fogDensity = newDensity;
                isAstral = true;
            }
        }
        GameObject[] array = GameObject.FindGameObjectsWithTag("Ore");
        foreach (GameObject gameObject in array)
        {
            currentOres += 1;
        }
        if (currentOres >= 2000)
        {
            return;
        }
        float rand = UnityEngine.Random.Range(0f, 100.01f);
        if (isAstral == false)
        {
            foreach (Mineable anOre in ores)
            {
                if (rand <= anOre.randomRange.y && rand >= anOre.randomRange.x)
                {
                    Instantiate(anOre.gameObject, new Vector3(GetRandX(anOre), -4f, GetRandY(anOre)), Quaternion.identity);
                    break;
                }
                else if (rand > 93.55)
                {
                    Instantiate(ores[0].gameObject, new Vector3(GetRandX(ores[0]), -4f, GetRandY(ores[0])), Quaternion.identity);
                    break;
                }
            }
        }
        else if (isAstral == true)
        {
            float randx = Random.Range(-1000f, 1000f);
            float randz = Random.Range(-1000f, 1000f);
            Instantiate(AstralOre, new Vector3(randx, -4f, randz), Quaternion.identity);
        }
    }
}
