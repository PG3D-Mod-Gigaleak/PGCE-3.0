using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChargeDash : MonoBehaviour
{

    public GameObject host;
    public float ChargeVelocity;
    private GameObject player;
    public GameObject dashmanager;
    public bool isManager;
    public GameObject DamageBox;
    public bool isCharging;
    public bool isDashing;
    public bool Dashed;
    public GameObject manager;
    public Vector3 AddVelocity = new Vector3(0f,0f,0f);
    void Start()
    {
        if (!isManager)
        {
        player = host.transform.parent.parent.parent.gameObject;
        manager = Instantiate(dashmanager, player.transform);
        manager.GetComponent<ChargeDash>().isManager = true;
        manager.GetComponent<ChargeDash>().host = host;
        manager.GetComponent<ChargeDash>().player = player;
        }
    }

    public void StartDash()
    {
        manager.GetComponent<ChargeDash>().isDashing = true;
        AddVelocity = host.transform.forward;
        AddVelocity = new Vector3(AddVelocity.x, AddVelocity.y / 2, AddVelocity.z);
        manager.GetComponent<ChargeDash>().AddVelocity = AddVelocity;
    }

    void Update()
    {
    }

    void FixedUpdate()
    {
        if (isManager != true && isCharging == true && ChargeVelocity < 100f)
        {
            ChargeVelocity += 2f;
        }
        else if (isCharging == false && ChargeVelocity > 0f)
        {
            ChargeVelocity -= 2f;
        }
        else
        {
            isDashing = false;
            Dashed = false;
        }
        if (!host)
        {
            Destroy(gameObject);
        }
        if (manager != null)
        {
        manager.GetComponent<ChargeDash>().ChargeVelocity = ChargeVelocity;
        }
        if (isManager != true)
        {
            DamageBox.GetComponent<DamageZone>().coopDamage = ChargeVelocity * 30f;
            DamageBox.GetComponent<DamageZone>().multiplayerDamage = ChargeVelocity * 1f;
        }
        else if (isDashing == true && Dashed == false)
        {
            player.GetComponent<FirstPersonControl>().velocity += AddVelocity * ChargeVelocity/3f;
            Dashed = true;
        }
    }
}
