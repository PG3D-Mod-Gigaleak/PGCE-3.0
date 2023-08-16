using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AlertNGUI : MonoBehaviour
{
    public UILabel tL;
    public float t;
    private float left = 8f;
    public static void Show(string text, float timeToCrash)
    {
        GameObject j = Resources.Load<GameObject>("Alert");
        j = Instantiate(j);
        AlertNGUI x = j.GetComponent<AlertNGUI>();
        x.left = timeToCrash;
        x.tL.text = text;
    }
    private void Update()
    {
        t += Time.deltaTime;
        if (t > left)
        {
            Debug.Log("goodbye cruel world");
            Application.Quit();
        }
    }
}
