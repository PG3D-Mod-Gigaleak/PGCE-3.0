using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class LightmapFinder : EditorWindow
{
    [MenuItem("Lightmaps/Open Lightmap Fixer")]
    public static void ShowWindow()
    {
        EditorWindow.GetWindow(typeof(LightmapFinder));
    }

	private static List<Material> lightmapDiffuse, lightmapTransparent;

	private static List<Texture2D> lightmaps;

	private static int lightmapIndex;

	private static float lightmapMult;

	private static string stupidWorkaround;
    
    void OnGUI()
    {
		GUILayout.Label("Lightmap Fixage", EditorStyles.largeLabel);

		if (GUILayout.Button("Refresh lightmaps", GUILayout.Height(45), GUILayout.Width(125)))
		{
			lightmapDiffuse = LightmapUtility.DiffuseShadersInThisScene;
			lightmaps = LightmapUtility.LightMapTextures;
			lightmapIndex = 0;
			lightmapMult = 1f;
			LightmapUtility.SetDiffuseShaders(lightmapDiffuse);
			LightmapUtility.ChangeLightmaps(lightmapDiffuse, lightmaps[lightmapIndex]);
		}

		if (lightmaps == null)
		{
			Debug.LogError("REFRESH THE LIGHTMAPS!!! DO IT NOW!!! DO IT!!! DO IT NOW!!!");
			return;
		}
		GUILayout.Space(85);
		GUILayout.Label("Lightmap Multiplier");
		stupidWorkaround = GUILayout.TextField(stupidWorkaround);
		try
		{
			lightmapMult = float.Parse(stupidWorkaround);
			LightmapUtility.ChangeLightmapsMult(lightmapDiffuse, lightmapMult);
		}
		catch
		{
			Debug.LogError("NO!!! NO!!! DONT DO THAT!! STOP PUTTING LETTERS THERE!!! STOP IT!!!");
		}

		
		if (GUILayout.Button("Next", GUILayout.Height(35), GUILayout.Width(175)))
		{
			if (lightmapIndex < lightmaps.Count - 1)
			{
				lightmapIndex++;
				LightmapUtility.ChangeLightmaps(lightmapDiffuse, lightmaps[lightmapIndex]);
			}
		}
		if (GUILayout.Button("Last", GUILayout.Height(35), GUILayout.Width(175)))
		{
			if (lightmapIndex != 0)
			{
				lightmapIndex--;
				LightmapUtility.ChangeLightmaps(lightmapDiffuse, lightmaps[lightmapIndex]);
			}
		}

		EditorGUI.DrawPreviewTexture(new Rect(285, 15, 100, 100), lightmaps[lightmapIndex]);
    }
}