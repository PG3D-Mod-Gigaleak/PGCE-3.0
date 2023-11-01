using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExperienceController : MonoBehaviour
{
    public static int CurrentLevel
    {
        get
        {
            return PlayerPrefs.GetInt("CurrentLevel");
        }
        set
        {
            PlayerPrefs.SetInt("CurrentLevel", value);
        }
    }

    public static float CurrentExperience
    {
        get
        {
            return PlayerPrefs.GetFloat("CurrentExperience");
        }
        set
        {
            PlayerPrefs.SetFloat("CurrentExperience", value * (1 + PassivePrefs.ExperienceMult));
        }
    }

    public static float NextLevelEXPRequired
    {
        get
        {
            return BaseExperienceCost * Mathf.Pow(ExperienceExpoMult, CurrentLevel + 1);
        }
    }

    public static float CurrentLevelEXPRequired
    {
        get
        {
            return CurrentLevel == 0 ? -100 : BaseExperienceCost * Mathf.Pow(ExperienceExpoMult, CurrentLevel);
        }
    }

    public static void LevelUp()
    {
        CurrentLevel = CurrentLevel + 1;
        SkillPoints += SkillPointsPerLevelUp;
    }

    public const int SkillPointsPerLevelUp = 3, BaseExperienceCost = 250;

    public const float ExperienceExpoMult = 1.175f;

    public static int SkillPoints
    {
        get
        {
            return PlayerPrefs.GetInt("SkillPoints");
        }
        set
        {
            PlayerPrefs.SetInt("SkillPoints", value);
        }
    }

    public static float CurrentExperienceProgress
    {
        get
        {
            return (CurrentExperience - CurrentLevelEXPRequired) / (NextLevelEXPRequired - CurrentLevelEXPRequired);
        }
    }
}
