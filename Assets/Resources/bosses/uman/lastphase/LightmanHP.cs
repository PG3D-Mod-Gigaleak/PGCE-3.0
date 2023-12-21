using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LightmanHP : MonoBehaviour
{
    public AudioSource bgmusic;
    public AudioClip music;
    void Start()
    {
        bgmusic = GameObject.FindGameObjectWithTag("BGM").GetComponent<AudioSource>();
        bgmusic.Stop();
        bgmusic.clip = music;
        bgmusic.Play();

    }
    void FixedUpdate()
    {
        gameObject.GetComponent<ZombiUpravlenie>().health -= 100f;
        if (gameObject.GetComponent<ZombiUpravlenie>().health <= 0f)
        {
            bgmusic.Stop();
        }
    }
}
