class CfgPatches
{
	class caf_equip_rcaf_h
	{
		units[] = {};
		weapons[] = {"H_RCAF_PilotHelmetHeli","H_RCAF_CrewHelmetHeli","H_RCAF_CrewHelmetHeli_01","H_RCAF_CrewHelmetHeli_02","H_RCAF_CrewHelmetHeli_03"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F"};
	};
};

class cfgWeapons
{
	class H_HelmetB;
	class H_PilotHelmetHeli_B:H_HelmetB
	{
		class ItemInfo;
	};
	class H_RCAF_PilotHelmetHeli: H_PilotHelmetHeli_B
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_RCAF_PilotHelmetHeli";
		displayName = "Heli Pilot Helmet";
		scope = 2;
		picture = "\A3\characters_f_beta\Data\UI\icon_H_I_helmet_heli_ca.paa";
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\helmet_heli_canada_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "A3\Characters_F\Common\headgear_helmet_heli";
			modelSides[] = {2,3};
		};
	};
	class H_RCAF_CrewHelmetHeli: H_RCAF_PilotHelmetHeli
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_RCAF_CrewHelmetHeli";
		displayName = "Heli Crew Helmet";
		picture = "\A3\characters_f_beta\Data\UI\icon_H_I_helmet_heliShield_ca.paa";
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\helmet_heli_canada_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\Common\headgear_helmet_heli_shield";
			modelSides[] = {2,3};
		};
	};
	class H_RCAF_CrewHelmetHeli_01 : H_RCAF_CrewHelmetHeli {
		scope = 2;
		displayName = "Heli Crew Helmet (Skull 01)";
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\helmet_canadian_heli_altskull_heli_co.paa"};
	};
	class H_RCAF_CrewHelmetHeli_02 : H_RCAF_CrewHelmetHeli {
		scope = 2;
		displayName = "Heli Crew Helmet (Skull 02)";
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\helmet_canadian_heli_altskull2_co.paa"};
	};
	class H_RCAF_CrewHelmetHeli_03 : H_RCAF_CrewHelmetHeli {
		scope = 2;
		displayName = "Heli Crew Helmet (Skull 03)";
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\helmet_canadian_heli_altskull3_co.paa"};
	};
};
