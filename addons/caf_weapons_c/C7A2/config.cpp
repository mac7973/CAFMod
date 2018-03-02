#define MOA_TO_RAD(d) ((d) * 0.00029088) // Conversion factor: PI / 10800
class CfgPatches
{
	class caf_C7A2
	{
		units[] = {};
		weapons[] = {"caf_C7A2","caf_C7A2_M203"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F_Exp","caf_weapons"};
	};
};

class SlotInfo;
class UnderBarrelSlot;

class CfgWeapons
{
	class arifle_SPAR_01_base_F;
	class arifle_SPAR_01_blk_F : arifle_SPAR_01_base_F 
	{
		class WeaponSlotsInfo;
		class GunParticles;
		class Single;
		class FullAuto;
	};
	class UGL_F;
	class c7_base: arifle_SPAR_01_blk_F
	{
		scope = 0;
		descriptionShort = "C7A2 made by Colt Canada";
		reloadAction = "GestureReloadSPAR_01";
		handAnim[] = {"OFP2_ManSkeleton","caf_weapons_c\anims\c8a3_anim.rtm"};
		picture = "\caf_weapons_t\inv\C7A2_x_ca.paa";
		modes[] = {"Single","FullAuto"};
		ace_overheating_allowSwapBarrel = 0; //Why is this even a thing

		///Ballistics overwrite
		initSpeed = 924;
        ACE_barrelTwist = 180;
        ACE_barrelLength = 508.0;

		class Single: Single
		{
			reloadTime = 0.085;
			dispersion = MOA_TO_RAD(0.81);
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.085;
			dispersion = MOA_TO_RAD(0.81);	
		};


		class M203 : UGL_F {
			displayName = "M203";
			useModelOptics = 0;
			useExternalOptic = 0;
			sound[] = {"A3\sounds_f\Weapons\grenades\ugl_shot_4", 1.12202, 1, 200};
			drySound[] = {"A3\sounds_f\Weapons\other\sfx5", 1.0, 1, 30};	
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\MK20_UGL_reload",0.7943282,1,10};
			cameraDir = "OP_look";
			discreteDistance[] = {50,75,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[] = {"OP_eye_50","OP_eye_75","OP_eye_100","OP_eye_150","OP_eye_200","OP_eye_250","OP_eye_300","OP_eye_350","OP_eye_400"};
			discreteDistanceInitIndex = 1;
			reloadAction = "GestureReloadMk20UGL";
		};
		aiDispersionCoefY = 10;
		aiDispersionCoefX = 8;
		class Library
		{
			libTextDesc = "Colt Canada C7A2";
		};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "C7A2";
			onHoverText = "TODO C7A2 DSS";
		};
	};
	class caf_C7A2_M203: c7_base
	{
		scope = 2;
		baseWeapon = "caf_C7A2_M203";
		model = "\caf_weapons\C7A2_M203.p3d";
		handAnim[] = {"OFP2_ManSkeleton","caf_weapons_c\anims\M16GL.rtm"};
		muzzles[] = {"this","M203"};
		dexterity = 1.41;
		displayName = "C7A2 M203";
		descriptionShort = "C7A2 with M203 Undermount";
		picture = "\caf_weapons_t\inv\C7A2_m203_x_ca.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
		class Library
		{
			libTextDesc = "";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[] = {};
			};
			mass = 110;
		};
		
		class ItemInfo
		{
			priority = 1;
			RMBhint = "C7A2 M203";
			onHoverText = "TODO C7A2 M203 DSS";
		};
	};
	
	class caf_C7A2_M203_e: caf_C7A2_M203
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_elcan";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	
	class caf_C7A2: c7_base
	{
		scope = 2;
		displayname = "C7A2";
		baseWeapon = "caf_C7A2";
		model = "\caf_weapons\C7A2.p3d";
		picture = "\caf_weapons_t\inv\C7A2_x_Ca.paa";
	};
	
	class caf_C7A2_e: caf_C7A2
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_elcan";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
};