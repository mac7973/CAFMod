class CfgPatches
{
	class caf_equip_u_ar
	{
		units[] = {};
		weapons[] = {"U_CAF_uniform1_cadpatAR","U_CAF_uniform2_cadpatAR","U_CAF_GhilleSuit_AR"};
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

	class U_I_CombatUniform;
	class U_I_CombatUniform_shortsleeve;
	class U_CAF_uniform1_cadpatAR: U_I_CombatUniform
	{
		scope = 2;
		displayName = "CADPAT - AR (Full)";
		picture = "\caf_equip_t\inv\icon_caf_AR.paa";

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "CAF_Soldier01_AR";
			containerClass = "Supply50";
			uniformType = "Default";
			mass = 40;
		};
	};
	
	class U_CAF_uniform2_cadpatAR: U_I_CombatUniform_shortsleeve
	{
		scope = 2;
		displayName = "CADPAT - AR (Rolled)";
		picture = "\caf_equip_t\inv\icon_caf_fol_AR.paa";

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "CAF_Soldier02_AR";
			containerClass = "Supply50";
			uniformType = "Default";
			mass = 40;
		};
	};
};


class CfgVehicles 
{
	class I_Soldier_unarmed_F;
	class CAF_Soldier01_AR : I_Soldier_unarmed_F 
	{
		_generalMacro = "CAF_RIFLEMAN_AR";
		scope = 1;
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		faction = "CAF_AR";
		author = "CAF MOD TEAM";
		displayName = "Rifleman";
		uniformAccessories[] = {};
		uniformClass = "U_CAF_uniform1_cadpatAR";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\ia_soldier_01_AR_co.paa",""};
		weapons[] = {"Throw", "Put"};
		respawnWeapons[] = {"Throw", "Put"};
		Items[] = {};
		RespawnItems[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"V_CAF_PlateCarrier1_AR", "H_CAF_CG634_AR", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_CAF_PlateCarrier1_AR", "H_CAF_CG634_AR", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};

		class Wounds {
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat", "A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat", "A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_old.rvmat", "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat", "A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	
	};
	
	class CAF_Soldier02_AR : CAF_Soldier01_AR {
		scope =1;
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		uniformAccessories[] = {};
		uniformClass = "U_CAF_uniform2_cadpatAR";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\ia_soldier_01_AR_co.paa",""};
	};
	
};