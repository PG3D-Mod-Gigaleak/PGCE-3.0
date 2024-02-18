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
    public int EnemiesSpawned;
    public bool isController;
    public float tiobspawncooldown;
    public bool isDead;
    public float timer;
    void Start()
    {
        if (isController)
        {
        AudioSource bgm = GameObject.FindGameObjectWithTag("BGM").GetComponent<AudioSource>();
        StartCoroutine(MusicDelay(bgm));
        }
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
        if (isController)
        {
        timer -= Time.deltaTime;
        }
        if (!isController && !isDead)
        {
            if (gameObject.GetComponent<ZombiUpravlenie>().deaded == true)
            {
                isDead = true;
                GameObject.Find("TibzzzArenaControler").GetComponent<TibzzzArenaController>().EnemiesKilled += 1;
                gameObject.GetComponent<TibzzzArenaController>().enabled = false;
            }
        }
        else if (isController && (timer < 0f) && (EnemiesKilled < EnemyCount) && (EnemiesSpawned < EnemyCount) && enemies.Count > 0)
        {
            timer = tiobspawncooldown;
            int tiobindex = Random.Range(0,enemies.Count - 1);
            GameObject newtiob = enemies[tiobindex];
            float newposx = Random.Range(-tiobspawnarea.x,tiobspawnarea.x);
            float newposy = Random.Range(-tiobspawnarea.y,tiobspawnarea.y);
            float newposz = Random.Range(-tiobspawnarea.z,tiobspawnarea.z);
            GameObject tiob = PhotonNetwork.Instantiate(LoadEnemy(tiobindex), transform.position + new Vector3(newposx,newposy,newposz), Quaternion.identity, 0);
            tiob.AddComponent<TibzzzArenaController>();
            tiob.GetComponent<TibzzzArenaController>().isController = false;
            EnemiesSpawned += 1;
        }
    }

    string LoadEnemy(int tiobindex)
    {
        string enemy = enemies[tiobindex].name;
        return enemy.StartsWith("Enemy") ? "enemies/" + enemy : "bosses/" + enemy;
    }

    string LoadEnemy(GameObject tibzzz)
    {
        string tibzzzname = tibzzz.name;
        return "bosses/" + tibzzzname;
    }
}
