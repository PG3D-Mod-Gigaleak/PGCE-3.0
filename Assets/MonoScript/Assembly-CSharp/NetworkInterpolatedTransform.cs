using UnityEngine;

public class NetworkInterpolatedTransform : MonoBehaviour
{
	private Vector3 correctPlayerPos = Vector3.zero;

	private Quaternion correctPlayerRot = Quaternion.identity;

	private Vector3 correctPlayerScale = Vector3.zero;

	private void Awake()
	{
		if (PlayerPrefs.GetInt("MultyPlayer") != 1 || PlayerPrefs.GetString("TypeConnect").Equals("inet"))
		{
			base.enabled = false;
		}
	}

	private void OnSerializeNetworkView(BitStream stream, NetworkMessageInfo info)
	{
		if (stream.isWriting)
		{
			Vector3 value = base.transform.localPosition;
			Quaternion value2 = base.transform.localRotation;
			Vector3 value3 = base.transform.localScale;
			stream.Serialize(ref value);
			stream.Serialize(ref value2);
			stream.Serialize(ref value3);
		}
		else
		{
			Vector3 value3 = Vector3.zero;
			Quaternion value4 = Quaternion.identity;
			Vector3 value5 = Vector3.zero;
			stream.Serialize(ref value3);
			stream.Serialize(ref value4);
			stream.Serialize(ref value5);
			correctPlayerPos = value3;
			correctPlayerRot = value4;
			correctPlayerScale = value5;
		}
	}

	private void Update()
	{
		if (PlayerPrefs.GetString("TypeConnect").Equals("local") && !base.GetComponent<NetworkView>().isMine)
		{
			base.transform.position = Vector3.Lerp(base.transform.position, correctPlayerPos, Time.deltaTime * 5f);
			base.transform.rotation = Quaternion.Lerp(base.transform.rotation, correctPlayerRot, Time.deltaTime * 5f);
			base.transform.localScale = Vector3.Lerp(base.transform.localScale, correctPlayerScale, Time.deltaTime * 5f);
		}
	}
}
