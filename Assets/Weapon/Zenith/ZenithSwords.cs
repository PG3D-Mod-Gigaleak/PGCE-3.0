using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZenithSwords : MonoBehaviour
{

    public float cooldown;
    public Transform weapon296;
    public float initialvelocity;
    public GameObject ZenithSword;
    public bool alreadythrew = false;
    public bool thrownow = false;

    // Update is called once per frame
    void Update()
    {
        if (alreadythrew == false && thrownow == true)
        {
            alreadythrew = true;
            GameObject ThrownSword = PhotonNetwork.Instantiate(LoadObject(ZenithSword), transform.position, weapon296.rotation,0);
            ThrownSword.transform.GetChild(0).gameObject.GetComponent<ZenithSword>().host = weapon296.parent.parent.parent;
            ThrownSword.transform.GetChild(0).gameObject.GetComponent<ZenithSword>().initialvelocity = initialvelocity;
            ThrownSword.transform.GetChild(0).gameObject.GetComponent<ZenithSword>().spawner = gameObject.transform;
            float r = Random.Range(0f,1f);
            float g = Random.Range(0f,1f);
            float b = Random.Range(0f,1f);
            Color newcolor = new Color(r,g,b);
            ThrownSword.transform.GetChild(0).gameObject.GetComponent<Renderer>().material.SetColor("_Color",newcolor);
            ThrownSword.transform.GetChild(0).GetChild(0).gameObject.GetComponent<TrailRenderer>().material.SetColor("_TintColor",newcolor);
            ThrownSword.transform.GetChild(0).GetChild(1).gameObject.GetComponent<Light>().color = newcolor;
            StartCoroutine(Wait());
        }
    }
    IEnumerator Wait()
    {
        yield return new WaitForSeconds(cooldown);
        alreadythrew = false;
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
