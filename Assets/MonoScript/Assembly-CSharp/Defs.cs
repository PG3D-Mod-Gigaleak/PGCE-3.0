using System.Collections.Generic;
using UnityEngine;

public sealed class Defs
{
	public static SurvivalConfig survivalConfig;

	public static TimeSurvivalConfig timeSurvivalConfig;

	public static int numOfLevels = 10;

	public static int[] randomScenesThisLoad = new int[numOfLevels];

	public static SurvivalConfig m_SurvivalConfig
	{
		get
		{
			if (survivalConfig == null)
			{
				survivalConfig = Utilities.GetClass<SurvivalConfig>("SurvivalConfig");
			}
			return survivalConfig;
		}
	}

	public static TimeSurvivalConfig m_TimeSurvivalConfig
	{
		get
		{
			if (timeSurvivalConfig == null)
			{
				timeSurvivalConfig = Utilities.GetClass<TimeSurvivalConfig>("TimeSurvivalConfig");
			}
			return timeSurvivalConfig;
		}
	}

	public static BossFightConfig _bossFightConfig;

	public static BossFightConfig bossFightConfig
	{
		get
		{
			if (_bossFightConfig == null)
			{
				_bossFightConfig = Utilities.GetClass<BossFightConfig>("BossFightConfig");
			}
			return _bossFightConfig;
		}
	}

	public static BossFightConfig.Level GetCurrentLevelDataForBossfight
	{
		get
		{
			return bossFightConfig.levels.Find(x => x.scene == Application.loadedLevelName);
		}
	}

	public static string GetSceneNameFromRandomByIndex(int index)
	{
		return m_SurvivalConfig.levels.levels[index].PossibleLevels[0].mySceneName;
	}

	public static string GetLoadingNameFromRandomByIndex(int index)
	{
		return m_SurvivalConfig.levels.levels[index].PossibleLevels[0].myLoading;
	}

	public static SurvivalConfig.Enemy[] GetEnemiesFromRandomByIndex(int index)
	{
		return m_SurvivalConfig.levels.levels[index].PossibleLevels[0].enemies;
	}

	public static SurvivalConfig.Enemy GetEnemy(int levelIndex, string enemyName)
	{
		return System.Array.Find(m_SurvivalConfig.levels.levels[levelIndex].PossibleLevels[0].enemies, x => x.name == enemyName);
	}

	public static Texture GetSkinForEnemy(int levelIndex, string enemyName)
	{
		foreach (SurvivalConfig.Enemy enemy in m_SurvivalConfig.levels.levels[levelIndex - 1].PossibleLevels[0].enemies)
		{
			if (enemy.name == enemyName)
			{
				return enemy.skin;
			}
		}
		return null;
	}

	public static Texture GetSkinForEnemyCOOP(string scene, string enemyName)
	{
		foreach (SurvivalConfig.Enemy enemy in GetEnemiesFromThisCoopLevel(scene))
		{
			if (enemy.name == enemyName)
			{
				return enemy.skin;
			}
		}
		return null;
	}

	public static int GetBGMNumberFromRandomByIndex(int index)
	{
		return m_SurvivalConfig.levels.levels[index].PossibleLevels[0].myMusicLevel;
	}

	public static int GetBossFromRandomByIndex(int index)
	{
		return m_SurvivalConfig.levels.levels[index - 1].PossibleLevels[0].myBoss;
	}

	public static SurvivalConfig.Enemy[] GetEnemiesFromThisCoopLevel(string scene)
	{
		foreach (TimeSurvivalConfig.MapSettings mapSettings in m_TimeSurvivalConfig.maps.mapSettings)
		{
			if (mapSettings.MyName == scene)
			{
				return mapSettings.enemies;
			}
		}
		return m_TimeSurvivalConfig.maps.mapSettings[0].enemies;
	}

	public static int GetMaxEnemiesFromThisCoopLevel(string scene)
	{
		foreach (TimeSurvivalConfig.MapSettings mapSettings in m_TimeSurvivalConfig.maps.mapSettings)
		{
			if (mapSettings.MyName == scene)
			{
				return mapSettings.MaxZombies;
			}
		}
		return m_TimeSurvivalConfig.maps.mapSettings[0].MaxZombies;
	}

