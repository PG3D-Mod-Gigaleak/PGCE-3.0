using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MusicController : MonoBehaviour
{
    public AudioClip[] songs;

    private int lastPlayedIndex;

    private AudioSource _source;

    private float cooldown;

    public Vector2 cooldownRandom;

    void Start()
    {
        _source = GetComponent<AudioSource>();
        int rand = UnityEngine.Random.Range(0, songs.Length);
        _source.clip = songs[rand];
        _source.Play();
        lastPlayedIndex = rand;
    }

    void Update()
    {
        if (!_source.isPlaying)
        {
            cooldown -= 1f * Time.deltaTime;
            if (cooldown <= 0f)
            {
                int rand = UnityEngine.Random.Range(0, songs.Length);
                if (rand == lastPlayedIndex)
                {
                    rand = rand == 0 ? rand + 1 : rand == songs.Length - 1 ? rand - 1 : rand + 1;
                }
                _source.clip = songs[rand];
                _source.Play();
                lastPlayedIndex = rand;
                cooldown = UnityEngine.Random.Range(cooldownRandom.x, cooldownRandom.y);
            }
        }
    }
}
