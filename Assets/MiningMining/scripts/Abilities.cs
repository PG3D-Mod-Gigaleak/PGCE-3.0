using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class AbilityPrefs
{
    public static int GetActiveAbilityLevel(string ability)
    {
        return PlayerPrefs.GetInt("Ability" + ability);
    }
}

public class AbilityData
{
    public static List<Ability> AbilitiesInGame
    {
        get
        {
            if (_abilities == null)
            {
                InitAbilities();
            }
            return _abilities;
        }
    }

    public static List<GlobalUpgrade> GlobalUpgradesInGame
    {
        get
        {
            if (_gUpgrades == null)
            {
                InitAbilities();
            }
            return _gUpgrades;
        }
    }

    public static void InitAbilities()
    {
        _gUpgrades = new List<GlobalUpgrade>();
        _abilities = new List<Ability>();

        List<List<AbilityUpgrade>> upgrades = new List<List<AbilityUpgrade>>
        {
            new List<AbilityUpgrade>
            {
                new AbilityUpgrade(4f, -2f, new ResourceBuy { Stone = 200, Iron = 50 } ),
                new AbilityUpgrade(5f, -1.5f, new ResourceBuy { Stone = 750, Gold = 75 } ),
                new AbilityUpgrade(6f, -1f, new ResourceBuy { Stone = 3000, Ruby = 75 } ),
                new AbilityUpgrade(7f, -0.75f, new ResourceBuy { Stone = 10000, Diamond = 175 } )
            },

            new List<AbilityUpgrade>
            {
                new AbilityUpgrade(3f, -1.5f, new ResourceBuy { Iron = 375, Stone = 1000 } ),
                new AbilityUpgrade(3.5f, -1.25f, new ResourceBuy { Iron = 750, Ruby = 175 } ),
                new AbilityUpgrade(4f, -1f, new ResourceBuy { Iron = 2000, Diamond = 150 } ),
                new AbilityUpgrade(5f, -0.75f, new ResourceBuy { Iron = 5000, RGB = 50 } )
            },

            new List<AbilityUpgrade>
            {
                new AbilityUpgrade(4f, -4f, new ResourceBuy { Ruby = 500, Stone = 7500 } ),
                new AbilityUpgrade(5f, -3.5f, new ResourceBuy { Emerald = 750, Stone = 37500 } ),
                new AbilityUpgrade(7f, -3f, new ResourceBuy { Sapphire = 2000, Stone = 87500 } ),
                new AbilityUpgrade(8.5f, -2.5f, new ResourceBuy { Diamond = 1000, Void = 125 } )
            },

            new List<AbilityUpgrade>
            {
                new AbilityUpgrade(0.2f, -9f, new ResourceBuy { RGB = 750, Ultramatter = 25 }),
                new AbilityUpgrade(0.3f, -10f, new ResourceBuy { Antimatter = 200, Ultramatter = 100 } ),
                new AbilityUpgrade(0.35f, -11f, new ResourceBuy { Antimatter = 1000, Ultramatter = 500 } ),
                new AbilityUpgrade(0.4f, -12f, new ResourceBuy { Antimatter = 3000, Ultramatter = 1500 } ),
                new AbilityUpgrade(1f, -20f, new ResourceBuy { Antimatter = 10000, Ultramatter = 7500 } )
            },
        };

        _abilities.Add(new Ability("Smash", "Deliver a crushing blow to an ore, dealing {damage} damage! (cooldown: {cooldown})", 5, new ResourceBuy { Stone = 50, Coal = 35 }, upgrades[0], 15f, 20f));
        _abilities.Add(new Ability("Sweep", "Hit all rocks in front of you, dealing {damage} damage! (cooldown: {cooldown})", 25, new ResourceBuy { Iron = 175, Gold = 75 }, upgrades[1], 8f, 15f));
        _abilities.Add(new Ability("Shockwave", "Smash the ground and spawn a shockwave that does {damage} damage to all nearby ores! (cooldown: {cooldown})", 45, new ResourceBuy { Ruby = 125, Emerald = 75 }, upgrades[2], 10f, 45f));
        _abilities.Add(new Ability("Laser Beam", "Charge up and release a laser that lasts for 10 seconds and does {damage} per hit! (cooldown: {cooldown})", 75, new ResourceBuy { RGB = 500, Ultramatter = 5 }, upgrades[3], 0.5f, 80f));

        _gUpgrades.Add(new GlobalUpgrade("Global Damage", 0.02f, 100, 1, 1, "Mult_Damage"));
        _gUpgrades.Add(new GlobalUpgrade("Global Speed", 0.02f, 100, 1, 1, "Mult_Speed"));
        _gUpgrades.Add(new GlobalUpgrade("Experience Multiplier", 0.0025f, 100, 1, 1, "Mult_EXP"));
        _gUpgrades.Add(new GlobalUpgrade("Player Speed", 0.1f, 10, 2, 5, "Mult_WalkSpeed"));
    }

