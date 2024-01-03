using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InspectZoom : MonoBehaviour
{

    public float addFov;
    public Camera cam;
    public GameObject host;
    public float startingfov;
    public GameObject zoomchecker;
    public bool ChangeAccuracy;
    public Vector2 startZone = new Vector2(1f,1f);
    // Start is called before the first frame update
    void Start()
    {
        GameObject player = host.transform.parent.parent.parent.gameObject;
        if (player.transform.Find("Main Camera"))
        {
            player.transform.Find("Main Camera").TryGetComponent<Camera>(out cam);
        }
        if (player.transform.Find("PeekPivot").transform.Find("Main Camera"))
        {
            player.transform.Find("PeekPivot").transform.Find("Main Camera").TryGetComponent<Camera>(out cam);
        }
        startingfov = cam.fieldOfView;
        GameObject zoom = Instantiate(zoomchecker, transform.position, transform.rotation);
        zoom.GetComponent<InspectZoomChecker>().origin = gameObject;
        zoom.GetComponent<InspectZoomChecker>().origincam = cam;
        zoom.GetComponent<InspectZoomChecker>().originfov = startingfov;
    }

    // Update is called once per frame
    void Update()
    {
        cam.fieldOfView = startingfov + addFov + 10f;
        if (ChangeAccuracy == true)
        {
            host.GetComponent<WeaponSounds>().startZone = startZone;
        }
    }
}
