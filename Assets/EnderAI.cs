using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnderAI : MonoBehaviour
{
	public Animation eyes;

	public EnderAIPoint startingPoint;

	public Transform itemParent;

	public GameObject drink, cake;

	private Animation mAnim;

	private UnityEngine.AI.NavMeshAgent mAgent;

	public EnderAIPoint currentPoint;

	private bool eating, drinking, moving, actioning, actioningAnimation;

	private string lastPlayedAnimation, lastPlayedEyeAnimation;

	private float blinkTimer;

	public void Blink() { PlayEyeAnimation("Blink"); }

	public void EyesLookAround() { PlayEyeAnimation("LookAround"); }

	public void WideEyes() { PlayEyeAnimation("WideEyes"); }

	public void LookAround() { PlayAnimation("LookAround"); }

	private void Start()
	{
		mAnim = GetComponent<Animation>();
		mAgent = GetComponent<UnityEngine.AI.NavMeshAgent>();
		currentPoint = startingPoint;
		moving = true;
		ChangePoint();
	}

	private void Update()
	{
		blinkTimer -= 1 * Time.deltaTime;
		if (blinkTimer <= 0f)
		{
			Blink();
			blinkTimer = UnityEngine.Random.Range(0.3f, 2f);
		}
		if (moving && !actioning && !eating && !drinking)
		{
			if (mAgent.hasPath && mAgent.remainingDistance <= 0.3f)
			{
				moving = false;
				OnReachCheckpoint(currentPoint);
			}
			mAgent.SetDestination(currentPoint.transform.position);
			PlayAnimation("Walk");
		}
		if (actioning && !mAnim.isPlaying)
		{
			if (!actioningAnimation)
			{
				PlayAnimation(eating ? "Eat" : drinking ? "Drink" : "LookAround");
				if (eating)
				{
					onFinishEat();
					eating = false;
				}
				if (drinking)
				{
					onFinishDrink();
					drinking = false;
				}
				actioningAnimation = true;
			}
			else
			{
				OnFinishAction();
				actioningAnimation = false;
			}
		}
	}

	public bool CallAction(EnderAIPoint.Action action) 
	{ 
		if (UnityEngine.Random.Range(0f, 1f) <= action.chance)
		{
			base.SendMessage(action.action);
			moving = false;
			mAnim.Stop();
			return true;
		}
		return false;
	}

	public void OnFinishAction()
	{
		actioning = false;
		moving = true;
		ChangePoint();
	}

	public void ChangePoint()
	{
		int index = UnityEngine.Random.Range(0, currentPoint.connectedPoints.Length);
		Debug.LogError(index);
		EnderAIPoint randomPoint = currentPoint.connectedPoints[index].GetComponent<EnderAIPoint>();
		currentPoint = randomPoint;
	}

	public void OnReachCheckpoint(EnderAIPoint point)
	{
		Debug.LogError("rach");
		if (CallAction(point.actionHere))
		{
			actioning = true;
			mAnim.Stop();
			return;
		}
		moving = true;
		ChangePoint();
	}

	public void EatCake() { Eat(cake); }

	public void DrinkDrink() { Drink(drink); }

	public void Eat(GameObject foodObject)
	{
		PlayAnimation("Eat");
		transform.LookAt(foodObject.transform.position);
		transform.rotation = Quaternion.Euler(0, transform.rotation.eulerAngles.y, 0);
		Vector3 origPos = foodObject.transform.position;
		onFinishEat += ()=> { foodObject.transform.position = origPos; foodObject.transform.parent = null; onFinishEat = null; };
		foodObject.transform.parent = itemParent;
		foodObject.transform.localPosition = Vector3.zero;
	}

	public void Drink(GameObject drinkObject)
	{
		PlayAnimation("Drink");
		transform.LookAt(drinkObject.transform.position);
		transform.rotation = Quaternion.Euler(0, transform.rotation.eulerAngles.y, 0);
		Vector3 origPos = drinkObject.transform.position;
		onFinishDrink += ()=> { drinkObject.transform.position = origPos; drinkObject.transform.parent = null; onFinishEat = null; };
		drinkObject.transform.parent = itemParent;
		drinkObject.transform.localPosition = Vector3.zero;
	}

	public void PlayAnimation(string animation)
	{
		Debug.LogError(animation);
		if (animation == lastPlayedAnimation)
		{
			mAnim.Play(animation);
			return;
		}
		lastPlayedAnimation = animation;
		mAnim.Play(animation);
	}

	public void PlayEyeAnimation(string animation)
	{
		if (eyes.IsPlaying(animation))
		{
			return;
		}
		if (animation == lastPlayedEyeAnimation)
		{
			eyes.Play(animation);
			return;
		}
		lastPlayedEyeAnimation = animation;
		eyes.CrossFade(animation, 0.2f);
	}

	private System.Action onFinishEat, onFinishDrink;
}
