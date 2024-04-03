using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PrismShower : MonoBehaviour
{
    public GameObject Prism;
    public GameObject host;
    public float velocity;
    public float coopDamage;
    public float multiDamage;
    public Transform mainviewobject;
    public Camera mainview;
    public bool rayhit = false;
    public Vector3 cursor;
    void Shoot()
    {
        Transform player = host.transform.parent.parent.parent;
        if (player.transform.Find("PeekPivot").transform.Find("Main Camera"))
        {
            mainviewobject = player.transform.Find("PeekPivot").transform.Find("Main Camera");
        }
        else
        {
            mainviewobject = player.transform.Find("Main Camera");
        }
        mainview = mainviewobject.GetComponent<Camera>();
        Ray ray = mainview.ScreenPointToRay(Input.mousePosition);
        if (Physics.Raycast(ray, out RaycastHit raycasthit))
        {
            rayhit = true;
            cursor = raycasthit.point;
        }
        else
        {
            rayhit = false;
            cursor = new Vector3(host.transform.rotation.x,host.transform.rotation.y,host.transform.rotation.z);
        }
        Vector3 RandomPos = host.transform.position + new Vector3(Random.Range(-10f,10f), 5f, Random.Range(-10f,10f));
        GameObject prism = PhotonNetwork.Instantiate(LoadObject(Prism), RandomPos, Quaternion.identity,0);
        prism.GetComponent<Rigidbody>().velocity = new Vector3(0f,0f,0f);
        if (rayhit == true)
        {
            prism.transform.LookAt(cursor);  
        }
        else if (rayhit == false)
        {
            prism.transform.rotation = mainviewobject.transform.rotation;
        }
        prism.GetComponent<Rigidbody>().AddForce(prism.transform.forward * velocity);
        prism.GetComponent<DamageZone>().coopDamage = coopDamage;
        prism.GetComponent<DamageZone>().multiplayerDamage = multiDamage;
    }

    void AOE()
    {
        Transform player = host.transform.parent.parent.parent;
        int angle = 0;
        for(int i = 0; i < 24; i++)
        {
            GameObject prism = PhotonNetwork.Instantiate(LoadObject(Prism), player.position, player.rotation,0);
            prism.GetComponent<Rigidbody>().velocity = new Vector3(0f,0f,0f);
            Vector3 finalrot = new Vector3(0, angle, 0);
            Quaternion finalrotation = Quaternion.Euler(finalrot);
            prism.transform.rotation = finalrotation;
            prism.transform.position += prism.transform.forward * 1f;
            prism.GetComponent<Rigidbody>().AddForce(prism.transform.forward * velocity);
            prism.GetComponent<DamageZone>().coopDamage = coopDamage;
            prism.GetComponent<DamageZone>().multiplayerDamage = multiDamage;
            angle += 15;
        }
    }

    string LoadObject(GameObject Object)
    {
        GameObject Prefab = Object;
        Prefab.TryGetComponent<PhotonView>(out PhotonView _pv);
        if (!_pv)
        {
            Prefab.AddComponent<PhotonView>();
        }
        string ObjectName = Object.name;
        return ObjectName.StartsWith("Enemy") ? "Instantiatables/enemyobjects/" + ObjectName : "Instantiatables/playerobjects/" + ObjectName;
    }
}
