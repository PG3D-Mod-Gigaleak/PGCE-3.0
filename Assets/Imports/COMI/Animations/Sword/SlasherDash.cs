using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SlasherDash : MonoBehaviour
{
    public float distance;
    public GameObject dashdamage;
    public GameObject playerghost;
    void Dash()
    {
        GameObject dash = Instantiate(dashdamage, transform.position, transform.rotation);
        if (playerghost != null)
        {
        GameObject ghost = Instantiate(playerghost, transform.position + ( transform.forward * distance * 0f), transform.rotation);
        ghost.GetComponent<Animation>().Play();
        ghost = Instantiate(playerghost, transform.position + ( transform.forward * distance * 1f/3f), transform.rotation);
        ghost.GetComponent<Animation>().Play();
        ghost = Instantiate(playerghost, transform.position + ( transform.forward * distance * 2f/3f), transform.rotation);
        ghost.GetComponent<Animation>().Play();
        ghost = Instantiate(playerghost, transform.position + ( transform.forward * distance * 3f/3f), transform.rotation);
        ghost.GetComponent<Animation>().Play();
        }
        dash.transform.position += transform.forward * ( distance * 1/2 );
        dash.transform.localScale = new Vector3(dash.transform.localScale.x , dash.transform.localScale.y, dash.transform.localScale.z * distance);
        transform.parent.parent.parent.position += transform.forward * distance;
    }
}
