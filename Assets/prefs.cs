using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class prefs {
	private static Dictionary<string, object> values = default(Dictionary<string, object>);
	private static bool loaded = false;
	private static void EnsureLoaded() {
		if (!loaded) {
			values = JsonUtility.FromJson<Dictionary<string, object>>(File.ReadAllText(Application.persistentDataPath + "/lprefs"));
			loaded = true;
		}
	}
	public static void Save() {
		EnsureLoaded();
		File.WriteAllText(Application.persistentDataPath + "/lprefs", JsonUtility.ToJson(values));
	}
	public static bool HasKey(string key) {
		EnsureLoaded();
		return values.ContainsKey(key);
	}
	public static void DeleteKey(string key) {
		EnsureLoaded();
		if (prefs.HasKey(key)) {
			values.Remove(key);
		}
		Save();
	}
	public static void DeleteAll() {
		EnsureLoaded();
		values.Clear();
		Save();
	}
	#region GET
	public static float GetFloat(string key, float defaultValue = 0) {
		EnsureLoaded();
		if (prefs.HasKey(key)) {
			return (float)values[key];
		}
		return defaultValue;
	}
	public static int GetInt(string key, int defaultValue = 0) {
		EnsureLoaded();
		if (prefs.HasKey(key)) {
			return (int)values[key];
		}
		return defaultValue;
	}
	public static string GetString(string key, string defaultValue = "") {
		EnsureLoaded();
		if (prefs.HasKey(key)) {
			return (string)values[key];
		}
		return defaultValue;
	}
	#endregion
	#region SET
	public static void SetFloat(string key, float value) {
		EnsureLoaded();
		values[key] = value;
		Save();
	}
	public static void SetInt(string key, int value) {
		EnsureLoaded();
		values[key] = value;
		Save();
	}
	public static void SetString(string key, string value) {
		EnsureLoaded();
		values[key] = value;
		Save();
	}
	#endregion
}
