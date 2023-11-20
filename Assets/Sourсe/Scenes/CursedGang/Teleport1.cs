using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Teleport1 : MonoBehaviour
{
    public float x;
    public float y;
    public float z;
    public bool currentPos;
    public AudioClip AmbienceMusic;
    public AudioClip BossMusic;
    private AudioSource bgmusic;
    public GameObject BossSpawn;
    public float TimeToSpawn;
    public Vector3 BossPos;

    void Start()
    {
        GameObject gamebgm = GameObject.FindGameObjectWithTag("BGM");
        bgmusic = gamebgm.GetComponent<AudioSource>();
    }
    private void OnTriggerEnter(Collider other) 
    {
        if (other.tag == "Player" && currentPos == true)
        {
        other.transform.position = new Vector3(transform.position.x + x,transform.position.y + y,transform.position.z + z);
        Debug.LogError("Teleported1");
        bgmusic.Stop();
        bgmusic.clip = AmbienceMusic;
        bgmusic.Play();
        StartCoroutine(SpawnBoss());
        }
        if (other.tag == "Player" && currentPos == false)
        {
        other.transform.position = new Vector3(x,y,z);
        Debug.LogError("Teleported2");
        bgmusic.Stop();
        bgmusic.clip = AmbienceMusic;
        bgmusic.Play();
        StartCoroutine(SpawnBoss());
        }
    }
    private IEnumerator SpawnBoss()
    {
        yield return new WaitForSeconds(TimeToSpawn);
        Instantiate(BossSpawn, BossPos, Quaternion.identity);
        bgmusic.Stop();
        bgmusic.clip = BossMusic;
        bgmusic.Play();
    }
}
