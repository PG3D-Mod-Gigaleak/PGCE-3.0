using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;

public class CursedArena : MonoBehaviour
{
    public Color Phase1Color;
    public Color Phase2Color;
    public Color Phase3Color;
    public AudioClip Phase1Music;
    public AudioClip Phase2Music;
    public AudioClip Phase3Music;
    public Color fogColor;
    public Material Skybox1;
    public Material Skybox2;
    public Material Skybox3;
    public List<GameObject> ListOfEnemies;
    private bool PlayerInitiate = false;
    private int Phase1Index = 0;
    private int Phase2Index = 2;
    private int Phase3Index = 3;
    private AudioSource bgmusic;
    // Update is called once per frame

    void Start()
    {
        bgmusic = GameObject.FindGameObjectWithTag("BGM").GetComponent<AudioSource>();
        Phase2Index = ListOfEnemies.Count * 1/3;
        Phase3Index = ListOfEnemies.Count * 2/3;
    }
    void Update()
    {
        if (GameObject.Find("Player(Clone)") && PlayerInitiate == false)
        {
            PlayerInitiate = true;
            BossRush(0);
        }
    }

    void BossRush(int EnemyIndex)
    {
        if (EnemyIndex == Phase1Index)
        {
            bgmusic.Stop();
            bgmusic.clip = Phase1Music;
            bgmusic.volume = 1f;
            bgmusic.Play();
            RenderSettings.skybox = Skybox1;
            RenderSettings.ambientLight = Color.Lerp(RenderSettings.ambientLight, Phase1Color, 1f);
            RenderSettings.fogColor = Color.Lerp(RenderSettings.fogColor,Phase1Color,1f);
        }
        else if (EnemyIndex == Phase2Index)
        {
            bgmusic.Stop();
            bgmusic.clip = Phase2Music;
            bgmusic.volume = 1f;
            bgmusic.Play();
            RenderSettings.skybox = Skybox2;
            // RenderSettings.skybox.color = Phase2Color;
            RenderSettings.ambientLight = Color.Lerp(RenderSettings.ambientLight, Phase2Color, 1f);
            RenderSettings.fogColor = Color.Lerp(RenderSettings.fogColor,Phase2Color,1f);
        }
        else if (EnemyIndex == Phase3Index)
        {
            bgmusic.Stop();
            bgmusic.clip = Phase3Music;
            bgmusic.volume = 1f;
            bgmusic.Play();
            RenderSettings.skybox = Skybox3;
            // RenderSettings.skybox.color = Phase3Color;
            RenderSettings.ambientLight = Color.Lerp(RenderSettings.ambientLight, Phase3Color, 1f);
            RenderSettings.fogColor = Color.Lerp(RenderSettings.fogColor,Phase3Color,1f);
        }
        GameObject CurrentEnemy = Instantiate(ListOfEnemies[EnemyIndex], new Vector3(Random.Range(-10,10),transform.position.y,Random.Range(-10,10)), Quaternion.identity);
        if (CurrentEnemy.TryGetComponent<ZombiUpravlenie>(out ZombiUpravlenie health) == false)
        {
            Destroy(CurrentEnemy);
            BossRush(EnemyIndex + 1);
        }
        if (CurrentEnemy.transform.GetChild(0).GetComponent<Sounds>().health > 100000000000f)
        {
            CurrentEnemy.transform.GetChild(0).GetComponent<Sounds>().health = 10000f;
            CurrentEnemy.GetComponent<ZombiUpravlenie>().health = 10000f;
        }


//        CurrentEnemy.GetComponent<SpawnMonster>().enabled = false;
//        CurrentEnemy.GetComponent<BotTrigger>().enabled = false;
//        CurrentEnemy.GetComponent<BotMovement>().enabled = false;
//        CurrentEnemy.GetComponent<BotAI>().enabled = false;
        CheckHealth(EnemyIndex, CurrentEnemy);
    }

    void CheckHealth(int EnemyIndex, GameObject CurrentEnemy)
    {
        if (CurrentEnemy.GetComponent<ZombiUpravlenie>().health <= 0f)
        {
            BossRush(EnemyIndex + 1);
        }
        else if (CurrentEnemy.GetComponent<ZombiUpravlenie>().health > 0f)
        {
            StartCoroutine(DelayCheck(EnemyIndex, CurrentEnemy));
        }
    }

    private IEnumerator DelayCheck(int EnemyIndex, GameObject CurrentEnemy)
    {
        yield return new WaitForSeconds(0.1f);
        CheckHealth(EnemyIndex,CurrentEnemy);
    }
}
