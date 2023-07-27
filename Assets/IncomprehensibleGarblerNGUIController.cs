#if UNITY_EDITOR
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IncomprehensibleGarblerNGUIController : MonoBehaviour {
	public UIButton generate;
	public UIInput input;
	public void GenerateFromInput() {
		string t = input.value;
		foreach (char c in t) {
			int offset = -999;
			for (int i = -9999; i < 9999; i++) {
				if (IncomprehensibleGarbler.Create2(i, "").ToLower().Trim() == c.ToString().ToLower()) {
					offset = i;
					break;
				}
			}
			Debug.Log(c + ": " + offset);
		}
	}
}
#endif