	public static Texture GetDiffcultyTextureForThisLevel(string scene)
	{
		foreach (TimeSurvivalConfig.MapSettings mapSettings in m_TimeSurvivalConfig.maps.mapSettings)
		{
			if (mapSettings.MyName == scene)
			{
				return GetDifficultyTexture(mapSettings.difficulty);
			}
		}
		return GetDifficultyTexture(m_TimeSurvivalConfig.maps.mapSettings[0].difficulty);
	}

	public static TimeSurvivalConfig.MapSettings.Difficulty GetDifficultyForThisLevel(string scene)
	{
		foreach (TimeSurvivalConfig.MapSettings mapSettings in m_TimeSurvivalConfig.maps.mapSettings)
		{
			if (mapSettings.MyName == scene)
			{
				return mapSettings.difficulty;
			}
		}
		return m_TimeSurvivalConfig.maps.mapSettings[0].difficulty;
	}

	public static Texture GetDifficultyTexture(TimeSurvivalConfig.MapSettings.Difficulty difficulty)
	{
		string path = "DifficultyOverlay/";
		switch (difficulty)
		{
			case TimeSurvivalConfig.MapSettings.Difficulty.easy:
			return Resources.Load<Texture>(path + "easydiff");

			case TimeSurvivalConfig.MapSettings.Difficulty.normal:
			return Resources.Load<Texture>(path + "normaldiff");

			case TimeSurvivalConfig.MapSettings.Difficulty.hard:
			return Resources.Load<Texture>(path + "harddiff");

			case TimeSurvivalConfig.MapSettings.Difficulty.veryHard:
			return Resources.Load<Texture>(path + "veryharddiff");

			case TimeSurvivalConfig.MapSettings.Difficulty.extreme:
			return Resources.Load<Texture>(path + "extremediff");

			case TimeSurvivalConfig.MapSettings.Difficulty.insane:
			return Resources.Load<Texture>(path + "insanediff");

			case TimeSurvivalConfig.MapSettings.Difficulty.impossible:
			return Resources.Load<Texture>(path + "impossiblediff");

			case TimeSurvivalConfig.MapSettings.Difficulty.masochist:
			return Resources.Load<Texture>(path + "masochistdiff");
		}
		return null;
	}

	public static int GetDifficultyReward(TimeSurvivalConfig.MapSettings.Difficulty difficulty)
	{
		switch (difficulty)
		{
			case TimeSurvivalConfig.MapSettings.Difficulty.easy:
			return 5;

			case TimeSurvivalConfig.MapSettings.Difficulty.normal:
			return 10;

			case TimeSurvivalConfig.MapSettings.Difficulty.hard:
			return 20;

			case TimeSurvivalConfig.MapSettings.Difficulty.veryHard:
			return 35;

			case TimeSurvivalConfig.MapSettings.Difficulty.extreme:
			return 50;

			case TimeSurvivalConfig.MapSettings.Difficulty.insane:
			return 75;

			case TimeSurvivalConfig.MapSettings.Difficulty.impossible:
			return 90;

			case TimeSurvivalConfig.MapSettings.Difficulty.masochist:
			return 125;
		}
		return 0;
	}

	public static int[] GetDifficultyMinCoins(TimeSurvivalConfig.MapSettings.Difficulty difficulty)
	{
		switch (difficulty)
		{
			case TimeSurvivalConfig.MapSettings.Difficulty.easy:
			return new int[3]{3000, 7500, 12000};

			case TimeSurvivalConfig.MapSettings.Difficulty.normal:
			return new int[3]{10000, 20000, 30000};

			case TimeSurvivalConfig.MapSettings.Difficulty.hard:
			return new int[3]{50000, 70000, 95000};

			case TimeSurvivalConfig.MapSettings.Difficulty.veryHard:
			return new int[3]{80000, 125000, 175000};

			case TimeSurvivalConfig.MapSettings.Difficulty.extreme:
			return new int[3]{120000, 180000, 250000};

			case TimeSurvivalConfig.MapSettings.Difficulty.insane:
			return new int[3]{200000, 300000, 400000};

			case TimeSurvivalConfig.MapSettings.Difficulty.impossible:
			return new int[3]{350000, 500000, 650000};

			case TimeSurvivalConfig.MapSettings.Difficulty.masochist:
			return new int[3]{500000, 750000, 1000000};
		}
		return new int[3]{3000, 7500, 12000};
	}

