using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EditorOnlyDebug : MonoBehaviour
{
    public static void Log(object text)
    {
        #if UNITY_EDITOR
        Debug.Log($"{text}");
        #endif
    }
    public static void LogWarning(object text)
    {
        #if UNITY_EDITOR
        Debug.LogWarning($"{text}");
        #endif
    }
    public static void LogError(object text)
    {
        #if UNITY_EDITOR
        Debug.LogError($"{text}");
        #endif
    }
}
