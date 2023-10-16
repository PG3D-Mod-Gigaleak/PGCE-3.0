using System;
using System.Text;

public class Encryption
{
	public static Dictionary<string, object> Encrypt(Dictionary<string, object> input, PlayerSession? target = null)
	{
		var encryptedDictionary = new Dictionary<string, object>();

		foreach (var kvp in input)
		{
			var encryptedKey = EncryptValue(kvp.Key.ToString(), target);
			var encryptedValue = EncryptValue(kvp.Value.ToString(), target);
			encryptedDictionary.Add(encryptedKey, encryptedValue);
		}

		return encryptedDictionary;
	}

	public static Dictionary<string, object> Decrypt(Dictionary<string, object> encryptedInput, PlayerSession? caller_sesh = null)
	{
		var decryptedDictionary = new Dictionary<string, object>();

		foreach (var kvp in encryptedInput)
		{
			var decryptedKey = DecryptValue(kvp.Key.ToString(), caller_sesh);
			var decryptedValue = DecryptValue(kvp.Value.ToString(), caller_sesh);
			decryptedDictionary.Add(decryptedKey, decryptedValue);
		}

		return decryptedDictionary;
	}

	public static string EncryptValue(string value, PlayerSession? caller_sesh)
	{
		long Key = caller_sesh == null ? -1 : caller_sesh.GetValueOrDefault().DecryptionKey;
		if (Key == -1)
			return value;
		byte[] bytes = Encoding.UTF8.GetBytes(value);
		for (int i = 0; i < bytes.Length; i++)
		{
			bytes[i] ^= (byte)Key;
			Key ^= (long)Math.Pow(i, i%3) + 1;
		}
		return Convert.ToBase64String(bytes);
	}

	public static string DecryptValue(string encryptedValue, PlayerSession? caller_sesh)
	{
		long Key = caller_sesh == null ? -1 : caller_sesh.GetValueOrDefault().DecryptionKey;
		if (Key == -1)
			return encryptedValue;
		byte[] bytes = Convert.FromBase64String(encryptedValue);
		for (int i = 0; i < bytes.Length; i++)
		{
			bytes[i] ^= (byte)Key;
			Key ^= (long)Math.Pow(i, i%3) + 1;
		}
		return Encoding.UTF8.GetString(bytes);
	}
}