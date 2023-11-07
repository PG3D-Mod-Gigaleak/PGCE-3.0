using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using System.Linq;

public class FindTheDiffuse : Editor
{
    [MenuItem("Fixage/Find The Diffuse")]
    public static void DiffuseTheDiffuse()
    {
        Selection.objects = (from guid in AssetDatabase.FindAssets("t:Material") where AssetDatabase.LoadAssetAtPath<Material>(AssetDatabase.GUIDToAssetPath(guid)).shader.name == "Mobile/Diffuse" select AssetDatabase.LoadAssetAtPath<Material>(AssetDatabase.GUIDToAssetPath(guid))).ToArray();
    }
}