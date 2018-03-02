class CfgPatches
{
	class CAF_C9A2
	{
		units[] = {};
		weapons[] = {"caf_c9a2"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F_Exp"};
	};
};

class SlotInfo;
class CowsSlot;

class CfgWeapons
{
	class Rifle_Long_Base_F;
	class LMG_03_base_F : Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
		class FullAutoSlow;
		class FullAutoFast;
	};
	class caf_c9a2: LMG_03_base_F
	{
		
		deployedPivot    = "bipod";       /// what point should be used to be on surface while unfolded
		hasBipod         = 1;          /// a weapon with bipod obviously has a bipod
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down",db-3, 1, 20}; /// sound of unfolding the bipod
		soundBipodUp[]   = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up",db-3, 1, 20}; /// sound of folding the bipod
		descriptionshort = "Light machine gun <br/>Caliber: 5.56x45mm NATO";
		scope = 2;
		model = "\caf_weapons\C9A2_LMG.p3d";
		baseWeapon = "caf_c9a2";
		displayName = "C9A2";
		recoil = "recoil_zafir";
		minRange = 2;
		midRange = 400;
		maxRange = 800;
		picture = "\caf_weapons_t\inv\c9a2_x_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F\Rifles\MX\data\Anim\mx_afg.rtm"};
		modes[] = {"FullAutoSlow","FullAutoFast","close","short","medium","far_optic1","far_optic2"};
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
		class FullAutoSlow: FullAutoSlow
		{
			reloadTime = 0.086;
			//textureType = "burst";
		};
		class FullAutoFast: FullAutoSlow
		{
			reloadTime = 0.06;
			textureType = "fastAuto";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{	
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
			};
			mass = 260;
		};
		
		class ItemInfo
		{
			priority = 1;
			RMBhint = "C9A2";
			onHoverText = "TODO C9A2 DSS";
		};
	};
	class caf_C9A2_e: caf_C9A2
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