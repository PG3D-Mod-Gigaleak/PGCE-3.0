using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InspectCooldown : MonoBehaviour
{
    public float cooldown;
    private float timer;
    public GameObject host;
    public AnimationClip inspectAnim;
    public Animation WSAnim;
    // Start is called before the first frame update
    void Start()
    {
        timer = cooldown;  
        WSAnim = host.GetComponent<WeaponSounds>().animationObject.GetComponent<Animation>();
    }

    public void inspectCooldown()
    {
        if (timer > 0f)
        {
            WSAnim.Stop();
        }
        else
        {
            timer = cooldown;
        }
    }

    // Update is called once per frame
    void Update()
    {
        timer -= Time.deltaTime;
    }
}
