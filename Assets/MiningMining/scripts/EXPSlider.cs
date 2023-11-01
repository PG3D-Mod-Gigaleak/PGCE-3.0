using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class EXPSlider : MonoBehaviour
{
    private Slider _slider;

    [SerializeField] private float speed;

    void Start()
    {
        _slider = GetComponent<Slider>();
    }

    void Update()
    {
        _slider.value = Mathf.Lerp(_slider.value, ExperienceController.CurrentExperienceProgress, Time.deltaTime * speed);
        if (ExperienceController.CurrentExperienceProgress >= 1f)
        {
            ExperienceController.LevelUp();
        }
    }
}
