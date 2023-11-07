using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TranslateEase : MonoBehaviour
{
    [System.Serializable]
    public class EasingData
    {
        public bool translate, offsetByStartingValue = true, local = true;

        public Vector3 multiplier = Vector3.one, speed = Vector3.one;

        public Easing.EaseType easeType;

        public Easing.EasingMethod easingMethod;
    }

    void Start()
    {
        if (position.offsetByStartingValue)
        {
            startPosition = position.local ? transform.localPosition : transform.position;
        }

        if (rotation.offsetByStartingValue)
        {
            startRotation = rotation.local ? transform.localRotation.eulerAngles : transform.rotation.eulerAngles;
        }

        if (scale.offsetByStartingValue)
        {
            startScale = transform.localScale;
        }
    }

    void Update()
    {
        if (position.translate)
        {
            if (position.local)
            {
                transform.localPosition = TransformEasing.EaseVector3(position.easeType, position.easingMethod, position.multiplier, position.speed, startPosition);
            }
            else
            {
                transform.position = TransformEasing.EaseVector3(position.easeType, position.easingMethod, position.multiplier, position.speed, startPosition);
            }
        }

        if (rotation.translate)
        {
            if (rotation.local)
            {
                transform.localRotation = TransformEasing.EaseRotation(rotation.easeType, rotation.easingMethod, rotation.multiplier, rotation.speed, startRotation);
            }
            else
            {
                transform.rotation = TransformEasing.EaseRotation(rotation.easeType, rotation.easingMethod, rotation.multiplier, rotation.speed, startRotation);
            }
        }

        if (scale.translate)
        {
            transform.localScale = TransformEasing.EaseVector3(scale.easeType, scale.easingMethod, scale.multiplier, scale.speed, startScale);
        }
    }

    private Vector3 startPosition, startRotation, startScale;

    public EasingData position = new EasingData { translate = true }, rotation, scale = new EasingData { local = true };
}

public static class TransformEasing
{
    public static Vector3 EaseVector3(Easing.EaseType easeType, Easing.EasingMethod easingMethod, Vector3 multiplier, Vector3 speed, Vector3 offset)
    {
        return new Vector3(Easing.Ease.MethodByEnum(easeType, easingMethod, Time.time * speed.x) * multiplier.x + offset.x, Easing.Ease.MethodByEnum(easeType, easingMethod, Time.time * speed.y) * multiplier.y + offset.y, Easing.Ease.MethodByEnum(easeType, easingMethod, Time.time * speed.z) * multiplier.z + offset.z);
    }

    public static Vector2 EaseVector2(Easing.EaseType easeType, Easing.EasingMethod easingMethod, Vector2 multiplier, Vector2 speed, Vector2 offset)
    {
        return new Vector2(Easing.Ease.MethodByEnum(easeType, easingMethod, Time.time * speed.x) * multiplier.x + offset.x, Easing.Ease.MethodByEnum(easeType, easingMethod, Time.time * speed.y) * multiplier.y + offset.y);
    }

    public static Quaternion EaseRotation(Easing.EaseType easeType, Easing.EasingMethod easingMethod, Vector3 multiplier, Vector3 speed, Vector3 offset)
    {
        return Quaternion.Euler(Easing.Ease.MethodByEnum(easeType, easingMethod, Time.time * speed.x) * multiplier.x + offset.x, Easing.Ease.MethodByEnum(easeType, easingMethod, Time.time * speed.y) * multiplier.y + offset.y, Easing.Ease.MethodByEnum(easeType, easingMethod, Time.time * speed.z) * multiplier.z + offset.z);
    }
}
