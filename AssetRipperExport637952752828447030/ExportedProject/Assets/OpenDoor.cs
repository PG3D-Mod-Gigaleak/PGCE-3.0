using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OpenDoor : MonoBehaviour {

public GameObject door;

private bool closing;

private bool hasOpened;

private bool hasClosed;

private bool cancel;

public AudioClip open;

public AudioClip close;

void Update()
{
	if (!door.GetComponent<Animation>().IsPlaying("open") && closing && !hasClosed)
	{
		door.GetComponent<Animation>().Play("close");
		closing = false;
		cancel = true;
		hasOpened = false;
		hasClosed = true;
		GetComponent<AudioSource>().PlayOneShot(close);
	}
}

void OnTriggerEnter()
{
	if (!door.GetComponent<Animation>().isPlaying && !hasOpened)
	{
	door.GetComponent<Animation>().Play("open");
	hasOpened = true;
	cancel = true;
	hasClosed = false;
	GetComponent<AudioSource>().PlayOneShot(open);
	StartCoroutine(waitForClose());
	}
}
void OnTriggerExit()
{
	if (!door.GetComponent<Animation>().isPlaying && !hasClosed)
	{
	door.GetComponent<Animation>().Play("close");
	closing = false;
	cancel = true;
	hasOpened = false;
	hasClosed = true;
	GetComponent<AudioSource>().PlayOneShot(close);
	}
}
public IEnumerator waitForClose()
{
	yield return new WaitForSeconds(3f);
	if (!door.GetComponent<Animation>().isPlaying && !cancel && !hasClosed)
	{
		door.GetComponent<Animation>().Play("close");
		closing = false;
		hasOpened = false;
		hasClosed = true;
		GetComponent<AudioSource>().PlayOneShot(close);
	}
	cancel = false;
	yield return new WaitForSeconds(2f);
	if (!door.GetComponent<Animation>().isPlaying && !hasClosed)
	{
		door.GetComponent<Animation>().Play("close");
		closing = false;
		hasOpened = false;
		hasClosed = true;
		GetComponent<AudioSource>().PlayOneShot(close);
	}
}
}
