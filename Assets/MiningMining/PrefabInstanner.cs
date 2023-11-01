using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PrefabInstanner : MonoBehaviour
{
    public Transform targetParent, targetParent2;

    public void Instantiate(GameObject gameObject)
    {
        Instantiate(gameObject, targetParent);
    }

    public void Instantiate2(GameObject gameObject)
    {
        Instantiate(gameObject, targetParent2);
    }
}
