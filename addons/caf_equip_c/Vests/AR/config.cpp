

class CfgPatches
{
	class caf_equip_v_AR
	{
		units[] = {};
		weapons[] = {"V_CAF_FragVest_AR"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F"};
	};
};

class cfgWeapons
{

	class VestItem;
	class Vest_NoCamo_Base;
	class V_CAF_FragVest_AR: Vest_NoCamo_Base
	{
		scope = 2;
		displayName = "Fragmentation Vest - CADPAT AR";
		picture = "\caf_equip_t\inv\inv_fragvest_ar_ca.paa";
		model = "\caf_equip\caf_fragvest";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\ons_infantry_co.paa",""};
		class ItemInfo: VestItem
		{
			uniformModel = "\caf_equip\caf_fragvest";
			hiddenSelections[] = {"camo","camo1"};
			containerClass = "Supply150";
			maximumLoad = 0;
			mass = 40;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
	
};