	public static bool IsDefaultCoopSettings
	{
		get
		{
			foreach (TimeSurvivalConfig.MapSettings mapSettings in m_TimeSurvivalConfig.maps.mapSettings)
			{
				if (mapSettings.MyName == Application.loadedLevelName)
				{
					return false;
				}
			}
			return true;
		}
	}

	public static string GetThisCoopPath(string path)
	{
		foreach (TimeSurvivalConfig.MapSettings mapSettings in m_TimeSurvivalConfig.maps.mapSettings)
		{
			if (mapSettings.MyName == path)
			{
				return mapSettings.myPath;
			}
		}
		return m_TimeSurvivalConfig.maps.mapSettings[0].myPath;
	}

	public static bool InCoopScene
	{
		get
		{
			foreach (TimeSurvivalConfig.MapSettings mapSettings in m_TimeSurvivalConfig.maps.mapSettings)
			{
				if (mapSettings.MyName == Application.loadedLevelName)
				{
					return true;
				}
			}
			foreach (string str in m_TimeSurvivalConfig.coopMaps)
			{
				if (str == Application.loadedLevelName)
				{
					return true;
				}
			}
			return false;
		}
	}

	public static float GetThisCoopMaxTime(string str)
	{
		foreach (TimeSurvivalConfig.MapSettings mapSettings in m_TimeSurvivalConfig.maps.mapSettings)
		{
			if (mapSettings.MyName == str)
			{
				return mapSettings.MaxTime;
			}
		}
		return m_TimeSurvivalConfig.maps.mapSettings[0].MaxTime;
	}

	public static float GetThisCoopZombieSpawnMult(string str)
	{
		foreach (TimeSurvivalConfig.MapSettings mapSettings in m_TimeSurvivalConfig.maps.mapSettings)
		{
			if (mapSettings.MyName == str)
			{
				return mapSettings.ZombieSpawnMultiplier;
			}
		}
		return m_TimeSurvivalConfig.maps.mapSettings[0].ZombieSpawnMultiplier;
	}

	public static TimeSurvivalConfig.BossSpawn[] GetThisCoopBossSpawns(string str)
	{
		foreach (TimeSurvivalConfig.MapSettings mapSettings in m_TimeSurvivalConfig.maps.mapSettings)
		{
			if (mapSettings.MyName == str)
			{
				return mapSettings.bossSpawns;
			}
		}
		return m_TimeSurvivalConfig.maps.mapSettings[0].bossSpawns;
	}

	public enum RuntimeAndroidEdition
	{
		None = 0,
		Amazon = 1,
		GoogleLite = 2,
		GooglePro = 3
	}

	public static string CAnim(GameObject animator, string con){
        foreach (AnimationState ac in animator.GetComponent<Animation>()){
            string nm = ac.name.ToString();
            if (nm.StartsWith(con) || nm == con){            
                return nm;
            }
        }
        return null;
    }

	public static Dictionary<string, string> mapNamesForUser;

	public static Dictionary<string, int> levelNumsForMusicInMult;

	public static List<int> levelsWithVarY;

	public static int NumberOfElixirs;

	public static float HalfLength
	{
		get
		{
			return 17f;
		}
	}

	public static string BestScoreSett
	{
		get
		{
			return "BestScoreSett";
		}
	}

	public static string InAppBoughtSett
	{
		get
		{
			return "BigAmmoPackBought";
		}
	}

	public static string CurrentWeaponSett
	{
		get
		{
			return "CurrentWeapon";
		}
	}

	public static string MinerWeaponSett
	{
		get
		{
			return "MinerWeaponSett";
		}
	}

	public static string SwordSett
	{
		get
		{
			return "SwordSett";
		}
	}

