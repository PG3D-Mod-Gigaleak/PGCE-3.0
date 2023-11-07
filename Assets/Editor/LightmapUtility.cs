using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using System.Linq;

public class LightmapUtility : Editor
{
	public static string[] DiffuseShaders = new string[]
	{
		"Mobile/Diffuse",
		"Legacy Shaders/Diffuse",
		"Legacy Shaders/Lightmapped/Diffuse+"
	};

	//make a transparent thing or whatever
	public static string[] TransparentShaders = new string[]
	{
		""
	};

	public static List<Material> DiffuseShadersInThisScene
	{
		get
		{
			List<Material> finalMats = new List<Material>();
			List<string> shaders = DiffuseShaders.ToList();
			foreach (MeshRenderer renderer in Resources.FindObjectsOfTypeAll<MeshRenderer>())
			{
				if (renderer.gameObject.isStatic && renderer.gameObject.activeInHierarchy)
				{
					foreach (Material mat in renderer.sharedMaterials)
					{
						if (shaders.Contains(mat.shader.name))
						{
							finalMats.Add(mat);
						}
					}
				}
			}
			return finalMats;
		}
	}

	public static List<Texture2D> LightMapTextures
	{
		get
		{
			return (from guid in AssetDatabase.FindAssets("t:Texture2D") where AssetDatabase.GUIDToAssetPath(guid).Contains("LightmapFar") select AssetDatabase.LoadAssetAtPath<Texture2D>(AssetDatabase.GUIDToAssetPath(guid))).ToList();
		}
	}

	public static void SetDiffuseShaders(List<Material> diffuseMats)
	{
		foreach (Material mat in diffuseMats)
		{
			mat.shader = Shader.Find("Legacy Shaders/Lightmapped/Diffuse+");
			mat.SetColor("_Color", new Color(1, 1, 1, 1));
		}
	}

	public static void ChangeLightmaps(List<Material> mats, Texture2D lightmap)
	{
		foreach (Material mat in mats)
		{
			mat.SetTexture("_LightMap", lightmap);
		}
	}

	public static void ChangeLightmapsMult(List<Material> mats, float mult)
	{
		foreach (Material mat in mats)
		{
			mat.SetFloat("_LightMapMult", mult);
		}
	}
}
