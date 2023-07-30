using Photon;
using UnityEngine;

public class InterpolateOnlyScale : Photon.MonoBehaviour
{
	private Vector3 correctScale = Vector3.zero;

	private void Awake()
	{
		if (PlayerPrefs.GetInt("MultyPlayer") != 1 || PlayerPrefs.GetString("TypeConnect").Equals("local"))
		{
			base.enabled = false;
		}
	}

	private void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
		if (stream.isWriting)
		{
			stream.SendNext(base.transform.localScale);
		}
		else
		{
			correctScale = (Vector3)stream.ReceiveNext();
		}
	}

	private void Update()
	{
		if (!base.photonView.isMine)
		{
			base.transform.localScale = correctScale;
		}
	}
}
