class CfgPatches
{
	class caf_M110
	{
		units[] = {};
		weapons[] = {"caf_m110_F"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F_Exp","caf_weapons"};
	};
};

class SlotInfo;
class UnderBarrelSlot;
class CfgWeapons
{
	class DMR_03_base_F;
	class srifle_DMR_03_F : DMR_03_base_F 
	{
		class WeaponSlotsInfo;
	};	
	class caf_m110_F: srifle_DMR_03_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "caf_m110_F";
		scope = 2;
		model = "caf_weapons\caf_m110.p3d";
		dexterity = 1.68;
		displayName = "M110";
		picture = "\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\UI\gear_DMR_03_X_CA.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		descriptionShort = "M110 7.62x51";
		inertia = 0.8;
		aimTransitionSpeed = 0.7;
		initSpeed = 940;
		modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
		hiddenSelections[] ={"M110","PRS"};
		hiddenSelectionsTextures[] =
		{
			"caf_weapons_t\tex\m110_CF_co.paa",
			"caf_weapons_t\tex\prs_CF_co.paa"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 120;
		};
		class ItemInfo
		{
			priority = 1;
		};
	};
	class caf_m110_G_F: caf_m110_F
	{
		scope =2;
		displayName = "M110 (OD)";
		baseWeapon = "caf_m110_G_F";
		hiddenSelectionsTextures[] =
		{
			"caf_weapons_t\tex\m110_g_co.paa",
			"caf_weapons_t\tex\prs_g_co.paa"
		};
	};
	class caf_m110_D_F: caf_m110_F
	{
		scope =2;
		displayName = "M110 (Tan)";
		baseWeapon = "caf_m110_D_F";
		hiddenSelectionsTextures[] =
		{
			"caf_weapons_t\tex\m110_d_co.paa",
			"caf_weapons_t\tex\prs_d_co.paa"
		};
	};
	class caf_m110_W_F: caf_m110_F
	{
		scope =2;
		baseWeapon = "caf_m110_W_F";
		displayName = "M110 (Arctic)";
		hiddenSelectionsTextures[] =
		{
			"caf_weapons_t\tex\m110_w_co.paa",
			"caf_weapons_t\tex\prs_w_co.paa"
		};
	};
};