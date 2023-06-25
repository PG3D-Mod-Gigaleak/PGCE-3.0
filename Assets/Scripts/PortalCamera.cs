using UnityEngine;

public class PortalCamera : MonoBehaviour
{
    public Transform player;

	private Camera cam;

	private float startingFov;

	void Start()
	{
		cam = GetComponent<Camera>();
		startingFov = cam.fieldOfView;
	}

    private void Update()
    {
		transform.rotation = Quaternion.Euler(new Vector3(player.transform.rotation.eulerAngles.x + (transform.position.y - player.position.y), player.transform.rotation.eulerAngles.y - 180 + (transform.position.x - player.position.x), player.transform.rotation.eulerAngles.z));
		cam.fieldOfView = startingFov + Vector3.Distance(transform.position, player.position);
    }
}
