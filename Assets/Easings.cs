using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Easings : MonoBehaviour {
	public static float EaseOutCubic(float i) {
		return 1 - Mathf.Pow(1 - i, 3);
	}
}