    private static List<Ability> _abilities;

    private static List<GlobalUpgrade> _gUpgrades;
}

public class Ability
{
    public ResourceBuy buy;

    public float damage, cooldown;

    public string name, description;

    public int lvlUnlock;

    public List<AbilityUpgrade> upgrades;

    public Ability(string nm, string desc, int lvlUn, ResourceBuy _buy, List<AbilityUpgrade> upg, float dmg, float cldn)
    {
        name = nm;
        description = desc;
        lvlUnlock = lvlUn;
        buy = _buy;
        upgrades = upg;
        damage = dmg;
        cooldown = cldn;
    }
}

public class AbilityUpgrade
{
    public float damage, cooldown;

    public ResourceBuy upgrades;

    public AbilityUpgrade(float dmg, float cldn, ResourceBuy upgs)
    {
        upgrades = upgs;
        damage = dmg;
        cooldown = cldn;
    }
}

public class GlobalUpgrade
{
    public string name, prefsTag;

    public float amount;

    public int levelCount, maxUpgrades, skillPointsPerUpgrade;

    public GlobalUpgrade(string nm, float amt, int maxUpg, int sppu, int lvlCount, string prefs)
    {
        amount = amt;
        maxUpgrades = maxUpg;
        skillPointsPerUpgrade = sppu;
        name = nm;
        levelCount = lvlCount;
        prefsTag = prefs;
    }

    public bool Buy()
    {
        if (ExperienceController.SkillPoints < skillPointsPerUpgrade)
        {
            return false;
        }
        ExperienceController.SkillPoints -= skillPointsPerUpgrade;
        return true;
    }

    public void Upgrade()
    {
        if (PlayerPrefs.GetInt("AbilityUpgradeIndex_" + name) >= maxUpgrades)
        {
            return;
        }
        if (!Buy())
        {
            return;
        }
        PlayerPrefs.SetInt("AbilityUpgradeIndex_" + name, PlayerPrefs.GetInt("AbilityUpgradeIndex_" + name) + 1);
        PlayerPrefs.SetFloat(prefsTag, PlayerPrefs.GetFloat(prefsTag) + amount);
    }
}

public class PassivePrefs
{
    public static float DamageMult
    {
        get
        {
            return PlayerPrefs.GetFloat("Mult_Damage");
        }
        set
        {
            PlayerPrefs.SetFloat("Mult_Damage", value);
        }
    }

    public static float SpeedMult
    {
        get
        {
            return PlayerPrefs.GetFloat("Mult_Speed");
        }
        set
        {
            PlayerPrefs.SetFloat("Mult_Speed", value);
        }
    }

    public static float ExperienceMult
    {
        get
        {
            return PlayerPrefs.GetFloat("Mult_EXP");
        }
        set
        {
            PlayerPrefs.SetFloat("Mult_EXP", value);
        }
    }
    
    public static float WalkSpeedMult
    {
        get
        {
            return PlayerPrefs.GetFloat("Mult_WalkSpeed");
        }
        set
        {
            PlayerPrefs.SetFloat("Mult_WalkSpeed", value);
        }
    }
}