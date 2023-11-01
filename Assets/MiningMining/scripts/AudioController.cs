using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioController : MonoBehaviour
{
    public static AudioController instance;

    private AudioSource _source;

    void Awake()
    {
        instance = this;
        _source = GetComponent<AudioSource>();
    }

    public static void PlayRandomAudio(AudioClip[] clips, float volume = 1f)
    {
        instance._source.PlayOneShot(clips[UnityEngine.Random.Range(0, clips.Length)], volume);
    }

    public AudioClip[] footstep, footstepRock, breakRock, hitRock, pickSwings;
}
