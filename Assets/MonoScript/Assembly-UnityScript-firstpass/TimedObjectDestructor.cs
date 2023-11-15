using System;
using UnityEngine;

[Serializable]
public class TimedObjectDestructor : MonoBehaviour
{
	public float timeOut;

	public bool detachChildren;

	public TimedObjectDestructor()
	{
		timeOut = 1f;
	}

	public virtual void Awake()
	{
		Invoke(nameof(DestroyNow), timeOut);
	}

	public virtual void DestroyNow()
	{
		if (detachChildren)
		{
			transform.DetachChildren();
		}
		UnityEngine.Object.DestroyObject(gameObject);
	}

	public virtual void Main()
	{
	}
}
