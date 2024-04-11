using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MCCEPortal : MonoBehaviour
{

    public GameObject otherPortal;
    public float cooldown;
    public GameObject spawnbox;
    public AudioClip underworld;
    private GameObject bgm;
    private AudioClip originalClip;

    // Update is called once per frame
    void Start()
    {
        bgm = GameObject.FindGameObjectWithTag("BGM");
        originalClip = bgm.GetComponent<AudioSource>().clip;

    }
    void Update()
    {
        cooldown -= Time.deltaTime;
    }

    void OnTriggerEnter(Collider other)
    {
        if (cooldown <= 0 && other.tag == "Player")
        {
            other.transform.position = spawnbox.transform.position;
            if (otherPortal.name == "NetherPortal2")
            {
                bgm.GetComponent<AudioSource>().Stop();
                bgm.GetComponent<AudioSource>().clip = underworld;
                bgm.GetComponent<AudioSource>().Play();
            }
            else if (otherPortal.name == "NetherPortal1")
            {
                bgm.GetComponent<AudioSource>().Stop();
                bgm.GetComponent<AudioSource>().clip = originalClip;
                bgm.GetComponent<AudioSource>().Play();
            }
            otherPortal.GetComponent<MCCEPortal>().cooldown = 0.5f;
            cooldown = 0.5f;
        }
    }
}
