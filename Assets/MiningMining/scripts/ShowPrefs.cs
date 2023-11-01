using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class ShowPrefs : MonoBehaviour
{
    public string prefsString;

    public enum Type
    {
        Int, Float, String
    }

    public Type type;

    private TextMeshProUGUI tmpu;

    void Start()
    {
        tmpu = GetComponent<TextMeshProUGUI>();
    }

    void Update()
    {
        switch (type)
        {
            case Type.Int:
                tmpu.text = "" + PlayerPrefs.GetInt(prefsString);
            break;

            case Type.Float:
                tmpu.text = "" + PlayerPrefs.GetFloat(prefsString);
            break;

            case Type.String:
                tmpu.text = PlayerPrefs.GetString(prefsString);
            break;
        }
    }
}
