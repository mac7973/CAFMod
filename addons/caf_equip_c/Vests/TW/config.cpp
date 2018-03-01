class CfgPatches
{
	class caf_equip_v_tw
	{
		units[] = {};
		weapons[] = {"V_CAF_FragVest_TW","V_CAF_rifleman_TW","V_CAF_grenadier_TW","V_CAF_officer_TW","V_CAF_medic_TW"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F"};
	};
};

class cfgWeapons
{
	class VestItem;		
	class Vest_NoCamo_Base;
	
	class V_CAF_FragVest_TW: Vest_NoCamo_Base
	{
		scope = 2;
		displayName = "Plate Carrier";
		picture = "\caf_equip_t\inv\inv_fragvest_tw_ca.paa";
		model = "\caf_equip\caf_fragvest";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\ons_infantry_tw_co.paa",""};
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
	
	class V_CAF_rifleman_TW: V_CAF_FragVest_TW
	{

		scope = 2;
		displayName = "Flak/ Vest(Rifleman)";
		picture = "\caf_equip_t\inv\inv_fragvest_tw_ca.paa";
		model = "\caf_equip\A3_Vest_r";

		class ItemInfo: VestItem
		{
			uniformModel = "\caf_equip\A3_Vest_r";
			containerClass = "Supply190";
			maximumLoad = 125;
			mass = 45;
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

	class V_CAF_riflemanLeg_TW: V_CAF_FragVest_TW
	{

		scope = 2;
		displayName = "Flak/ Vest(Rifleman w/holster)";
		picture = "\caf_equip_t\inv\inv_fragvest_tw_ca.paa";
		model = "\caf_equip\A3_Vest_rl";

		class ItemInfo: VestItem
		{
			uniformModel = "\caf_equip\A3_Vest_rl";
			containerClass = "Supply200";
			maximumLoad = 125;
			mass = 45;
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
	
	class V_CAF_grenadier_TW: V_CAF_FragVest_TW
	{

		scope = 2;
		displayName = "Flak/ Vest(Grenadier)";
		picture = "\caf_equip_t\inv\inv_fragvest_tw_ca.paa";
		model = "\caf_equip\A3_Vest_gren";

		class ItemInfo: VestItem
		{
			uniformModel = "\caf_equip\A3_Vest_gren";
			containerClass = "Supply190";
			maximumLoad = 125;
			mass = 45;
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
	class V_CAF_officer_TW: V_CAF_FragVest_TW
	{

		scope = 2;
		displayName = "Flak/ Vest(Leader)";
		picture = "\caf_equip_t\inv\inv_fragvest_tw_ca.paa";
		model = "\caf_equip\A3_Vest_o";

		class ItemInfo: VestItem
		{
			uniformModel = "\caf_equip\A3_Vest_o";
			containerClass = "Supply190";
			maximumLoad = 125;
			mass = 45;
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

	class V_CAF_officerLeg_TW: V_CAF_FragVest_TW
	{

		scope = 2;
		displayName = "Flak/ Vest(Leader w/Holster)";
		picture = "\caf_equip_t\inv\inv_fragvest_tw_ca.paa";
		model = "\caf_equip\A3_Vest_ol";

		class ItemInfo: VestItem
		{
			uniformModel = "\caf_equip\A3_Vest_ol";
			containerClass = "Supply200";
			maximumLoad = 125;
			mass = 45;
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
	class V_CAF_medic_TW: V_CAF_FragVest_TW
	{

		scope = 2;
		displayName = "Flak/ Vest(Medic)";
		picture = "\caf_equip_t\inv\inv_fragvest_tw_ca.paa";
		model = "\caf_equip\A3_Vest_med";

		class ItemInfo: VestItem
		{
			uniformModel = "\caf_equip\A3_Vest_med";
			containerClass = "Supply190";
			maximumLoad = 125;
			mass = 45;
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
