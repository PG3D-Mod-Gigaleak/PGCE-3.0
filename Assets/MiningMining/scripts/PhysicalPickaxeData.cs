using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class PickaxeData
{
    public static List<Pickaxe> PickaxesInGame
    {
        get
        {
            if (_pickaxeData == null)
            {
                InitPickaxe();
            }
            return _pickaxeData;
        }
    }

    private static PhysicalPickaxeData _PPD;

    private static List<Pickaxe> _pickaxeData;

    public static Material GetResourceMat(PickaxeResource resource)
    {
        return _PPD.pickaxeMats[(int)resource];
    }

    public static Sprite GetResourceSprite(PickaxeResource resource)
    {
        return _PPD.buySprites[(int)resource];
    }

    public static Pickaxe PickaxeByResource(PickaxeResource resource)
    {
        return PickaxesInGame[(int)resource];
    }

    public static void InitPickaxe()
    {
        _PPD = GameObject.FindGameObjectWithTag("PhysicalPickaxeData").GetComponent<PhysicalPickaxeData>();
        _pickaxeData = new List<Pickaxe>();

        List<PickaxeUpgrades> _upgrades = new List<PickaxeUpgrades>
        {
            new PickaxeUpgrades
            (
                new List<DamageUpgrade> { new DamageUpgrade(2, new ResourceBuy { Stone = 3, Coal = 3 }), new DamageUpgrade(3, new ResourceBuy { Stone = 5, Coal = 7 }) }, 
                new List<SpeedUpgrade> { new SpeedUpgrade(0.1f, new ResourceBuy { Stone = 5, Coal = 2 }), new SpeedUpgrade(0.05f, new ResourceBuy{ Stone = 7, Coal = 3 }) },
                new List<BlockDropUpgrade> { new BlockDropUpgrade(1, new ResourceBuy{ Stone = 5, Coal = 4 }) }
            ),

            new PickaxeUpgrades
            (
                new List<DamageUpgrade> { new DamageUpgrade(7, new ResourceBuy { Iron = 10, Coal = 20 }), new DamageUpgrade(10, new ResourceBuy { Iron = 25, Coal = 40 }) }, 
                new List<SpeedUpgrade> { new SpeedUpgrade(0.12f, new ResourceBuy { Iron = 10, Coal = 35 }), new SpeedUpgrade(0.07f, new ResourceBuy{ Iron = 15, Coal = 65 }) },
                new List<BlockDropUpgrade> { new BlockDropUpgrade(1, new ResourceBuy{ Iron = 35, Coal = 30 }), new BlockDropUpgrade(1, new ResourceBuy{ Iron = 175, Coal = 45 }) }
            ),

            new PickaxeUpgrades
            (
                new List<DamageUpgrade> { new DamageUpgrade(17, new ResourceBuy { Gold = 25, Coal = 40 }), new DamageUpgrade(27, new ResourceBuy { Gold = 50, Coal = 60 }) }, 
                new List<SpeedUpgrade> { new SpeedUpgrade(0.14f, new ResourceBuy { Gold = 10, Coal = 75 }), new SpeedUpgrade(0.1f, new ResourceBuy{ Gold = 25, Coal = 145 }) },
                new List<BlockDropUpgrade> { new BlockDropUpgrade(2, new ResourceBuy{ Gold = 85, Coal = 30 }), new BlockDropUpgrade(1, new ResourceBuy{ Gold = 150, Coal = 45 }) }
            ),

            new PickaxeUpgrades
            (
                new List<DamageUpgrade> { new DamageUpgrade(47, new ResourceBuy { Amethyst = 55, Coal = 180 }), new DamageUpgrade(62, new ResourceBuy { Amethyst = 90, Coal = 250 }) }, 
                new List<SpeedUpgrade> { new SpeedUpgrade(0.4f, new ResourceBuy { Amethyst = 10, Coal = 375 }), new SpeedUpgrade(0.5f, new ResourceBuy{ Amethyst = 25, Coal = 445 }) },
                new List<BlockDropUpgrade> { new BlockDropUpgrade(2, new ResourceBuy{ Amethyst = 100, Coal = 70 }), new BlockDropUpgrade(1, new ResourceBuy{ Amethyst = 250, Coal = 85 }) }
            ),

            new PickaxeUpgrades
            (
                new List<DamageUpgrade> { new DamageUpgrade(76, new ResourceBuy { Ruby = 65, Coal = 180 }), new DamageUpgrade(90, new ResourceBuy { Ruby = 90, Coal = 250 }) }, 
                new List<SpeedUpgrade> { new SpeedUpgrade(0.6f, new ResourceBuy { Ruby = 15, Coal = 500 }), new SpeedUpgrade(0.7f, new ResourceBuy{ Ruby = 35, Coal = 785 }) },
                new List<BlockDropUpgrade> { new BlockDropUpgrade(2, new ResourceBuy{ Ruby = 200, Coal = 170 }), new BlockDropUpgrade(2, new ResourceBuy{ Ruby = 350, Coal = 245 }) }
            ),

            new PickaxeUpgrades
            (
                new List<DamageUpgrade> { new DamageUpgrade(128, new ResourceBuy { Emerald = 85, Coal = 280 }), new DamageUpgrade(205, new ResourceBuy { Emerald = 120, Coal = 450 }) }, 
                new List<SpeedUpgrade> { new SpeedUpgrade(0.65f, new ResourceBuy { Emerald = 35, Coal = 1500 }), new SpeedUpgrade(0.75f, new ResourceBuy{ Emerald = 55, Coal = 2220 }) },
                new List<BlockDropUpgrade> { new BlockDropUpgrade(3, new ResourceBuy{ Emerald = 300, Coal = 270 }), new BlockDropUpgrade(2, new ResourceBuy{ Emerald = 550, Coal = 345 }) }
            ),

            new PickaxeUpgrades
            (
                new List<DamageUpgrade> { new DamageUpgrade(358, new ResourceBuy { Sapphire = 125, Coal = 420 }), new DamageUpgrade(405, new ResourceBuy { Sapphire = 175, Coal = 670 }) }, 
                new List<SpeedUpgrade> { new SpeedUpgrade(0.7f, new ResourceBuy { Sapphire = 55, Coal = 2500 }), new SpeedUpgrade(0.8f, new ResourceBuy{ Sapphire = 75, Coal = 3430 }) },
                new List<BlockDropUpgrade> { new BlockDropUpgrade(5, new ResourceBuy{ Sapphire = 500, Coal = 370 }), new BlockDropUpgrade(6, new ResourceBuy{ Sapphire = 750, Coal = 545 }) }
            ),

            new PickaxeUpgrades
            (
                new List<DamageUpgrade> { new DamageUpgrade(759, new ResourceBuy { Diamond = 105, Coal = 720 }), new DamageUpgrade(907, new ResourceBuy { Diamond = 125, Coal = 1270 }) }, 
                new List<SpeedUpgrade> { new SpeedUpgrade(1f, new ResourceBuy { Diamond = 35, Coal = 5500 }), new SpeedUpgrade(1.2f, new ResourceBuy{ Diamond = 55, Coal = 7430 }) },
                new List<BlockDropUpgrade> { new BlockDropUpgrade(6, new ResourceBuy{ Diamond = 500, Coal = 1370 }), new BlockDropUpgrade(8, new ResourceBuy{ Diamond = 900, Coal = 1745 }) }
            ),

            new PickaxeUpgrades
            (
                new List<DamageUpgrade> { new DamageUpgrade(3500, new ResourceBuy { RGB = 70, Diamond = 1000 }), new DamageUpgrade(4575, new ResourceBuy { RGB = 100, Diamond = 1570 }),  new DamageUpgrade(7575, new ResourceBuy { RGB = 200, Diamond = 2570 })}, 
                new List<SpeedUpgrade> { new SpeedUpgrade(2f, new ResourceBuy { RGB = 50, Diamond = 2500 }), new SpeedUpgrade(3f, new ResourceBuy{ RGB = 75, Diamond = 3430 }), new SpeedUpgrade(4f, new ResourceBuy{ RGB = 125, Diamond = 4430 }) },
                new List<BlockDropUpgrade> { new BlockDropUpgrade(7, new ResourceBuy{ RGB = 800, Diamond = 1570 }), new BlockDropUpgrade(12, new ResourceBuy{ RGB = 1000, Diamond = 1945 }), new BlockDropUpgrade(20, new ResourceBuy{ RGB = 1500, Diamond = 2945 }) }
            ),

            new PickaxeUpgrades
            (
                new List<DamageUpgrade> { new DamageUpgrade(12500, new ResourceBuy { Void = 50, Diamond = 1750 }), new DamageUpgrade(28575, new ResourceBuy { Void = 75, Diamond = 2170 }),  new DamageUpgrade(32575, new ResourceBuy { Void = 150, Diamond = 3570 })}, 
                new List<SpeedUpgrade> { new SpeedUpgrade(4f, new ResourceBuy { Void = 45, Diamond = 4500 }), new SpeedUpgrade(5f, new ResourceBuy{ Void = 65, Diamond = 5430 }), new SpeedUpgrade(5.5f, new ResourceBuy{ Void = 95, Diamond = 6430 }) },
                new List<BlockDropUpgrade> { new BlockDropUpgrade(12, new ResourceBuy{ Void = 500, Diamond = 1970 }), new BlockDropUpgrade(15, new ResourceBuy{ Void = 700, Diamond = 2345 }), new BlockDropUpgrade(20, new ResourceBuy{ Void = 900, Diamond = 3545 }) }
            ),

            new PickaxeUpgrades
            (
                new List<DamageUpgrade> { new DamageUpgrade(27500, new ResourceBuy { Antimatter = 250, Void = 1050 }), new DamageUpgrade(38575, new ResourceBuy { Antimatter = 375, Void = 1750 }),  new DamageUpgrade(42575, new ResourceBuy { Antimatter = 550, Diamond = 3570 })}, 
                new List<SpeedUpgrade> { new SpeedUpgrade(4f, new ResourceBuy { Antimatter = 145, Diamond = 5500 }), new SpeedUpgrade(4f, new ResourceBuy{ Antimatter = 265, Diamond = 6430 }), new SpeedUpgrade(5f, new ResourceBuy{ Antimatter = 395, Diamond = 7430 }) },
                new List<BlockDropUpgrade> { new BlockDropUpgrade(25, new ResourceBuy{ Antimatter = 700, Diamond = 3970 }), new BlockDropUpgrade(35, new ResourceBuy{ Antimatter = 900, Diamond = 5345 }), new BlockDropUpgrade(55, new ResourceBuy{ Antimatter = 1100, Diamond = 7545 }) }
            ),

            new PickaxeUpgrades
            (
                new List<DamageUpgrade> { new DamageUpgrade(37500, new ResourceBuy { Ultramatter = 450, Antimatter = 1250 }), new DamageUpgrade(58575, new ResourceBuy { Ultramatter = 575, Antimatter = 2750 }),  new DamageUpgrade(72575, new ResourceBuy { Ultramatter = 850, Antimatter = 3570 }), new DamageUpgrade(152575, new ResourceBuy { Ultramatter = 1750, Antimatter = 7570 })}, 
                new List<SpeedUpgrade> { new SpeedUpgrade(6f, new ResourceBuy { Ultramatter = 245, Antimatter = 2500 }), new SpeedUpgrade(7f, new ResourceBuy{ Ultramatter = 375, Antimatter = 3430 }), new SpeedUpgrade(8f, new ResourceBuy{ Ultramatter = 595, Antimatter = 5430 }), new SpeedUpgrade(12f, new ResourceBuy{ Ultramatter = 895, Antimatter = 9430 })},
                new List<BlockDropUpgrade> { new BlockDropUpgrade(75, new ResourceBuy{ Ultramatter = 1200, Antimatter = 970 }), new BlockDropUpgrade(125, new ResourceBuy{ Ultramatter = 1500, Antimatter = 1275 }), new BlockDropUpgrade(250, new ResourceBuy{ Ultramatter = 2000, Antimatter = 1725 }), new BlockDropUpgrade(575, new ResourceBuy{ Ultramatter = 5000, Antimatter = 4000 })}
            ),
        };

        _pickaxeData.Add(new Pickaxe(PickaxeResource.Stone, 10f, 1f, 1, "Stone Pickaxe", null, _upgrades[0]));
        _pickaxeData.Add(new Pickaxe(PickaxeResource.Iron, 25f, 1.2f, 2, "Iron Pickaxe", new ResourceBuy { Coal = 5, Iron = 10 }, _upgrades[1]));
        _pickaxeData.Add(new Pickaxe(PickaxeResource.Gold, 50f, 1.5f, 3, "Golden Pickaxe", new ResourceBuy { Stone = 250, Gold = 50 }, _upgrades[2]));
        _pickaxeData.Add(new Pickaxe(PickaxeResource.Amethyst, 100f, 1.6f, 5, "Amethyst Pickaxe", new ResourceBuy { Iron = 125, Amethyst = 50 }, _upgrades[3]));
        _pickaxeData.Add(new Pickaxe(PickaxeResource.Ruby, 250f, 1.7f, 7, "Ruby Pickaxe", new ResourceBuy { Gold = 200, Ruby = 75 }, _upgrades[4]));
        _pickaxeData.Add(new Pickaxe(PickaxeResource.Emerald, 500f, 2f, 10, "Emerald Pickaxe", new ResourceBuy { Coal = 700, Emerald = 150 }, _upgrades[5]));
        _pickaxeData.Add(new Pickaxe(PickaxeResource.Sapphire, 1000f, 2.5f, 15, "Sapphire Pickaxe", new ResourceBuy { Amethyst = 1000, Sapphire = 250 }, _upgrades[6]));
        _pickaxeData.Add(new Pickaxe(PickaxeResource.Diamond, 2500f, 3f, 25, "Diamond Pickaxe", new ResourceBuy { Stone = 10000, Diamond = 350 }, _upgrades[7]));
        _pickaxeData.Add(new Pickaxe(PickaxeResource.RGB, 7500f, 4f, 50, "Rainbow Pickaxe", new ResourceBuy { Diamond = 1250, RGB = 250 }, _upgrades[8]));
        _pickaxeData.Add(new Pickaxe(PickaxeResource.Void, 20000f, 6f, 125, "Void Pickaxe", new ResourceBuy { Amethyst = 7500, Void = 750 }, _upgrades[9]));
        _pickaxeData.Add(new Pickaxe(PickaxeResource.Antimatter, 50000f, 9f, 250, "Anti-Pickaxe", new ResourceBuy { Void = 2500, Antimatter = 500 }, _upgrades[10]));
        _pickaxeData.Add(new Pickaxe(PickaxeResource.UltraMatter, 150000f, 15f, 750, "Ultra-Pickaxe", new ResourceBuy { Antimatter = 5000, Ultramatter = 5000 }, _upgrades[11]));
    }

    public static Pickaxe CurrentPickaxe
    {
        get
        {
            return PickaxesInGame[PlayerPrefs.GetInt("CurPickaxe")];
        }
        set
        {
            PlayerPrefs.SetInt("CurPickaxe", (int)CurrentPickaxe.Resource);
        }
    }
}

