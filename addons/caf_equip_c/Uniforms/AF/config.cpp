class CfgPatches
{
	class caf_equip_rcaf_u
	{
		units[] = {"CAF_CH146_PILOT_OD","CAF_CH146_PILOT_AR","CAF_CH147_PILOT_OD","CAF_CH147_PILOT_AR"};
		weapons[] = {"U_CAF_PilotCoveralls_ch146_OD","U_CAF_PilotCoveralls_ch146_AR","U_CAF_PilotCoveralls_ch147_OD","U_CAF_PilotCoveralls_ch147_AR"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F"};
	};
};

class cfgWeapons
{
	class InventoryItem_Base_F;
	class UniformItem: InventoryItem_Base_F
	{
		type = 801;
	};
	
	class U_B_HeliPilotCoveralls;
	class U_CAF_PilotCoveralls_ch146_OD: U_B_HeliPilotCoveralls 
	{
		scope = 2;
		displayName = "CH-146 Flight Suit (OLIVE)";
		author = "CAF";

		picture = "\A3\characters_f\data\ui\icon_U_B_coveralls_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"caf_equip_t\tex\ch146_coveralls_sage_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "CAF_CH146_PILOT_OD";
			containerClass = "Supply40";
			mass = 60;
		};
	};
	
	class U_CAF_PilotCoveralls_ch146_AR: U_CAF_PilotCoveralls_ch146_OD 
	{
		scope = 2;
		displayName = "CH-146 Flight Suit (TAN)";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"caf_equip_t\tex\ch146_coveralls_sand_co.paa"};
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "CAF_CH146_PILOT_AR";
			containerClass = "Supply40";
			mass = 60;
		};
	};
	
	class U_CAF_PilotCoveralls_ch147_OD: U_CAF_PilotCoveralls_ch146_OD 
	{
		scope = 2;
		displayName = "CH-147 Flight Suit (OLIVE)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"caf_equip_t\tex\ch147_coveralls_sage_co.paa"};

		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "CAF_CH147_PILOT_OD";
			containerClass = "Supply40";
			mass = 60;
		};
	};
	
	class U_CAF_PilotCoveralls_ch147_AR: U_CAF_PilotCoveralls_ch146_OD 
	{
		scope = 2;
		displayName = "CH-147 Flight Suit (TAN)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"caf_equip_t\tex\ch147_coveralls_sand_co.paa"};

		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "CAF_CH147_PILOT_AR";
			containerClass = "Supply40";
			mass = 60;
		};
	};
};	

class CfgVehicles {
	
	class B_Helipilot_F;
	class CAF_CH146_PILOT_OD: B_Helipilot_F 
	{
		author = "CAF Mod Team";
		faction = "CAF_TW";
		_generalMacro = "CAF_CH146_PILOT_OD";
		engineer = 1;
		scope = 2;
		displayName = "CH-146 Pilot (OD)";
		model = "\A3\characters_F\Common\coveralls.p3d";
		modelSides[] = {2, 3};
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"caf_equip_t\tex\ch146_coveralls_sage_co.paa",""};
		uniformClass = "U_CAF_PilotCoveralls_ch146_OD";
		weapons[] = {"Throw", "Put"};
		respawnWeapons[] = {"Throw", "Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		cost = 160000;
		camouflage = 2.0;
		linkedItems[] = {"H_RCAF_PilotHelmetHeli", "V_TacVest_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"H_RCAF_PilotHelmetHeli", "V_TacVest_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP"};
	};
	
	class CAF_CH146_PILOT_AR: CAF_ch146_PILOT_OD 
	{
		faction = "CAF_AR";
		_generalMacro = "CAF_CH146_PILOT_AR";
		engineer = 1;
		scope = 2;
		displayName = "CH-146 Pilot (TAN)";
		uniformClass = "U_CAF_PilotCoveralls_ch146_AR";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"caf_equip_t\tex\ch146_coveralls_sand_co.paa",""};
	};
	class CAF_CH147_PILOT_OD: CAF_ch146_PILOT_OD 
	{
		faction = "CAF_TW";
		_generalMacro = "CAF_CH147_PILOT_OD";
		engineer = 1;
		scope = 2;
		displayName = "CH-147 Pilot (OD)";
		uniformClass = "U_CAF_PilotCoveralls_ch147_OD";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"caf_equip_t\tex\ch147_coveralls_sage_co.paa",""};
	};
	class CAF_CH147_PILOT_AR: CAF_ch146_PILOT_OD 
	{
		faction = "CAF_AR";
		_generalMacro = "CAF_CH147_PILOT_AR";
		engineer = 1;
		scope = 2;
		displayName = "CH-147 Pilot (TAN)";
		uniformClass = "U_CAF_PilotCoveralls_ch147_ar";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"caf_equip_t\tex\ch147_coveralls_sand_co.paa",""};
	};
};