	public static int ScoreForSurplusAmmo
	{
		get
		{
			return 50;
		}
	}

	public static string CurrentHealthSett
	{
		get
		{
			return "CurrentHealthSett";
		}
	}

	public static string CurrentArmorSett
	{
		get
		{
			return "CurrentArmorSett";
		}
	}

	public static string NumberOfElixirsSett
	{
		get
		{
			return "NumberOfElixirsSett";
		}
	}

	public static float Coef
	{
		get
		{
			return (float)Screen.height / 768f;
		}
	}

	public static string SkinEditorMode
	{
		get
		{
			return "SkinEditorMode";
		}
	}

	public static string SkinNameMultiplayer
	{
		get
		{
			return "SkinNameMultiplayer";
		}
	}

	public static string SkinIndexMultiplayer
	{
		get
		{
			return "SkinIndexMultiplayer";
		}
	}

	public static string SkinBaseName
	{
		get
		{
			return "Mult_Skin_";
		}
	}

	public static string MultSkinsDirectoryName
	{
		get
		{
			return "Multiplayer Skins";
		}
	}

	public static string CombatRifleSett
	{
		get
		{
			return "CombatRifleSett";
		}
	}

	public static string GoldenEagleSett
	{
		get
		{
			return "GoldenEagleSett";
		}
	}

	public static string MagicBowSett
	{
		get
		{
			return "MagicBowSett";
		}
	}

	public static string SPASSett
	{
		get
		{
			return "SPASSett";
		}
	}

	public static string GoldenAxeSett
	{
		get
		{
			return "GoldenAxeSett";
		}
	}

	public static string ChainsawS
	{
		get
		{
			return "ChainsawS";
		}
	}

	public static string FAMASS
	{
		get
		{
			return "FAMASS";
		}
	}

	public static string GlockSett
	{
		get
		{
			return "GlockSett";
		}
	}

	public static string ScytheSN
	{
		get
		{
			return "ScytheSN";
		}
	}

	public static string ShovelSN
	{
		get
		{
			return "ShovelSN";
		}
	}

	public static string Sword_2_SN
	{
		get
		{
			return "Sword_2_SN";
		}
	}

	public static string HammerSN
	{
		get
		{
			return "HammerSN";
		}
	}

	public static string StaffSN
	{
		get
		{
			return "StaffSN";
		}
	}

	public static string LaserRifleSN
	{
		get
		{
			return "LaserRifleSN";
		}
	}

	public static string LightSwordSN
	{
		get
		{
			return "LightSwordSN";
		}
	}

	public static string BerettaSN
	{
		get
		{
			return "BerettaSN";
		}
	}

	public static string MaceSN
	{
		get
		{
			return "MaceSN";
		}
	}

	public static string MinigunSN
	{
		get
		{
			return "MinigunSN";
		}
	}

	public static string CrossbowSN
	{
		get
		{
			return "CrossbowSN";
		}
	}

	public static string endmanskinBoughtSett
	{
		get
		{
			return "endmanskinBoughtSett";
		}
	}

	public static string chiefBoughtSett
	{
		get
		{
			return "chiefBoughtSett";
		}
	}

	public static string spaceengineerBoughtSett
	{
		get
		{
			return "spaceengineerBoughtSett";
		}
	}

	public static string nanosoldierBoughtSett
	{
		get
		{
			return "nanosoldierBoughtSett";
		}
	}

	public static string steelmanBoughtSett
	{
		get
		{
			return "steelmanBoughtSett";
		}
	}

	public static string captainSett
	{
		get
		{
			return "captainSett";
		}
	}

	public static string hawkSett
	{
		get
		{
			return "hawkSett";
		}
	}

	public static string greenGuySett
	{
		get
		{
			return "greenGuySett";
		}
	}

	public static string TunderGodSett
	{
		get
		{
			return "TunderGodSett";
		}
	}

	public static string gordonSett
	{
		get
		{
			return "gordonSett";
		}
	}

	public static string animeGirlSett
	{
		get
		{
			return "animeGirlSett";
		}
	}

	public static string emoGirlSett
	{
		get
		{
			return "emoGirlSett";
		}
	}

