using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ULTRADashing : MonoBehaviour
{
    public GameObject DashUIRoot;
    public int DashCount = 0;
    public int DashMax = 3;
    public float DashTimer = 0f;
    public float DashTimer2 = 0f;
    public float DashDuration;
    public float DashCooldown;
    public float DashSpeed;
    public float DashProgress = 0;
    private FirstPersonControl fpc;
    private GameObject DashRoot;
    public AudioSource AuSr;
    public AudioClip DashSound;
    public AudioClip DashNotify;
    private WeaponSounds wps;
    private float newDashSpeed;
    public bool isDashing = false;
    private UITexture bar1;
    private UITexture bar2;
    private UITexture bar3;
    public Color BarOn;
    public Color BarOff;
    private GameObject guncam;
    public AnimationClip DashFront;
    public AnimationClip DashBack;
    public AnimationClip DashLeft;
    public AnimationClip DashRight;
    void Start()
    {
        DashCount = DashMax;
        DashProgress = 150;
    }

    void Reset()
    {
        if (!fpc)
        {
        fpc = gameObject.GetComponent<FirstPersonControl>();
        }
        if (DashUIRoot != null && !DashRoot)
        {
            DashRoot = Instantiate(DashUIRoot, new Vector3(Random.Range(-100f, 100f), Random.Range(-100f, 100f), Random.Range(-100f, 100f)), Quaternion.identity);
            bar1 = DashRoot.transform.Find("Bar1").gameObject.GetComponent<UITexture>();
            bar2 = DashRoot.transform.Find("Bar2").gameObject.GetComponent<UITexture>();
            bar3 = DashRoot.transform.Find("Bar3").gameObject.GetComponent<UITexture>();
        }
        if (!AuSr)
        {
        AuSr = gameObject.AddComponent<AudioSource>();
        }
        if (!guncam)
        {
            if (transform.Find("PeekPivot").GetChild(0).GetChild(0).gameObject)
            {
                guncam = transform.Find("PeekPivot").GetChild(0).GetChild(0).gameObject;
            }
            else if (transform.Find("Main Camera").GetChild(0).gameObject)
            {
                guncam = transform.Find("Main Camera").GetChild(0).gameObject;
            }
        }
    }
    void Update()
    {
        DashTimer -= Time.deltaTime;
        DashTimer2 -= Time.deltaTime;
        // Get Camera
        if (transform.Find("Main Camera"))
        {
            guncam = transform.Find("Main Camera").GetChild(0).gameObject;
        }
        else if (transform.Find("PeekPivot").GetChild(0).GetChild(0).gameObject)
        {
            guncam = transform.Find("PeekPivot").GetChild(0).GetChild(0).gameObject;
        }
        // Bar Checks
        if (DashCount == 0)
        {
            bar1.color = BarOff;
            bar2.color = BarOff;
            bar3.color = BarOff;
        }
        else if (DashCount == 1)
        {
            bar1.color = BarOn;
            bar2.color = BarOff;
            bar3.color = BarOff;
        }
        else if (DashCount == 2)
        {
            bar1.color = BarOn;
            bar2.color = BarOn;
            bar3.color = BarOff;
        }
        else if (DashCount == DashMax)
        {
            bar1.color = BarOn;
            bar2.color = BarOn;
            bar3.color = BarOn;
        }
        // While Dashing
        if (DashTimer2 > 0f)
        {
            isDashing = true;
        }
        else
        {
            isDashing = false;
        }
        // Adaptive Dash Speed
        if (gameObject.transform.Find("GameObject").GetChild(0).GetChild(0).gameObject.GetComponent<WeaponSounds>())
        {
            wps = gameObject.transform.Find("GameObject").GetChild(0).GetChild(0).gameObject.GetComponent<WeaponSounds>();
            newDashSpeed = DashSpeed * wps.speedModifier;
        }
        else
        {
            newDashSpeed = DashSpeed;
        }
        // Dashing
        if (Input.GetKey("w") && Input.GetKey("d") && Input.GetKeyDown(KeyCode.LeftShift) && DashTimer < 0f && DashCount > 0)
        {
            Vector3 velocity = gameObject.transform.forward * newDashSpeed + gameObject.transform.right * newDashSpeed;
            guncam.GetComponent<Animation>().Stop();
            guncam.GetComponent<Animation>().Play(DashRight.name);
            StartCoroutine(Dashing(velocity));
        }
        else if (Input.GetKey("w") && Input.GetKey("a") && Input.GetKeyDown(KeyCode.LeftShift) && DashTimer < 0f && DashCount > 0)
        {
            Vector3 velocity = gameObject.transform.forward * newDashSpeed + gameObject.transform.right * -newDashSpeed;
            guncam.GetComponent<Animation>().Stop();
            guncam.GetComponent<Animation>().Play(DashLeft.name);
            StartCoroutine(Dashing(velocity));
        }
        else if (Input.GetKey("s") && Input.GetKey("d") && Input.GetKeyDown(KeyCode.LeftShift) && DashTimer < 0f && DashCount > 0)
        {
            Vector3 velocity = gameObject.transform.forward * -newDashSpeed + gameObject.transform.right * newDashSpeed;
            guncam.GetComponent<Animation>().Stop();
            guncam.GetComponent<Animation>().Play(DashRight.name);
            StartCoroutine(Dashing(velocity));
        }
        else if (Input.GetKey("s") && Input.GetKey("a") && Input.GetKeyDown(KeyCode.LeftShift) && DashTimer < 0f && DashCount > 0)
        {
            Vector3 velocity = gameObject.transform.forward * -newDashSpeed + gameObject.transform.right * -newDashSpeed;
            guncam.GetComponent<Animation>().Stop();
            guncam.GetComponent<Animation>().Play(DashLeft.name);
            StartCoroutine(Dashing(velocity));
        }
        else if (Input.GetKey("w") && Input.GetKeyDown(KeyCode.LeftShift) && DashTimer < 0f && DashCount > 0)
        {
            Vector3 velocity = gameObject.transform.forward * newDashSpeed;
            guncam.GetComponent<Animation>().Stop();
            guncam.GetComponent<Animation>().Play(DashFront.name);
            StartCoroutine(Dashing(velocity));
        }
        else if (Input.GetKey("s") && Input.GetKeyDown(KeyCode.LeftShift) && DashTimer < 0f && DashCount > 0)
        {
            Vector3 velocity = gameObject.transform.forward * -newDashSpeed;
            guncam.GetComponent<Animation>().Stop();
            guncam.GetComponent<Animation>().Play(DashBack.name);
            StartCoroutine(Dashing(velocity));
        }
        else if (Input.GetKey("a") && Input.GetKeyDown(KeyCode.LeftShift) && DashTimer < 0f && DashCount > 0)
        {
            Vector3 velocity = gameObject.transform.right* -newDashSpeed;
            guncam.GetComponent<Animation>().Stop();
            guncam.GetComponent<Animation>().Play(DashLeft.name);
            StartCoroutine(Dashing(velocity));
        }
        else if (Input.GetKey("d") && Input.GetKeyDown(KeyCode.LeftShift) && DashTimer < 0f && DashCount > 0)
        {
            Vector3 velocity = gameObject.transform.right * newDashSpeed;
            guncam.GetComponent<Animation>().Stop();
            guncam.GetComponent<Animation>().Play(DashRight.name);
            StartCoroutine(Dashing(velocity));
        }
        else if (Input.GetKeyDown(KeyCode.LeftShift) && DashTimer < 0f && DashCount > 0)
        {
            Vector3 velocity = gameObject.transform.forward * newDashSpeed;
            guncam.GetComponent<Animation>().Stop();
            guncam.GetComponent<Animation>().Play(DashFront.name);
            StartCoroutine(Dashing(velocity));
        }
    }

    IEnumerator Dashing(Vector3 velocity)
    {
        isDashing = true;
        AuSr.PlayOneShot(DashSound);
        DashTimer = DashCooldown;
        DashTimer2 = DashDuration;
        DashCount -= 1;
        DashProgress -= 50;
        fpc.velocity = new Vector3(fpc.velocity.x, 0f, fpc.velocity.z);
        fpc.motion = fpc.velocity;
        fpc.velocity += velocity;
        yield return new WaitForSeconds(DashDuration);
        fpc.velocity -= velocity;
    }

    void FixedUpdate()
    {
        if (DashCount < DashMax)
        {
        DashProgress += 0.5f;
        }
        if (DashProgress == 50 && DashCount < DashMax)
        {
            AuSr.PlayOneShot(DashNotify);
            DashCount = 1;
        }
        else if (DashProgress == 100 && DashCount < DashMax)
        {
            AuSr.PlayOneShot(DashNotify);
            DashCount = 2;
        }
        else if (DashProgress == 150 && DashCount < DashMax)
        {
            AuSr.PlayOneShot(DashNotify);
            DashCount = 3;
        }
        Reset();
    }
}
