using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Achievements : ScriptableObject {
	[System.Serializable]
	public struct Achievement {
		public string name, id;
		public Texture2D icon;
	}
	public Achievement[] achievements;
	public Achievement GetAchievement(string name) {
		foreach (Achievement achievement in achievements) {
			if (achievement.id == name) {
				return achievement;
			}
		}
		return default(Achievement);
	}
}