	public static string nurseSett
	{
		get
		{
			return "nurseSett";
		}
	}

	public static string magicGirlSett
	{
		get
		{
			return "magicGirlSett";
		}
	}

	public static string braveGirlSett
	{
		get
		{
			return "braveGirlSett";
		}
	}

	public static string glamGirlSett
	{
		get
		{
			return "glamGirlSett";
		}
	}

	public static string kityyGirlSett
	{
		get
		{
			return "kityyGirlSett";
		}
	}

	public static string famosBoySett
	{
		get
		{
			return "famosBoySett";
		}
	}

	public static string defaultPlayerName
	{
		get
		{
			return "Player";
		}
	}

	public static string Coins
	{
		get
		{
			return "Coins";
		}
	}

	public static int CoinsAmount
	{
		get
		{
			return Storager.getInt(Coins, false);
		}
		set
		{
			Storager.setInt(Coins, value, false);
		}
	}

	public static string FirstLaunch
	{
		get
		{
			return "FirstLaunch";
		}
	}

	public static string inappsRestored_3_1
	{
		get
		{
			return "inappsRestored_3_1";
		}
	}

	public static string restoreWindowShownProfile
	{
		get
		{
			return "restoreWindowShownProfile";
		}
	}

	public static string restoreWindowShownSingle
	{
		get
		{
			return "restoreWindowShownSingle";
		}
	}

	public static string restoreWindowShownMult
	{
		get
		{
			return "restoreWindowShownMult";
		}
	}

	public static string initValsInKeychain
	{
		get
		{
			return "initValsInKeychain";
		}
	}

	public static string initValsInKeychain2
	{
		get
		{
			return "initValsInKeychain2";
		}
	}

	public static string initValsInKeychain3
	{
		get
		{
			return "initValsInKeychain3";
		}
	}

	public static string initValsInKeychain4
	{
		get
		{
			return "initValsInKeychain4";
		}
	}

	public static string initValsInKeychain5
	{
		get
		{
			return "initValsInKeychain5";
		}
	}

	public static string initValsInKeychain6
	{
		get
		{
			return "initValsInKeychain6";
		}
	}

	public static string initValsInKeychain7
	{
		get
		{
			return "initValsInKeychain7";
		}
	}

	public static string initValsInKeychain8
	{
		get
		{
			return "initValsInKeychain8";
		}
	}

	public static string initValsInKeychain9
	{
		get
		{
			return "initValsInKeychain9";
		}
	}

	internal static int SaltSeed
	{
		get
		{
			return 2083243184;
		}
	}

	public static string SkinsMakerInProfileBought
	{
		get
		{
			return "SkinsMakerInProfileBought";
		}
	}

	public static string MostExpensiveWeapon
	{
		get
		{
			return "MostExpensiveWeapon";
		}
	}

	public static string MenuPersWeaponTag
	{
		get
		{
			return "MenuPersWeaponTag";
		}
	}

	public static string TrainingComplSett
	{
		get
		{
			return "TrainingComplSett";
		}
	}

	public static string EarnedCoins
	{
		get
		{
			return "EarnedCoins";
		}
	}

	public static string COOPScore
	{
		get
		{
			return "COOPScore";
		}
	}

	public static string SkinsWrittenToGallery
	{
		get
		{
			return "SkinsWrittenToGallery";
		}
	}

	public static float screenRation
	{
		get
		{
			return (float)Screen.width / (float)Screen.height;
		}
	}

	public static string NumOfMultSkinsSett
	{
		get
		{
			return "NumOfMultSkinsSett";
		}
	}

	public static string ProfileEnteredFromMenu
	{
		get
		{
			return "ProfileEnteredFromMenu";
		}
	}

	public static string CancelButtonTitle
	{
		get
		{
			return "Cancel";
		}
	}

	public static int skinsMakerPrice
	{
		get
		{
			return (!IsProEdition) ? 100 : 45;
		}
	}

	public static bool isMulti
	{
		get
		{
			return PlayerPrefs.GetInt("MultyPlayer") == 1;
		}
	}

	public static bool isCOOP
	{
		get
		{
			return PlayerPrefs.GetInt("COOP") == 1;
		}
	}

