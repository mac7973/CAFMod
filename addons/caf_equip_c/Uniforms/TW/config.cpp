class CfgPatches
{
	class caf_equip_u_tw
	{
		units[] = {};
		weapons[] = {"U_CAF_uniform1_cadpatTW","U_CAF_uniform2_cadpatTW","U_CAF_GhilleSuit_tw"};
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
	class U_CAF_uniform1_cadpatTW: U_I_CombatUniform
	{
		scope = 2;
		displayName = "CADPAT - TW (Full)";
		picture = "\caf_equip_t\inv\icon_caf_tw.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "CAF_Soldier01_TW";
			containerClass = "Supply50";
			uniformType = "Default";
			mass = 40;
		};
	};
	
	
	
	class U_CAF_uniform2_cadpatTW: U_I_CombatUniform_shortsleeve
	{
		scope = 2;
		displayName = "CADPAT - TW (Rolled)";
		picture = "\caf_equip_t\inv\icon_caf_fol_tw.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "CAF_Soldier02_TW";
			containerClass = "Supply50";
			uniformType = "Default";
			mass = 40;
		};
	};

	class U_I_FullGhillie_lsh;
	class U_CAF_GhilleSuit_tw : U_I_FullGhillie_lsh 
	{
		scope = 2;
		displayName = "Ghillie Suit - TW";
		class ItemInfo : UniformItem 
		{
			uniformModel = "-";
			uniformClass = "CAF_Sniper_TW";
			containerClass = "Supply10";
			mass = 100;
		};

		author = "CAF";
		picture = "\A3\characters_f_mark\data\ui\icon_U_I_FullGhillie_lsh_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\ghillie_coverall_CAF_co.paa"};

	};
};

class CfgVehicles {

	class B_Soldier_unarmed_F;
	class CAF_Soldier01_TW : B_Soldier_unarmed_F {
	
		_generalMacro = "CAF_RIFLEMAN_TW";
		scope = 1;
		side = 1;
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		faction = "CAF_TW";
		author = "CAF MOD TEAM";
		displayName = "Rifleman";
		uniformAccessories[] = {};
		uniformClass = "U_CAF_uniform1_cadpatTW";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\ia_soldier_01_TW_co.paa",""};
		weapons[] = {"Throw", "Put"};
		respawnWeapons[] = {"Throw", "Put"};
		Items[] = {};
		RespawnItems[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"V_CAF_PlateCarrier1_TW", "H_CAF_CG634_TW_net", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_CAF_PlateCarrier1_TW", "H_CAF_CG634_TW_net", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
		class Wounds {
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat", "A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat", "A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_old.rvmat", "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat", "A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	
	};
	
	class CAF_Soldier02_TW : CAF_Soldier01_TW 
	{
		
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		uniformAccessories[] = {};
		uniformClass = "U_CAF_uniform2_cadpatTW";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\ia_soldier_01_TW_co.paa",""};
	};
	class I_ghillie_base_F;
	class CAF_Sniper_TW : I_ghillie_base_F 
	{
		
		author = "CAF";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_ghillie_lsh_F.jpg";
		_generalMacro = "CAF_Sniper_TW";
		scope = 1;
		displayName = "$STR_A3_cfgVehicles_I_ghillie_lsh_F0";
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\ghillie_coverall_CAF_co.paa","\A3\characters_f_exp\BLUFOR\Data\ghillie_threads_tna_ca.paa","\A3\characters_f_exp\BLUFOR\Data\ghillie_threads_5LOD_tna_co.paa"};

	};
	
};