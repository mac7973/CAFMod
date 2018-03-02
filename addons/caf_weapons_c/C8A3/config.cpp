#define MOA_TO_RAD(d) ((d) * 0.00029088) // Conversion factor: PI / 10800
class CfgPatches
{
	class caf_C8A3
	{
		units[] = {};
		weapons[] = {"caf_c8a3","caf_c8a3_m203","caf_c8a3_cqb"};
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
	class c8_base : arifle_SPAR_01_blk_F
	{
		scope = 0;
		descriptionShort = "C8A3 Carbine made by Colt Canada";
		reloadAction = "GestureReloadSPAR_01";
		memoryPointCamera = "eye";
		cameraDir = "eye_dir";
		handAnim[] = {"OFP2_ManSkeleton","caf_weapons_c\anims\c8a3_anim.rtm"};
		picture="\caf_weapons_t\inv\c8A3_x_ca.paa";
		hiddenSelections[] = {"vert"};
		hiddenSelectionsTextures[] = {""};
		ace_overheating_allowSwapBarrel = 0; //Why is this even a thing

		///Ballistics overwrite
		initSpeed = 895;
        ACE_barrelTwist = 178;
        ACE_barrelLength = 410.0;

		class Single: Single
		{
			reloadTime = 0.08;
			dispersion = MOA_TO_RAD(0.81);
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.08;
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
			libTextDesc = "Colt Canada C8A3";
		};
		class ItemInfo
		{
			priority = 1;
			RMBhint = C8A3;
			onHoverText = "TODO C8A3 DSS";
		};
	};
	
	class caf_c8a3_M203 : c8_base
	{
		scope = 2;
		model = "\caf_weapons\C8A3_M203.p3d";
		handAnim[] = {"OFP2_ManSkeleton","caf_weapons_c\anims\M16GL.rtm"};
		muzzles[] = {"this", "M203"};
		dexterity = 1.41;
		baseWeapon = "caf_c8a3_M203";
		displayName = "C8A3 M203";
		descriptionShort = "C8A3 with M203 Undermount";
		picture = "\caf_weapons_t\inv\c8A3_m203_x_ca.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
		class Library
		{
			libTextDesc = "";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
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
			RMBhint = "C8A3 M203";
			onHoverText = "TODO C8A3 M203 DSS";
		};
	};
	
	class caf_c8a3_M203_e : caf_c8a3_M203
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
	
	class caf_c8a3 : C8_Base
	{
		scope = 2;
		baseWeapon = "caf_c8a3";
		displayname = "C8A3";
		model = "\caf_weapons\C8A3.p3d";
		picture="\caf_weapons_t\inv\c8A3_x_ca.paa";
		
	};
	class caf_c8a3_AR : C8_Base
	{
		scope = 2;
		baseWeapon = "caf_c8a3_AR";
		displayname = "C8A3 (Arid)";
		model = "\caf_weapons\C8A3.p3d";
		picture="\caf_weapons_t\inv\c8A3_x_ca.paa";
		hiddenSelections[]={"camo","camo2"};
		hiddenSelectionsTextures[]={"caf_weapons_t\tex\C8a3_ARID_CO.paa","caf_weapons_t\tex\C8a3_ARID_ca.paa"};
	};
	class caf_c8a3_cqb : C8_Base
	{
		scope = 2;
		baseWeapon = "caf_c8a3_cqb";
		displayname = "C8A3 (CQB)";
		model = "\caf_weapons\C8A3_cqb.p3d";
		picture="\caf_weapons_t\inv\c8A3_cqb_x_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton","caf_weapons_c\anims\M4-siderail.rtm"};
		
	};
	class caf_c8a3_cqb_e : caf_c8a3_cqb
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
	
	class caf_c8a3_e : caf_c8a3
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