	public static MenuSettings _menuSettings;

	public static MenuSettings menuSettings
	{
		get
		{
			if (_menuSettings == null)
			{
				_menuSettings = Utilities.GetClass<MenuSettings>("MenuSettings");
			}
			return _menuSettings;
		}
	}

	public static string[] MainMenuScenes
	{
		get
		{
			List<string> scenes = new List<string>();
			foreach (MenuSettings.Menu menu in menuSettings.menuInfos)
			{
				scenes.Add(menu.sceneName);
			}
			return scenes.ToArray();
		}
	}

	public static string CurrentMainMenuScene;

	public static string ShouldReoeatActionSett
	{
		get
		{
			return "ShouldReoeatActionSett";
		}
	}

	public static string GoToProfileAction
	{
		get
		{
			return "GoToProfileAction";
		}
	}

	public static string GoToSkinsMakerAction
	{
		get
		{
			return "GoToSkinsMakerAction";
		}
	}

	public static string GoToPresetsAction
	{
		get
		{
			return "GoToPresetsAction";
		}
	}

	public static string SkinsMakerInMainMenuPurchased
	{
		get
		{
			return "SkinsMakerInMainMenuPurchased";
		}
	}

	public static RuntimeAndroidEdition AndroidEdition
	{
		get
		{
			if (Application.platform != RuntimePlatform.Android)
			{
				return RuntimeAndroidEdition.None;
			}
			return RuntimeAndroidEdition.GooglePro;
		}
	}

	public static bool IsProEdition
	{
		get
		{
			if (Application.platform == RuntimePlatform.IPhonePlayer)
			{
				return true;
			}
			if (Application.platform == RuntimePlatform.Android)
			{
				return AndroidEdition != RuntimeAndroidEdition.GoogleLite;
			}
			return false;
		}
	}

	public static string ApplicationUrl
	{
		get
		{
			return (Application.platform != RuntimePlatform.Android) ? "https://apps.apple.com/us/app/bug-heroes/id412789616" : ((AndroidEdition == RuntimeAndroidEdition.Amazon) ? "https://play.google.com/store/apps/details?id=com.foursakenmedia.bugheroes2&hl=en_US&gl=US" : ((AndroidEdition != RuntimeAndroidEdition.GooglePro) ? "https://play.google.com/store/apps/details?id=com.foursakenmedia.bugheroes2&hl=en_US&gl=US" : "https://play.google.com/store/apps/details?id=com.foursakenmedia.bugheroes2&hl=en_US&gl=US"));
		}
	}

