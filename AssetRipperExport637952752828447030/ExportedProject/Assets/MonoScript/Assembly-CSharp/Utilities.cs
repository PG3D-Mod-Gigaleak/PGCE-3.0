using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Utilities : MonoBehaviour 
{

public static Rect screenScaleRect(float left, float top, float width, float height)
{
	return new Rect((float)Screen.width * left, (float)Screen.height * top, (float)Screen.width * width, (float)Screen.height * height);
}

public static GameObject LoadObject(string str)
{
	return Resources.Load(str) as GameObject;
}

}
