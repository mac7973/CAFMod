class CfgPatches {
	class GPMG {
		units[] = {};
		weapons[] = {"C6GPMG"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F"};
	};
};

class Mode_FullAuto;	// External class reference
class SlotInfo;	// External class reference
class CowsSlot;	// External class reference
class PointerSlot;	// External class reference
	
class CfgMagazines
{
	class 150Rnd_762x51_Box;
	class 220Rnd_762x51_Box: 150Rnd_762x51_Box
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "220Rnd 7.62x51 Box";
		descriptionShort = "220Rnd 7.62x51 Box used in C6GPMG";
		picture = "\A3\Weapons_F_Beta\Data\UI\m_150Rnd_762x51_CA.paa";
		count = 220;
		type = "2*		256";
		ammo = "B_762x51_Tracer_Red";
		initSpeed = 860;
		tracersEvery = 5;
		lastRoundsTracer = 4;
		nameSound = "mgun";
		mass = 50;
	};
	class 220Rnd_762x51_Box_Tracer: 220Rnd_762x51_Box
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "220Rnd 7.62x51 Box (Tracer Red)";
		displayNameShort = "Tracer";
		descriptionShort = "220Rnd 7.62x51 Box used in C6GPMG";
		picture = "\A3\Weapons_F_Beta\Data\UI\m_150Rnd_762x51_tracer_CA.paa";
		tracersEvery = 1;
	};

};


class CfgWeapons 
{
	
	class Default;	// External class reference
	class Rifle_Long_Base_F ;	// External class reference
	
	class LMG_Zafir_F : Rifle_Long_Base_F 
	{
		class WeaponSlotsInfo;	// External class reference
	};
	class c6gpmg : LMG_Zafir_F
	{
		ACE_barrelLength = 530;
		ACE_barrelTwist = 304.8;
		ACE_twistDirection = 1;
		ace_overheating_mrbs = 10000; 
        ace_overheating_slowdownFactor = 1; 
        ace_overheating_allowSwapBarrel = 1; 
        ace_overheating_dispersion = 0.75;
		scope = 2;
		curator = 2;
		baseWeapon = "c6gpmg";
		deployedPivot    = "bipod";       /// what point should be used to be on surface while unfolded
		hasBipod         = 1;          /// a weapon with bipod obviously has a bipod
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down",db-3, 1, 20}; /// sound of unfolding the bipod
		soundBipodUp[]   = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up",db-3, 1, 20}; /// sound of folding the bipod
		model = "\caf_weapons\C6GPMG.p3d";
		displayName = "C6 GPMG";
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01.wss", 0.1, 1, 15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02.wss", 0.1, 1, 15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03.wss", 0.177828, 1, 15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04.wss", 0.177828, 1, 15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01.wss", 0.1, 1, 15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02.wss", 0.1, 1, 15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03.wss", 0.1, 1, 15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04.wss", 0.1, 1, 15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01.wss", 0.01, 1, 15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02.wss", 0.01, 1, 15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03.wss", 0.01, 1, 15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04.wss", 0.01, 1, 15};
		soundBullet[] = {"bullet1", 0.083, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083};
		minRange = 2;
		midRange = 400;
		maxRange = 800;
		autoFire = 1;
		picture = "\caf_weapons_t\inv\c6gpmg_x_ca.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_mg_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F\Rifles\MX\data\Anim\mx_afg.rtm"};
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 1;
		aiDispersionCoefY = 14.0;
		aiDispersionCoefX = 14.0;
		dexterity = 0.81;
		magazines[] = {"220Rnd_762x51_Box"};
		reloadAction = "GestureReloadM200";
		modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2"};
		class GunParticles
		{
			class effect1
			{
				positionName = "linkStart";
				directionName = "linkEnd";
				effectName = "MachineGunEject2";
			};
			class effect2
			{
				positionName = "shellStart";
				directionName = "shellEnd";
				effectName = "MachineGunCartridge2";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
			};
			class PointerSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
			};

		};
		class LinkedItemsAcc{};

		class ItemInfo
		{
			priority = 1;
			RMBhint = "C6GPMG";
			onHoverText = "TODO C6GPMG";
		};
	};
	class C6GPMG_veh : c6gpmg {
	
		scope = 1;
		magazines[] = {"220Rnd_762x51_Box"};
	};
};