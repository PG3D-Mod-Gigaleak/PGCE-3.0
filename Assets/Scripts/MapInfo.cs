using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapInfo : MonoBehaviour
{
	[System.Serializable]
	public class Map
	{
		public string sceneName, mapName;

		public Texture icon;

		public int backgroundMusic;

		public Quaternion rotation;

		public Vector3 position;

		public bool hasVarY;
	}

	public List<Map> deathmatchMaps, coopMaps;
}
