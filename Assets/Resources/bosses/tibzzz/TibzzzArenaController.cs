using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TibzzzArenaController : MonoBehaviour
{
    public Vector3 tiobspawnarea;
    public AudioClip wavesMusic;
    public AudioClip ambienceMusic;
    public AudioClip tibzzzphase1;
    public AudioClip tibzzzphase2;
    public AudioClip tibzzzvictory;
    public List<GameObject> enemies = new List<GameObject>();
    public GameObject tibzzz;
    public float phase2numerator;
    public int EnemiesKilled;
    public int EnemyCount;
    public int EnemyNow;
    public bool isController;
    public float tiobspawncooldown;
    public bool isDead;
    public float timer;
    public List<GameObject> specialtiobs = new List<GameObject>();
    public int SpecialCount;
    private GameObject tiob;
    private AudioSource bgm;
    public int OverallCount;
    public int CurrentCount;
    public bool beginboss;
    public UILabel TiobsKilledLabel;
    public string TiobCounter;
    public GameObject TibzzzUIRoot;
    
    void Awake()
    {
        OverallCount = EnemyCount + SpecialCount;
    }
    void Start()
    {
        if (isController)
        {
        timer = tiobspawncooldown;
        TibzzzUIRoot.SetActive(true);
        bgm = GameObject.FindGameObjectWithTag("BGM").GetComponent<AudioSource>();
        StartCoroutine(MusicDelay(bgm));
        CounterUpdate();
        }
    }

    void CounterUpdate()
    {
        TiobCounter = string.Format("{0}/{1}", EnemiesKilled, OverallCount);
        TiobsKilledLabel.text = TiobCounter;
    }

    IEnumerator MusicDelay(AudioSource bgm)
    {
        yield return new WaitForSeconds(0.1f);
        bgm.Stop();
        gameObject.GetComponent<AudioSource>().enabled = true;
        bgm.clip = wavesMusic;
        bgm.Play();
    }

    void Update()
    {
        if (!isController && !isDead)
        {
            if (gameObject.GetComponent<ZombiUpravlenie>().deaded == true)
            {
                isDead = true;
                GameObject.Find("TibzzzArenaController").GetComponent<TibzzzArenaController>().EnemiesKilled += 1;
                gameObject.GetComponent<TibzzzArenaController>().enabled = false;
                GameObject.Find("TibzzzArenaController").GetComponent<TibzzzArenaController>().CounterUpdate();
            }
        }
        if (isController)
        {
        timer -= Time.deltaTime;
        CurrentCount = OverallCount - EnemiesKilled;
        }
        if (EnemiesKilled < OverallCount && timer < 0f)
        {
            timer = tiobspawncooldown;
            int dice1 = Random.Range(1,6);
            if (dice1 != 5 && EnemyCount > 0)
            {
                int tiobindex = Random.Range(0,enemies.Count - 1);
                GameObject newtiob = enemies[tiobindex];
                float newposx = Random.Range(-tiobspawnarea.x,tiobspawnarea.x);
                float newposy = Random.Range(-tiobspawnarea.y,tiobspawnarea.y);
                float newposz = Random.Range(-tiobspawnarea.z,tiobspawnarea.z);
                tiob = PhotonNetwork.Instantiate(LoadEnemy(newtiob), transform.position + new Vector3(newposx,newposy,newposz), Quaternion.identity, 0);
                tiob.AddComponent<TibzzzArenaController>();
                tiob.GetComponent<TibzzzArenaController>().isController = false;
                EnemyCount -= 1;
            }
            else if (SpecialCount > 0)
            {
                int tiobindex = Random.Range(0,enemies.Count - 1);
                GameObject newtiob = enemies[tiobindex];
                float newposx = Random.Range(-tiobspawnarea.x,tiobspawnarea.x);
                float newposy = Random.Range(-tiobspawnarea.y,tiobspawnarea.y);
                float newposz = Random.Range(-tiobspawnarea.z,tiobspawnarea.z);
                int dice2 = Random.Range(0,specialtiobs.Count - 1);
                tiob = PhotonNetwork.Instantiate(LoadEnemy(specialtiobs[dice2]), transform.position + new Vector3(newposx,newposy,newposz), Quaternion.identity, 0);
                tiob.AddComponent<TibzzzArenaController>();
                tiob.GetComponent<TibzzzArenaController>().isController = false;
                SpecialCount -= 1;
            }
        }
        else if ((timer < 0f) && (EnemiesKilled >= OverallCount) && beginboss == false)
        {
            beginboss = true;
            StartCoroutine(tibzzzphase1delay());
        }
    }

    IEnumerator tibzzzphase1delay()
    {
        TibzzzUIRoot.GetComponent<Animation>().Play("CounterDisappear");
        bgm.Stop();
        bgm.clip = ambienceMusic;
        bgm.Play();
        yield return new WaitForSeconds(10f);
        float newposx = Random.Range(-tiobspawnarea.x,tiobspawnarea.x);
        float newposy = Random.Range(-tiobspawnarea.y,tiobspawnarea.y);
        float newposz = Random.Range(-tiobspawnarea.z,tiobspawnarea.z);
        GameObject tibzz = PhotonNetwork.Instantiate(LoadEnemy(tibzzz), transform.position + new Vector3(newposx,newposy,newposz), Quaternion.identity, 0);
        bgm.Stop();
        bgm.clip = tibzzzphase1;
        bgm.Play();
    }
    string LoadEnemy(GameObject tiob)
    {
        string enemy = tiob.name;
        return enemy.StartsWith("Enemy") ? "enemies/" + enemy : "bosses/" + enemy;
    }
}
