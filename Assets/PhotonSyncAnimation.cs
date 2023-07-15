using UnityEngine;
using Photon;

[RequireComponent(typeof(PhotonView))]
public class PhotonSyncAnimation : Photon.MonoBehaviour
{
    private Animation anim;
	
    private float animationTime;

	public string syncAnim;

    private void Awake()
    {
		if (!PhotonNetwork.connected)
		{
			enabled = false;
		}
		photonView.viewID = PhotonNetwork.AllocateViewID();
        anim = GetComponent<Animation>();
    }

	private void OnDestroy()
	{
		PhotonNetwork.UnAllocateViewID(photonView.viewID);
	}

    private void Start()
    {
        if (photonView.isMine)
        {
            animationTime = anim[anim.clip.name].normalizedTime;
            photonView.RPC("SyncAnimationTime", PhotonTargets.Others, animationTime);
        }
    }

    [RPC]
    private void SyncAnimationTime(float time)
    {
        animationTime = time;
        anim[syncAnim].normalizedTime = animationTime;
        anim.Play(syncAnim);
	}
}
