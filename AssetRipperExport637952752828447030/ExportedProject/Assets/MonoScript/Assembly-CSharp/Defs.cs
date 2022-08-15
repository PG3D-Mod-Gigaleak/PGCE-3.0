using System.Collections.Generic;
using UnityEngine;

public sealed class Defs
{

	public static string cat1;

	public static string cat2;

	public static string cat3;

	public static string cat4;

	public static string cat5;

	public static int numOfWeapons = 51;

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
            if (nm.Contains(con) || nm.StartsWith(con) || nm == con){            
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

	public static string[] MainMenuScenes = new string[] { "Menu_Utopia", "Menu_Maze", "Menu_Islands", "Menu_City", "Menu_Slender" };

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
