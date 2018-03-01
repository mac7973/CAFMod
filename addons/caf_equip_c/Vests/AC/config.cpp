class CfgPatches
{
	class caf_equip_v_ac
	{
		units[] = {};
		weapons[] = {"V_CAF_FragVest_AC","V_CAF_rifleman_AC","V_CAF_grenadier_AC","V_CAF_officer_AC","V_CAF_medic_AC"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F"};
	};
};

class cfgWeapons
{
	class VestItem;		
	class Vest_NoCamo_Base;
	
	class V_CAF_FragVest_AC: Vest_NoCamo_Base
	{
		scope = 2;
		displayName = "Plate Carrier";
		picture = "\caf_equip_t\inv\inv_fragvest_tw_ca.paa";
		model = "\caf_equip\caf_fragvest";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\ons_infantry_ac_co.paa",""};
		class ItemInfo: VestItem
		{
			uniformModel = "\caf_equip\caf_fragvest";
			hiddenSelections[] = {"camo","camo1"};
			containerClass = "Supply190";
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
	
	class V_CAF_rifleman_AC: V_CAF_FragVest_AC
	{

		scope = 2;
		displayName = "Flak/ Vest(Rifleman)[AC]";
		picture = "\caf_equip_t\inv\inv_fragvest_tw_ca.paa";
		model = "\caf_equip\A3_Vest_r";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo4",
			"camo5"
		};
		hiddenSelectionsTextures[] =
		{
			"caf_equip_t\tex\ons_infantry_ac_co.paa",
			"caf_equip_t\tex\equip1_ac_co.paa",
			"caf_equip_t\tex\prr_ac_co.paa",
			"caf_equip_t\tex\tacticalvest_ac_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\caf_equip\A3_Vest_r";
			containerClass = "Supply190";
			maximumLoad = 125;
			mass = 45;
			hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo4",
			"camo5"
		};
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

	class V_CAF_riflemanLeg_AC: V_CAF_FragVest_AC
	{

		scope = 2;
		displayName = "Flak/ Vest(Rifleman w/holster)[AC]";
		picture = "\caf_equip_t\inv\inv_fragvest_tw_ca.paa";
		model = "\caf_equip\A3_Vest_rl";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo4",
			"camo5"
		};
		hiddenSelectionsTextures[] =
		{
			"caf_equip_t\tex\ons_infantry_ac_co.paa",
			"caf_equip_t\tex\equip1_ac_co.paa",
			"caf_equip_t\tex\prr_ac_co.paa",
			"caf_equip_t\tex\tacticalvest_ac_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\caf_equip\A3_Vest_rl";
			containerClass = "Supply200";
			maximumLoad = 125;
			mass = 45;
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo4",
				"camo5"
			};
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
	
	class V_CAF_grenadier_AC: V_CAF_FragVest_AC
	{

		scope = 2;
		displayName = "Flak/ Vest(Grenadier)";
		picture = "\caf_equip_t\inv\inv_fragvest_tw_ca.paa";
		model = "\caf_equip\A3_Vest_gren";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5"
		};
		hiddenSelectionsTextures[] =
		{
			"caf_equip_t\tex\ons_infantry_ac_co.paa",
			"caf_equip_t\tex\equip1_ac_co.paa",
			"caf_equip_t\tex\forcerecon_gear_ac_co.paa",
			"caf_equip_t\tex\prr_ac_co.paa",
			"caf_equip_t\tex\tacticalvest_ac_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\caf_equip\A3_Vest_gren";
			containerClass = "Supply190";
			maximumLoad = 125;
			mass = 45;
			hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5"
		};
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
	class V_CAF_officer_AC: V_CAF_FragVest_AC
	{

		scope = 2;
		displayName = "Flak/ Vest(Leader)[AC]";
		picture = "\caf_equip_t\inv\inv_fragvest_tw_ca.paa";
		model = "\caf_equip\A3_Vest_o";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5"
		};
		hiddenSelectionsTextures[] =
		{
			"caf_equip_t\tex\ons_infantry_ac_co.paa",
			"caf_equip_t\tex\equip1_ac_co.paa",
			"caf_equip_t\tex\caf_chest_rig_ac_co.paa",
			"caf_equip_t\tex\prr_ac_co.paa",
			"caf_equip_t\tex\tacticalvest_ac_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\caf_equip\A3_Vest_o";
			containerClass = "Supply190";
			maximumLoad = 125;
			mass = 45;
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5"
			};
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

	class V_CAF_officerLeg_AC: V_CAF_FragVest_AC
	{

		scope = 2;
		displayName = "Flak/ Vest(Leader w/Holster)";
		picture = "\caf_equip_t\inv\inv_fragvest_tw_ca.paa";
		model = "\caf_equip\A3_Vest_ol";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5"
		};
		hiddenSelectionsTextures[] =
		{
			"caf_equip_t\tex\ons_infantry_ac_co.paa",
			"caf_equip_t\tex\equip1_ac_co.paa",
			"caf_equip_t\tex\caf_chest_rig_ac_co.paa",
			"caf_equip_t\tex\prr_ac_co.paa",
			"caf_equip_t\tex\tacticalvest_ac_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\caf_equip\A3_Vest_ol";
			containerClass = "Supply200";
			maximumLoad = 125;
			mass = 45;
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5"
			};
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
	class V_CAF_medic_AC: V_CAF_FragVest_AC
	{

		scope = 2;
		displayName = "Flak/ Vest(Medic)";
		picture = "\caf_equip_t\inv\inv_fragvest_tw_ca.paa";
		model = "\caf_equip\A3_Vest_med";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5"
		};
		hiddenSelectionsTextures[] =
		{
			"caf_equip_t\tex\ons_infantry_ac_co.paa",
			"caf_equip_t\tex\equip1_ac_co.paa",
			"caf_equip_t\tex\do_1_co.paa",
			"caf_equip_t\tex\prr_ac_co.paa",
			"caf_equip_t\tex\tacticalvest_ac_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\caf_equip\A3_Vest_med";
			containerClass = "Supply190";
			maximumLoad = 125;
			mass = 45;
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5"
			};
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
