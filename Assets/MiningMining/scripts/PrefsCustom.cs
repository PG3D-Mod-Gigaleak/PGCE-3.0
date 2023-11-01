using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public struct PrefsInt
{
    public static implicit operator int(PrefsInt prefsInt)
    {
        return prefsInt.value;
    }

    public static PrefsInt operator >>(PrefsInt prefsInt, int value)
    {
        prefsInt.value = value;
        return prefsInt;
    }

    public static bool operator ==(PrefsInt prefsInt, int value)
    {
        return prefsInt.value == value;
    }

    public static bool operator !=(PrefsInt prefsInt, int value)
    {
        return prefsInt.value != value;
    }

    public static bool operator <=(PrefsInt prefsInt, int value)
    {
        return prefsInt.value <= value;
    }

    public static bool operator >=(PrefsInt prefsInt, int value)
    {
        return prefsInt.value >= value;
    }

    public static bool operator <(PrefsInt prefsInt, int value)
    {
        return prefsInt.value < value;
    }

    public static bool operator >(PrefsInt prefsInt, int value)
    {
        return prefsInt.value > value;
    }

    public string tag;

    private int value
    {
        get
        {
            return PlayerPrefs.GetInt(tag);
        }
        set
        {
            PlayerPrefs.SetInt(tag, value);
        }
    }

    public PrefsInt(string _tag)
    {
        tag = _tag;
    }
}

public struct PrefsFloat
{
    public static implicit operator float(PrefsFloat prefsFloat)
    {
        return prefsFloat.value;
    }

    public static PrefsFloat operator ^(PrefsFloat prefsFloat, float value)
    {
        prefsFloat.value = value;
        return prefsFloat;
    }

    public static bool operator ==(PrefsFloat prefsFloat, float value)
    {
        return prefsFloat.value == value;
    }

    public static bool operator !=(PrefsFloat prefsFloat, float value)
    {
        return prefsFloat.value != value;
    }

    public static bool operator <=(PrefsFloat prefsFloat, float value)
    {
        return prefsFloat.value <= value;
    }

    public static bool operator >=(PrefsFloat prefsFloat, float value)
    {
        return prefsFloat.value >= value;
    }

    public static bool operator <(PrefsFloat prefsFloat, float value)
    {
        return prefsFloat.value < value;
    }

    public static bool operator >(PrefsFloat prefsFloat, float value)
    {
        return prefsFloat.value > value;
    }

    public string tag;

    private float value
    {
        get
        {
            return PlayerPrefs.GetFloat(tag);
        }
        set
        {
            PlayerPrefs.SetFloat(tag, value);
        }
    }

    public PrefsFloat(string _tag)
    {
        tag = _tag;
    }
}

public struct PrefsString
{
    public static implicit operator string(PrefsString prefsString)
    {
        return prefsString.value;
    }

    public static PrefsString operator ^(PrefsString prefsString, string value)
    {
        prefsString.value = value;
        return prefsString;
    }

    public static bool operator ==(PrefsString prefsString, string value)
    {
        return prefsString.value == value;
    }

    public static bool operator !=(PrefsString prefsString, string value)
    {
        return prefsString.value != value;
    }

    public string tag;

    private string value
    {
        get
        {
            return PlayerPrefs.GetString(tag);
        }
        set
        {
            PlayerPrefs.SetString(tag, value);
        }
    }

    public PrefsString(string _tag)
    {
        tag = _tag;
    }
}
