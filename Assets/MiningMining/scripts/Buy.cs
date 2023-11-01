using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ResourceBuy
{
    public int Stone, Coal, Iron, Gold, Amethyst, Ruby, Emerald, Sapphire, Diamond, RGB, Void, Antimatter, Ultramatter;

    private int ResourceByIndex(int index)
    {
        switch (index)
        {
            case 1:
                return Coal;
            case 2:
                return Iron;
            case 3:
                return Gold;
            
            case 4:
                return Amethyst;
            case 5:
                return Ruby;
            case 6:
                return Emerald;
            case 7:
                return Sapphire;
            case 8:
                return Diamond;
                
            case 9:
                return RGB;
            case 10:
                return Void;
            case 11:
                return Antimatter;
            case 12:
                return Ultramatter;

            default:
                return Stone;
        }
    }

    public bool Buy()
    {
        List<BuyOperation> successfulOperations = new List<BuyOperation>();
        foreach (BuyOperation operation in operations)
        {
            if (operation.price > PlayerPrefs.GetInt(operation.prefsTag))
            {
                return false;
            }
            successfulOperations.Add(operation);
        }
        foreach (BuyOperation successfulOperation in successfulOperations)
        {
            PlayerPrefs.SetInt(successfulOperation.prefsTag, PlayerPrefs.GetInt(successfulOperation.prefsTag) - successfulOperation.price);
        }
        return true;
    }

    public List<BuyOperation> operations
    {
        get
        {
            List<BuyOperation> _operations = new List<BuyOperation>();
            for (int i = 0; i < 13; i++)
            {
                if (ResourceByIndex(i) > 0)
                {
                    _operations.Add(new BuyOperation("Resource" + i, ResourceByIndex(i)));
                }
            }
            return _operations;
        }
    }
}

public class PickaxeUpgrades
{
    public List<DamageUpgrade> damageUpgrades = new List<DamageUpgrade>();

    public List<SpeedUpgrade> speedUpgrades = new List<SpeedUpgrade>();

    public List<BlockDropUpgrade> blockDropUpgrades = new List<BlockDropUpgrade>();

    public PickaxeUpgrades(List<DamageUpgrade> damage, List<SpeedUpgrade> speed, List<BlockDropUpgrade> blockDrop)
    {
        damageUpgrades = damage;
        speedUpgrades = speed;
        blockDropUpgrades = blockDrop;
    }
}

public class BuyOperation
{
    public string prefsTag;

    public int price;

    public BuyOperation(string prefs, int prc)
    {
        this.prefsTag = prefs;
        this.price = prc;
    }
}

public class DamageUpgrade
{
    public float damage;

    public ResourceBuy buy;

    public DamageUpgrade(float dmg, ResourceBuy _buy)
    {
        damage = dmg;
        buy = _buy;
    }
}

public class SpeedUpgrade
{
    public float speed;

    public ResourceBuy buy;

    public SpeedUpgrade(float spd, ResourceBuy _buy)
    {
        speed = spd;
        buy = _buy;
    }
}

public class BlockDropUpgrade
{
    public int blockDrop;

    public ResourceBuy buy;

    public BlockDropUpgrade(int bkd, ResourceBuy _buy)
    {
        blockDrop = bkd;
        buy = _buy;
    }
}