public class PhysicalPickaxeData : MonoBehaviour
{
    public Material[] pickaxeMats;

    public Sprite[] buySprites;
}

public class Pickaxe
{
    public Pickaxe(PickaxeResource resource, float damage, float speed, int blockDrop, string name, ResourceBuy buy, PickaxeUpgrades upgrades)
    {
        _dmg = damage;
        _spd = speed;
        _blkDrp = blockDrop;
        _rsrc = resource;
        _nm = name;
        _buy = buy;
        _upgrades = upgrades;
    }

    public float Damage
    {
        get
        {
            return (_dmg + PlayerPrefs.GetFloat("Damage_Pickaxe" + (int)_rsrc)) * (1 + PassivePrefs.DamageMult);
        }
        set
        {
            PlayerPrefs.SetFloat("Damage_Pickaxe" + (int)_rsrc, value - _dmg);
        }
    }

    public float Speed
    {
        get
        {
            return Mathf.Clamp((_spd + PlayerPrefs.GetFloat("Speed_Pickaxe" + (int)_rsrc)) * (1 + PassivePrefs.SpeedMult), 0f, 40f);
        }
        set
        {
            PlayerPrefs.SetFloat("Speed_Pickaxe" + (int)_rsrc, value - _spd);
        }
    }

    public int BlockDrop
    {
        get
        {
            return _blkDrp + PlayerPrefs.GetInt("BlockDrop_Pickaxe" + (int)_rsrc);
        }
        set
        {
            PlayerPrefs.SetInt("BlockDrop_Pickaxe" + (int)_rsrc, value - _blkDrp);
        }
    }

    public ResourceBuy Buy
    {
        get
        {
            return _buy;
        }
    }

    public PickaxeResource Resource
    {
        get
        {
            return _rsrc;
        }
    }

    public string Name
    {
        get
        {
            return _nm;
        }
        set
        {
            _nm = value;
        }
    }

    public PickaxeUpgrades Upgrades
    {
        get
        {
            return _upgrades;
        }
    }

    private float _dmg, _spd;

    private int _blkDrp;

    private string _nm;

    private PickaxeResource _rsrc;

    private ResourceBuy _buy;

    private PickaxeUpgrades _upgrades;
}