	static Defs()
	{
		mapNamesForUser = new Dictionary<string, string>();
		levelNumsForMusicInMult = new Dictionary<string, int>();
		levelsWithVarY = new List<int>();
		NumberOfElixirs = 1;
		mapNamesForUser.Add("Maze", "Temple");
		mapNamesForUser.Add("Cementery", "Graveyard");
		mapNamesForUser.Add("City", "Dead City");
		mapNamesForUser.Add("Gluk", "END World");
		mapNamesForUser.Add("Jail", "Prison");
		mapNamesForUser.Add("Hospital", "Hospital");
		mapNamesForUser.Add("Pool", "Pool");
		mapNamesForUser.Add("Slender", "Forest");
		mapNamesForUser.Add("Castle", "Hell");
		mapNamesForUser.Add("Ranch", "Shooting Range");
		mapNamesForUser.Add("Arena_MP", "Deadly Arena");
		mapNamesForUser.Add("Sky_islands", "Sky Islands");
		mapNamesForUser.Add("Dust", "Arabian City");
		mapNamesForUser.Add("Bridge", "Bridge");
		mapNamesForUser.Add("Farm", "Farm");
		mapNamesForUser.Add("Utopia", "Utopia");
		mapNamesForUser.Add("Arena", "Arena");
		mapNamesForUser.Add("Assault", "Warehouse");
		mapNamesForUser.Add("Town", "Town");
		mapNamesForUser.Add("Abandoned_Pool", "Abandoned Pool");
		mapNamesForUser.Add("campaignsuperreal", "Campaign Full Super Real");
		mapNamesForUser.Add("Winter", "Winter");
		mapNamesForUser.Add("School", "School");
		mapNamesForUser.Add("Hills", "Hills");
		mapNamesForUser.Add("desert_temple", "Desert Temple");
		mapNamesForUser.Add("minecraft_church", "cathedralllll");
		mapNamesForUser.Add("EndersHouse", "An Enderman's House");
		mapNamesForUser.Add("Upside_down_castle", "Upside Down Hell Castle");
		mapNamesForUser.Add("weird", "Weird Dimension");
		mapNamesForUser.Add("main_menu_but_how", "Main Menu");
		mapNamesForUser.Add("ants_life_warehouse", "Ants Life: Warehouse");
	    mapNamesForUser.Add("PiratIsland", "Pirate Island");
		mapNamesForUser.Add("buntu", "Buntu");
		mapNamesForUser.Add("DripDust", "Drip Dust");
		mapNamesForUser.Add("Slender_but_bad", "256p Slender Forest");
		mapNamesForUser.Add("Training_11.2.4", "Training from 11.2.4");
		mapNamesForUser.Add("rupture_of_time", "you teleported to 2014 and uh something is wrong here");
		mapNamesForUser.Add("northpolebut", "North Pole map but");
		mapNamesForUser.Add("Stupid52", "Area 52 but very unfunny");
		mapNamesForUser.Add("COMZ_older_village", "COMZ unused village");
		mapNamesForUser.Add("COMZ_unused_cemetery", "COMZ unused church");
		mapNamesForUser.Add("UniBuilder_Map2", "UniVoxelBuilder Map 2");
		mapNamesForUser.Add("COMZ_unused_hospital", "COMZ unused hospital");
		mapNamesForUser.Add("COMZ_test", "COMZ test map");
		mapNamesForUser.Add("COMZ_unused_parkingspace", "COMZ unused parking lot");
		mapNamesForUser.Add("SandboxSmall", "Endi Tank Small Sandbox");
		mapNamesForUser.Add("GardenSmall", "Endi Tank Small Garden");
		mapNamesForUser.Add("noobite_map", "Noobite working on video-");
		mapNamesForUser.Add("Utopia Castle", "hell castle in utopia");
		mapNamesForUser.Add("Hell Utopia", "utopia in hell castle");
		mapNamesForUser.Add("wholeblockworldmaphelpme", "the block world");
		mapNamesForUser.Add("CRScene2", "a christmas prison wowowo");
		mapNamesForUser.Add("SWF_Level17", "Star Warfare Warehouse");
		mapNamesForUser.Add("COMZ_unused_church", "cool church");
		mapNamesForUser.Add("the truth", "find out the truth about pg3d");
		mapNamesForUser.Add("Zombie3D_Desert3", "the pixelated");
		mapNamesForUser.Add("Supermarket", "Blockmart");
		mapNamesForUser.Add("PSky_islands", "vjg pgy wrfcvg hqt rkzgn iwp ewtugf gfkvkqp yknn rtqdcdna tgngcug kp ncvg 2023 k fqpv mpqy");
		mapNamesForUser.Add("UtopiaWavy", "utopia but I gave you drugs");
		mapNamesForUser.Add("FajitaSky_islands", "i hate kuro");
		mapNamesForUser.Add("Abandoned_Pool_old", "welcome back to the old days of abandoned pool");
		levelNumsForMusicInMult.Add("Maze", 2);
		levelNumsForMusicInMult.Add("Cementery", 1);
		levelNumsForMusicInMult.Add("City", 3);
		levelNumsForMusicInMult.Add("Gluk", 6);
		levelNumsForMusicInMult.Add("Jail", 5);
		levelNumsForMusicInMult.Add("Hospital", 4);
		levelNumsForMusicInMult.Add("Pool", 1001);
		levelNumsForMusicInMult.Add("Slender", 9);
		levelNumsForMusicInMult.Add("Castle", 1002);
		levelNumsForMusicInMult.Add("Ranch", 1003);
		levelNumsForMusicInMult.Add("Arena_MP", 1004);
		levelNumsForMusicInMult.Add("Sky_islands", 1005);
		levelNumsForMusicInMult.Add("Dust", 1006);
		levelNumsForMusicInMult.Add("Bridge", 1007);
		levelNumsForMusicInMult.Add("Assault", 1008);
		levelNumsForMusicInMult.Add("Town", 4007);
		levelNumsForMusicInMult.Add("Abandoned_Pool", 4006);
		levelNumsForMusicInMult.Add("Farm", 4001);
		levelNumsForMusicInMult.Add("Utopia", 4002);
		levelNumsForMusicInMult.Add("Arena", 7);
		levelNumsForMusicInMult.Add("Winter", 4003);
		levelNumsForMusicInMult.Add("campaignsuperreal", 4005);
		levelNumsForMusicInMult.Add("School", 1009);
		levelNumsForMusicInMult.Add("Hills", 4008);
		levelNumsForMusicInMult.Add("desert_temple", 4009);
		levelNumsForMusicInMult.Add("minecraft_church", 4010);
		levelNumsForMusicInMult.Add("EndersHouse", 4011);
		levelNumsForMusicInMult.Add("Upside_down_castle", 500);
		levelNumsForMusicInMult.Add("weird", 501);
		levelNumsForMusicInMult.Add("main_menu_but_how", 502);
		levelNumsForMusicInMult.Add("ants_life_warehouse", 503);
		levelNumsForMusicInMult.Add("PiratIsland", 504);
		levelNumsForMusicInMult.Add("buntu", 505);
		levelNumsForMusicInMult.Add("DripDust", 506);
		levelNumsForMusicInMult.Add("Slender_but_bad", 507);
		levelNumsForMusicInMult.Add("Training_11.2.4", 508);
		levelNumsForMusicInMult.Add("rupture_of_time", 509);
		levelNumsForMusicInMult.Add("northpolebut", 510);
		levelNumsForMusicInMult.Add("Stupid52", 511);
		levelNumsForMusicInMult.Add("COMZ_older_village", 512);
		levelNumsForMusicInMult.Add("COMZ_unused_cemetery", 4013);
		levelNumsForMusicInMult.Add("UniBuilder_Map2", 4015);
		levelNumsForMusicInMult.Add("COMZ_unused_hospital", 513);
		levelNumsForMusicInMult.Add("COMZ_test", 514);
		levelNumsForMusicInMult.Add("COMZ_unused_parkingspace", 515);
		levelNumsForMusicInMult.Add("SandboxSmall", 516);
		levelNumsForMusicInMult.Add("noobite_map", 517);
		levelNumsForMusicInMult.Add("GardenSmall", 518);
		levelNumsForMusicInMult.Add("Utopia Castle", 519);
		levelNumsForMusicInMult.Add("Hell Utopia", 520);
		levelNumsForMusicInMult.Add("wholeblockworldmaphelpme", 521);
		levelNumsForMusicInMult.Add("CRScene2", 522);
		levelNumsForMusicInMult.Add("SWF_Level17", 4012);
		levelNumsForMusicInMult.Add("COMZ_unused_church", 4013);
		levelNumsForMusicInMult.Add("the truth", 523);
		levelNumsForMusicInMult.Add("Zombie3D_Desert3", 524);
		levelNumsForMusicInMult.Add("PSky_islands", 4016);
		levelNumsForMusicInMult.Add("UtopiaWavy", 4017);
		levelNumsForMusicInMult.Add("FajitaSky_islands", 6969);
		levelNumsForMusicInMult.Add("Abandoned_Pool_old", 1001);
		levelNumsForMusicInMult.Add("echo_room", 4018);
		levelNumsForMusicInMult.Add("Supermarket", 4019);
		levelsWithVarY.Add(8);
		levelsWithVarY.Add(10);
		levelsWithVarY.Add(1005);
		levelsWithVarY.Add(1006);
		levelsWithVarY.Add(1007);
		levelsWithVarY.Add(1008);
		levelsWithVarY.Add(1009);
		levelsWithVarY.Add(4001);
		levelsWithVarY.Add(4002);
		levelsWithVarY.Add(4003);
	}
}
