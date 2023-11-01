using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class UIController : MonoBehaviour
{
    public void OpenPickaxeMenu()
    {
        StartCoroutine(openPickMenu());
    }

    public void ClosePickaxeMenu()
    {
        StartCoroutine(closePickMenu());
    }

    public void OpenAbilityMenu()
    {
        StartCoroutine(openAbilityMenu());
    }

    public void CloseAbilityMenu()
    {
        StartCoroutine(closeAbilityMenu());
    }

    public void NextPick()
    {
        if (moving)
        {
            return;
        }
        if (PlayerPrefs.GetInt("PickaxeUIIndex") == PickaxeData.PickaxesInGame.Count - 1)
        {
            StartCoroutine(SwitchPick(0));
            return;
        }
        StartCoroutine(SwitchPick(PlayerPrefs.GetInt("PickaxeUIIndex") + 1));
    }

    public void LastPick()
    {
        if (moving)
        {
            return;
        }
        if (PlayerPrefs.GetInt("PickaxeUIIndex") == 0)
        {
            StartCoroutine(SwitchPick(PickaxeData.PickaxesInGame.Count - 1));
            return;
        }
        StartCoroutine(SwitchPick(PlayerPrefs.GetInt("PickaxeUIIndex") - 1));
    }

    public object CurrentSelectedObject
    {
        get
        {
            return CurrentSelectedObjectByIndex(PlayerPrefs.GetInt("AbilityUIIndex"));
        }
    }

    public object CurrentSelectedObjectByIndex(int index)
    {
        object moment = default(object);
        if (index > AbilityData.GlobalUpgradesInGame.Count - 1)
        {
            moment = AbilityData.AbilitiesInGame[index - AbilityData.GlobalUpgradesInGame.Count];
        }
        else
        {
            moment = AbilityData.GlobalUpgradesInGame[index];
        }
        return moment;
    }

    private bool menuOpen, moving, abilityMenuOpen;

    public TextMeshProUGUI picknameLabel;

    public TextMeshProUGUI dmgCur, spdCur, bkdCur, dmgMenu, spdMenu, bkdMenu, pickPrice1, pickPrice2, dmgPrice1, dmgPrice2, spdPrice1, spdPrice2, bkdPrice1, bkdPrice2;

    public TextMeshProUGUI lvl, sp, spPrice, abilityPrice1, abilityPrice2, abilityName, abilityUpgradeCount, expCount, levelCount;

    public Image iconSidebar;

    public GameObject passive, active;

    public Image[] abilityButtons;

    public Sprite[] cachedSpritesForUnlock;

    public Sprite LockedAbility;

    public List<GameObject> mobileOnlyLayers;

    public void CheckDisableMobileLayers()
    {
        if (Application.isMobilePlatform)
        {
            return;
        }
        foreach (GameObject mobileOnlyLayer in mobileOnlyLayers)
        {
            mobileOnlyLayer.SetActive(false);
        }
    }

    public void RefreshAbilityButtons()
    {
        for (int i = 0; i < abilityButtons.Length; i++)
        {
            if (CurrentSelectedObjectByIndex(i) is Ability)
            {
                if (ExperienceController.CurrentLevel < (CurrentSelectedObjectByIndex(i) as Ability).lvlUnlock)
                {
                    abilityButtons[i].sprite = LockedAbility;
                    abilityButtons[i].GetComponent<Button>().enabled = false;
                }
                else
                {
                    abilityButtons[i].sprite = cachedSpritesForUnlock[i];
                    abilityButtons[i].GetComponent<Button>().enabled = true;
                }
            }
        }
    }

    public void SelectObject(int index)
    {
        if (CurrentSelectedObjectByIndex(index) is Ability)
        {
            passive.SetActive(false);
            active.SetActive(true);
            iconSidebar.sprite = cachedSpritesForUnlock[index];
            PlayerPrefs.SetInt("AbilityUIIndex", index);
        }
        else
        {
            passive.SetActive(true);
            active.SetActive(false);
            iconSidebar.sprite = cachedSpritesForUnlock[index];
            PlayerPrefs.SetInt("AbilityUIIndex", index);
        }
        RefreshAbilityButtons();
        RefreshAbilityLabels();
        RefreshAbilityIcons();
    }

    public void UpgradeCurrent()
    {
        if (CurrentSelectedObject is GlobalUpgrade)
        {
            (CurrentSelectedObject as GlobalUpgrade).Upgrade();
            RefreshUI();
            return;
        }
    }

    public void RefreshUI()
    {
        RefreshAbilityButtons();
        RefreshAbilityLabels();
        RefreshAbilityIcons();
        RefreshIcons();
        RefreshLabels();
    }

    public void RefreshAbilityLabels()
    {
        lvl.text = "" + ExperienceController.CurrentLevel;
        sp.text = "" + ExperienceController.SkillPoints;
        if (CurrentSelectedObject is Ability)
        {
            Ability ability = CurrentSelectedObject as Ability;
            abilityPrice1.text = "" + ability.upgrades[PlayerPrefs.GetInt("AbilityUpgradeIndex_" + PlayerPrefs.GetInt("AbilityUIIndex"))].upgrades.operations[0].price;
            abilityPrice2.text = "" + ability.upgrades[PlayerPrefs.GetInt("AbilityUpgradeIndex_" + PlayerPrefs.GetInt("AbilityUIIndex"))].upgrades.operations[1].price;
            abilityName.text = ability.name;
        }
        else
        {
            GlobalUpgrade upgrade = CurrentSelectedObject as GlobalUpgrade;
            spPrice.text = "" + upgrade.skillPointsPerUpgrade;
            abilityName.text = upgrade.name;
            abilityUpgradeCount.text = "" + PlayerPrefs.GetInt("AbilityUpgradeIndex_" + upgrade.name) + "/" + upgrade.maxUpgrades;
        }
    }

    public void RefreshAbilityIcons()
    {
        if (PlayerPrefs.GetInt("AbilityUIIndex") > AbilityData.GlobalUpgradesInGame.Count - 1)
        {
            abilityBuy1.sprite = PickaxeData.GetResourceSprite((PickaxeResource)int.Parse(AbilityData.AbilitiesInGame[PlayerPrefs.GetInt("AbilityUIIndex") - AbilityData.GlobalUpgradesInGame.Count].buy.operations[0].prefsTag.Substring(8)));
            abilityBuy2.sprite = PickaxeData.GetResourceSprite((PickaxeResource)int.Parse(AbilityData.AbilitiesInGame[PlayerPrefs.GetInt("AbilityUIIndex") - AbilityData.GlobalUpgradesInGame.Count].buy.operations[1].prefsTag.Substring(8)));
        }
    }

    public void test(string Product)
    {
        Debug.LogError(Product);
    }

    public void test(string Product, string PurchaseFailureReason)
    {
        Debug.LogError(Product + " " + PurchaseFailureReason);
    }

    public void PickMenu()
    {
        if (moving)
        {
            return;
        }
        menuOpen = !menuOpen;
        if (menuOpen)
        {
            OpenPickaxeMenu();
            return;
        }
        ClosePickaxeMenu();
    }

    public void BuyPick()
    {
        if (moving)
        {
            return;
        }
        if (!PickaxeData.PickaxesInGame[PlayerPrefs.GetInt("PickaxeUIIndex")].Buy.Buy())
        {
            Debug.LogError("could not buy");
            return;
        }
        PlayerPrefs.SetInt("UnlockedPickaxe" + PlayerPrefs.GetInt("PickaxeUIIndex"), 1);
        PlayerPrefs.SetInt("CurPickaxe", PlayerPrefs.GetInt("PickaxeUIIndex"));
        SetBuyLayers(PlayerPrefs.GetInt("UnlockedPickaxe" + PlayerPrefs.GetInt("PickaxeUIIndex")) == 1 || PickaxeData.PickaxesInGame[PlayerPrefs.GetInt("PickaxeUIIndex")].Buy == null);
        RefreshIcons();
        RefreshLabels();
        SetUpgradeData(PickaxeData.PickaxesInGame[PlayerPrefs.GetInt("PickaxeUIIndex")].Upgrades);
    }

    public void EquipPick()
    {
        if (moving)
        {
            return;
        }
        if (PlayerPrefs.GetInt("UnlockedPickaxe" + PlayerPrefs.GetInt("PickaxeUIIndex")) == 0 && PickaxeData.PickaxesInGame[PlayerPrefs.GetInt("PickaxeUIIndex")].Buy != null)
        {
            return;
        }
        PlayerPrefs.SetInt("CurPickaxe", PlayerPrefs.GetInt("PickaxeUIIndex"));
        RefreshIcons();
        RefreshLabels();
        SetUpgradeData(PickaxeData.PickaxesInGame[PlayerPrefs.GetInt("PickaxeUIIndex")].Upgrades);
    }

    void Start()
    {
        CheckDisableMobileLayers();
        RefreshIcons();
        RefreshLabels();
        SetUpgradeData(PickaxeData.PickaxesInGame[PlayerPrefs.GetInt("PickaxeUIIndex")].Upgrades);
        cachedSpritesForUnlock = (from button in abilityButtons select button.sprite).ToArray();
        SelectObject(PlayerPrefs.GetInt("AbilityUIIndex"));
    }

    void Update()
    {
        if (Input.GetKeyDown("e"))
        {
            PickMenu();
        }
        if (Input.GetKeyDown("q"))
        {
            AbilityMenu();
        }
        RefreshEXPLabels();
    }

    public void RefreshEXPLabels()
    {
        expCount.text = Mathf.Round(ExperienceController.CurrentExperience) + "/" + Mathf.Round(ExperienceController.NextLevelEXPRequired);
        levelCount.text = "" + ExperienceController.CurrentLevel;
    }

    public void AbilityMenu()
    {
        if (moving || menuOpen)
        {
            return;
        }
        abilityMenuOpen = !abilityMenuOpen;
        if (abilityMenuOpen)
        {
            OpenAbilityMenu();
            return;
        }
        CloseAbilityMenu();
    }

    public void RefreshIcons()
    {
        if (PickaxeData.PickaxesInGame[PlayerPrefs.GetInt("PickaxeUIIndex")].Buy != null)
        {
            buy1.sprite = PickaxeData.GetResourceSprite((PickaxeResource)int.Parse(PickaxeData.PickaxesInGame[PlayerPrefs.GetInt("PickaxeUIIndex")].Buy.operations[0].prefsTag.Substring(8)));
            buy2.sprite = PickaxeData.GetResourceSprite((PickaxeResource)int.Parse(PickaxeData.PickaxesInGame[PlayerPrefs.GetInt("PickaxeUIIndex")].Buy.operations[1].prefsTag.Substring(8)));
        }
    }

    public void SetUpgradeData(PickaxeUpgrades upgrades)
    {
        bool success = false;
        try
        {
            dmg1.sprite = PickaxeData.GetResourceSprite((PickaxeResource)int.Parse(PickaxeData.PickaxesInGame[PlayerPrefs.GetInt("PickaxeUIIndex")].Upgrades.damageUpgrades[PlayerPrefs.GetInt("UnlockedDamage" + PlayerPrefs.GetInt("PickaxeUIIndex"))].buy.operations[1].prefsTag.Substring(8)));
            dmg2.sprite = PickaxeData.GetResourceSprite((PickaxeResource)int.Parse(PickaxeData.PickaxesInGame[PlayerPrefs.GetInt("PickaxeUIIndex")].Upgrades.damageUpgrades[PlayerPrefs.GetInt("UnlockedDamage" + PlayerPrefs.GetInt("PickaxeUIIndex"))].buy.operations[0].prefsTag.Substring(8)));
            dmgPrice1.text = PickaxeData.PickaxesInGame[PlayerPrefs.GetInt("PickaxeUIIndex")].Upgrades.damageUpgrades[PlayerPrefs.GetInt("UnlockedDamage" + PlayerPrefs.GetInt("PickaxeUIIndex"))].buy.operations[1].price + "";
            dmgPrice2.text = PickaxeData.PickaxesInGame[PlayerPrefs.GetInt("PickaxeUIIndex")].Upgrades.damageUpgrades[PlayerPrefs.GetInt("UnlockedDamage" + PlayerPrefs.GetInt("PickaxeUIIndex"))].buy.operations[0].price + "";
            success = true;
        }
        catch
        {
            dmgBuyLayer.SetActive(false);
            dmgBoughtLayer.SetActive(true);
            success = false;
        }
        if (success)
        {
            dmgBuyLayer.SetActive(true);
            dmgBoughtLayer.SetActive(false);
        }
        try
        {
            spd1.sprite = PickaxeData.GetResourceSprite((PickaxeResource)int.Parse(PickaxeData.PickaxesInGame[PlayerPrefs.GetInt("PickaxeUIIndex")].Upgrades.speedUpgrades[PlayerPrefs.GetInt("UnlockedSpeed" + PlayerPrefs.GetInt("PickaxeUIIndex"))].buy.operations[1].prefsTag.Substring(8)));
            spd2.sprite = PickaxeData.GetResourceSprite((PickaxeResource)int.Parse(PickaxeData.PickaxesInGame[PlayerPrefs.GetInt("PickaxeUIIndex")].Upgrades.speedUpgrades[PlayerPrefs.GetInt("UnlockedSpeed" + PlayerPrefs.GetInt("PickaxeUIIndex"))].buy.operations[0].prefsTag.Substring(8)));
            spdPrice1.text = PickaxeData.PickaxesInGame[PlayerPrefs.GetInt("PickaxeUIIndex")].Upgrades.speedUpgrades[PlayerPrefs.GetInt("UnlockedSpeed" + PlayerPrefs.GetInt("PickaxeUIIndex"))].buy.operations[1].price + "";
            spdPrice2.text = PickaxeData.PickaxesInGame[PlayerPrefs.GetInt("PickaxeUIIndex")].Upgrades.speedUpgrades[PlayerPrefs.GetInt("UnlockedSpeed" + PlayerPrefs.GetInt("PickaxeUIIndex"))].buy.operations[0].price + "";
            success = true;
        }
        catch
        {
            spdBuyLayer.SetActive(false);
            spdBoughtLayer.SetActive(true);
            success = false;
        }
        if (success)
        {
            spdBuyLayer.SetActive(true);
            spdBoughtLayer.SetActive(false);
        }
        try
        {
            bld1.sprite = PickaxeData.GetResourceSprite((PickaxeResource)int.Parse(PickaxeData.PickaxesInGame[PlayerPrefs.GetInt("PickaxeUIIndex")].Upgrades.blockDropUpgrades[PlayerPrefs.GetInt("UnlockedBlockDrop" + PlayerPrefs.GetInt("PickaxeUIIndex"))].buy.operations[1].prefsTag.Substring(8)));
            bld2.sprite = PickaxeData.GetResourceSprite((PickaxeResource)int.Parse(PickaxeData.PickaxesInGame[PlayerPrefs.GetInt("PickaxeUIIndex")].Upgrades.blockDropUpgrades[PlayerPrefs.GetInt("UnlockedBlockDrop" + PlayerPrefs.GetInt("PickaxeUIIndex"))].buy.operations[0].prefsTag.Substring(8)));
            bkdPrice1.text = PickaxeData.PickaxesInGame[PlayerPrefs.GetInt("PickaxeUIIndex")].Upgrades.blockDropUpgrades[PlayerPrefs.GetInt("UnlockedBlockDrop" + PlayerPrefs.GetInt("PickaxeUIIndex"))].buy.operations[1].price + "";
            bkdPrice2.text = PickaxeData.PickaxesInGame[PlayerPrefs.GetInt("PickaxeUIIndex")].Upgrades.blockDropUpgrades[PlayerPrefs.GetInt("UnlockedBlockDrop" + PlayerPrefs.GetInt("PickaxeUIIndex"))].buy.operations[0].price + "";
            success = true;
        }
        catch
        {
            bkdBuyLayer.SetActive(false);
            bkdBoughtLayer.SetActive(true);
            success = false;
        }
        if (success)
        {
            bkdBuyLayer.SetActive(true);
            bkdBoughtLayer.SetActive(false);
        }
    }

    public void UpgradeDMG()
    {
        if (!PickaxeData.PickaxesInGame[PlayerPrefs.GetInt("PickaxeUIIndex")].Upgrades.damageUpgrades[PlayerPrefs.GetInt("UnlockedDamage" + PlayerPrefs.GetInt("PickaxeUIIndex"))].buy.Buy())
        {
            return;
        }
        
        PlayerPrefs.SetFloat("Damage_Pickaxe" + PlayerPrefs.GetInt("PickaxeUIIndex"), PlayerPrefs.GetFloat("Damage_Pickaxe" + PlayerPrefs.GetInt("PickaxeUIIndex")) + PickaxeData.PickaxesInGame[PlayerPrefs.GetInt("PickaxeUIIndex")].Upgrades.damageUpgrades[PlayerPrefs.GetInt("UnlockedDamage" + PlayerPrefs.GetInt("PickaxeUIIndex"))].damage);
        PlayerPrefs.SetInt("UnlockedDamage" + PlayerPrefs.GetInt("PickaxeUIIndex"), PlayerPrefs.GetInt("UnlockedDamage" + PlayerPrefs.GetInt("PickaxeUIIndex")) + 1);
        RefreshIcons();
        RefreshLabels();
        SetUpgradeData(PickaxeData.PickaxesInGame[PlayerPrefs.GetInt("PickaxeUIIndex")].Upgrades);
    }

    public void UpgradeSPD()
    {
        if (!PickaxeData.PickaxesInGame[PlayerPrefs.GetInt("PickaxeUIIndex")].Upgrades.speedUpgrades[PlayerPrefs.GetInt("UnlockedSpeed" + PlayerPrefs.GetInt("PickaxeUIIndex"))].buy.Buy())
        {
            return;
        }
        
        PlayerPrefs.SetFloat("Speed_Pickaxe" + PlayerPrefs.GetInt("PickaxeUIIndex"), PlayerPrefs.GetFloat("Speed_Pickaxe" + PlayerPrefs.GetInt("PickaxeUIIndex")) + PickaxeData.PickaxesInGame[PlayerPrefs.GetInt("PickaxeUIIndex")].Upgrades.speedUpgrades[PlayerPrefs.GetInt("UnlockedSpeed" + PlayerPrefs.GetInt("PickaxeUIIndex"))].speed);
        PlayerPrefs.SetInt("UnlockedSpeed" + PlayerPrefs.GetInt("PickaxeUIIndex"), PlayerPrefs.GetInt("UnlockedSpeed" + PlayerPrefs.GetInt("PickaxeUIIndex")) + 1);
        RefreshIcons();
        RefreshLabels();
        SetUpgradeData(PickaxeData.PickaxesInGame[PlayerPrefs.GetInt("PickaxeUIIndex")].Upgrades);
    }

    public void UpgradeBKD()
    {
        if (!PickaxeData.PickaxesInGame[PlayerPrefs.GetInt("PickaxeUIIndex")].Upgrades.blockDropUpgrades[PlayerPrefs.GetInt("UnlockedBlockDrop" + PlayerPrefs.GetInt("PickaxeUIIndex"))].buy.Buy())
        {
            return;
        }
        
        PlayerPrefs.SetInt("BlockDrop_Pickaxe" + PlayerPrefs.GetInt("PickaxeUIIndex"), PlayerPrefs.GetInt("BlockDrop_Pickaxe" + PlayerPrefs.GetInt("PickaxeUIIndex")) + PickaxeData.PickaxesInGame[PlayerPrefs.GetInt("PickaxeUIIndex")].Upgrades.blockDropUpgrades[PlayerPrefs.GetInt("UnlockedBlockDrop" + PlayerPrefs.GetInt("PickaxeUIIndex"))].blockDrop);
        PlayerPrefs.SetInt("UnlockedBlockDrop" + PlayerPrefs.GetInt("PickaxeUIIndex"), PlayerPrefs.GetInt("UnlockedBlockDrop" + PlayerPrefs.GetInt("PickaxeUIIndex")) + 1);
        RefreshIcons();
        RefreshLabels();
        SetUpgradeData(PickaxeData.PickaxesInGame[PlayerPrefs.GetInt("PickaxeUIIndex")].Upgrades);
    }

    public void RefreshLabels()
    {
        dmgCur.text = "" + PickaxeData.CurrentPickaxe.Damage;
        spdCur.text = "" + PickaxeData.CurrentPickaxe.Speed;
        bkdCur.text = "" + PickaxeData.CurrentPickaxe.BlockDrop;
        dmgMenu.text = "" + PickaxeData.PickaxesInGame[PlayerPrefs.GetInt("PickaxeUIIndex")].Damage;
        spdMenu.text = "" + PickaxeData.PickaxesInGame[PlayerPrefs.GetInt("PickaxeUIIndex")].Speed;
        bkdMenu.text = "" + PickaxeData.PickaxesInGame[PlayerPrefs.GetInt("PickaxeUIIndex")].BlockDrop;
        if (PickaxeData.PickaxesInGame[PlayerPrefs.GetInt("PickaxeUIIndex")].Buy != null)
        {
            pickPrice1.text = "" + PickaxeData.PickaxesInGame[PlayerPrefs.GetInt("PickaxeUIIndex")].Buy.operations[0].price;
            pickPrice2.text = "" + PickaxeData.PickaxesInGame[PlayerPrefs.GetInt("PickaxeUIIndex")].Buy.operations[1].price;
        }
    }

    public Transform pickMenu, pick, tabs, abilityMenu;

    public GameObject buyLayer, boughtLayer, dmgBuyLayer, dmgBoughtLayer, spdBuyLayer, spdBoughtLayer, bkdBuyLayer, bkdBoughtLayer;

    public Image buy1, buy2, dmg1, dmg2, spd1, spd2, bld1, bld2, abilityBuy1, abilityBuy2;

    private IEnumerator SwitchPick(int index)
    {
        moving = true;
        while (pick.localPosition.y > -500f)
        {
            yield return null;
            pick.localPosition = new Vector3(pick.localPosition.x, Mathf.Lerp(pick.localPosition.y, -501.1f, Time.deltaTime * 14f), pick.localPosition.z);
        }
        pick.GetComponent<MeshRenderer>().material = PickaxeData.GetResourceMat((PickaxeResource)index);
        while (pick.localPosition.y < -54.5f)
        {
            yield return null;
            pick.localPosition = new Vector3(pick.localPosition.x, Mathf.Lerp(pick.localPosition.y, -53.4f, Time.deltaTime * 14f), pick.localPosition.z);
        }
        picknameLabel.text = PickaxeData.PickaxesInGame[index].Name;
        moving = false;
        PlayerPrefs.SetInt("PickaxeUIIndex", index);
        SetBuyLayers(PlayerPrefs.GetInt("UnlockedPickaxe" + PlayerPrefs.GetInt("PickaxeUIIndex")) == 1 || PickaxeData.PickaxesInGame[PlayerPrefs.GetInt("PickaxeUIIndex")].Buy == null);
        RefreshIcons();
        RefreshLabels();
        SetUpgradeData(PickaxeData.PickaxesInGame[PlayerPrefs.GetInt("PickaxeUIIndex")].Upgrades);
    }

    public void SetBuyLayers(bool unlocked)
    {
        if (unlocked)
        {
            buyLayer.SetActive(false);
            boughtLayer.SetActive(true);
            return;
        }
        buyLayer.SetActive(true);
        boughtLayer.SetActive(false);
    }

    private IEnumerator closePickMenu()
    {
        moving = true;
        if (!Application.isMobilePlatform)
        {
            Cursor.lockState = CursorLockMode.Locked;
            Cursor.visible = false;
        }
        while (tabs.localPosition.x > 50f)
        {
            yield return null;
            tabs.localPosition = new Vector3(Mathf.Lerp(tabs.localPosition.x, 45f, Time.deltaTime * 8f), tabs.localPosition.y, tabs.localPosition.z);
        }
        while (pickMenu.localPosition.y > -1000f)
        {
            yield return null;
            pickMenu.localPosition = new Vector3(pickMenu.localPosition.x, Mathf.Lerp(pickMenu.localPosition.y, -1007.1f, Time.deltaTime * 8f), pickMenu.localPosition.z);
        }
        moving = false;
    }

    private IEnumerator openPickMenu()
    {
        StartCoroutine(SwitchPick(PlayerPrefs.GetInt("PickaxeUIIndex")));
        RefreshIcons();
        RefreshLabels();
        SetUpgradeData(PickaxeData.PickaxesInGame[PlayerPrefs.GetInt("PickaxeUIIndex")].Upgrades);
        moving = true;
        while (pickMenu.localPosition.y < 0f)
        {
            yield return null;
            pickMenu.localPosition = new Vector3(pickMenu.localPosition.x, Mathf.Lerp(pickMenu.localPosition.y, 5.1f, Time.deltaTime * 8f), pickMenu.localPosition.z);
        }
        if (!Application.isMobilePlatform)
        {
            Cursor.lockState = CursorLockMode.None;
            Cursor.visible = true;
        }
        while (tabs.localPosition.x < 160f)
        {
            yield return null;
            tabs.localPosition = new Vector3(Mathf.Lerp(tabs.localPosition.x, 165f, Time.deltaTime * 8f), tabs.localPosition.y, tabs.localPosition.z);
        }
        moving = false;
    }

    private IEnumerator closeAbilityMenu()
    {
        moving = true;
        if (!Application.isMobilePlatform)
        {
            Cursor.lockState = CursorLockMode.Locked;
            Cursor.visible = false;
        }
        while (abilityMenu.localPosition.y > -500f)
        {
            yield return null;
            abilityMenu.localPosition = new Vector3(abilityMenu.localPosition.x, Mathf.Lerp(abilityMenu.localPosition.y, -507.1f, Time.deltaTime * 8f), abilityMenu.localPosition.z);
        }
        moving = false;
    }

    private IEnumerator openAbilityMenu()
    {
        RefreshAbilityLabels();
        RefreshAbilityButtons();
        RefreshAbilityIcons();
        moving = true;
        while (abilityMenu.localPosition.y < 0f)
        {
            yield return null;
            abilityMenu.localPosition = new Vector3(abilityMenu.localPosition.x, Mathf.Lerp(abilityMenu.localPosition.y, 5.1f, Time.deltaTime * 8f), abilityMenu.localPosition.z);
        }
        if (!Application.isMobilePlatform)
        {
            Cursor.lockState = CursorLockMode.None;
            Cursor.visible = true;
        }
        moving = false;
    }
}
