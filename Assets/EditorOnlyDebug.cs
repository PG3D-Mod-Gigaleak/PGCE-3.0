using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EditorOnlyDebug : MonoBehaviour
{
    public static void Log(object text)
    {
        #if UNITY_EDITOR
        Debug.Log($"[EditorOnlyDebug::Log] {text}");
        #endif
    }
}
