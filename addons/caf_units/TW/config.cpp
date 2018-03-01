
#include "cfgGroupsTW.hpp"
class DefaultEventhandlers;	// External class reference


class CfgPatches
{
	class caf_inf_tw
	{
		units[] = {
			"CAF_RIFLEMAN_tw",
			"CAF_GRENADIER_tw",
			"CAF_C9GUNNER_tw",
			"CAF_SECTIONIC_tw",
			"CAF_SECTION2IC_tw",
			"CAF_C6GUNNER_tw",
			"CAF_84GUNNER_tw",
			"CAF_RIFLEMAN_AT",
			"CAF_MEDIC_tw",
			"CAF_OFFICER_tw",
			"CAF_SNIPER_tw",
			"CAF_SPOTTER_tw",
			"CAF_VEHTECH_tw",
			"CAF_CBTENGINEER_tw",
			"CAF_GPMGASST_tw",
			"CAF_ATASST_tw",
			"CAF_CREWMAN_tw",
			"CAF_RECCE_IC_tw",
			"CAF_RECCE_2IC_tw",
			"CAF_RECCE_C9_tw",
			"CAF_RECCE_SIG"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
	};
};


class CfgVehicles
{
	class CAF_Soldier01_tw;
	class CAF_Soldier02_tw;

	class CAF_RIFLEMAN_tw : CAF_Soldier01_tw 
	{
		_generalMacro = "CAF_RIFLEMAN_tw";
		scope = 2;
		faction = CAF_TW;
		author = "CAF MOD TEAM";
		displayName = "Rifleman";
		uniformClass = "U_CAF_uniform1_cadpatTW";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\ia_soldier_01_tw_co.paa"};
		weapons[] = {
			"caf_C7A2_e", 
			"CAF_M72A6",
			"Throw", 
			"Put"
		};
		respawnWeapons[] = {
			"caf_C7A2_e", 
			"CAF_M72A6", 
			"Throw", 
			"Put"
		};
		Items[] = {
			"H_caf_boonie_tw"
		};
		RespawnItems[] = {
			"H_caf_boonie_tw"
		};
		magazines[] = {
			"1Rnd_M72a6",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag", 
			"SmokeShell", 
			"SmokeShell", 
			"CAF_C13", 
			"CAF_C13"
		};
		respawnMagazines[] = {

			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag", 
			"SmokeShell", 
			"SmokeShell", 
			"CAF_C13", 
			"CAF_C13"
		};

		linkedItems[] = {

			"V_CAF_rifleman_TW", 
			"H_CAF_CG634_tw", 
			"caf_MNVG", 
			"ItemMap", 
			"ItemCompass", 
			"ItemWatch", 
			"ItemRadio"
		};
		respawnLinkedItems[] = {

			"V_CAF_rifleman_TW", 
			"H_CAF_CG634_tw", 
			"caf_MNVG", 
			"ItemMap", 
			"ItemCompass", 
			"ItemWatch", 
			"ItemRadio"
		};
	};


	class CAF_GRENADIER_tw : CAF_Soldier01_tw 
	{
		scope = 2;
		faction = CAF_TW;
		_generalMacro = "CAF_GRENADIER_tw";
		displayName = "Grenadier";
		weapons[] = {"caf_C7A2_M203_e", "Throw", "Put"};
		respawnWeapons[] = {"caf_C7A2_M203_e","Throw", "Put"};
		Items[] = {
			"H_caf_boonie_tw"
		};
		RespawnItems[] = {
			"H_caf_boonie_tw"
		};
		magazines[] = {
	
			//Grenades
			"SmokeShell", 
			"SmokeShell", 
			"CAF_C13", 
			"CAF_C13",
			
			//Ammunition
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag", 
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
		respawnMagazines[] = {
		
			//Grenades
			"SmokeShell", 
			"SmokeShell", 
			"CAF_C13", 
			"CAF_C13",
			
			//Ammunition
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag", 
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		
		};
		linkedItems[] = {
			"V_CAF_grenadier_TW", 
			"H_CAF_CG634_tw_G_U", 
			"caf_MNVG", 
			"ItemMap", 
			"ItemCompass", 
			"ItemWatch", 
			"ItemRadio"
		};
		respawnLinkedItems[] = {
			"V_CAF_grenadier_TW", 
			"H_CAF_CG634_NET_tw", 
			"caf_MNVG",
			"ItemMap", 
			"ItemCompass", 
			"ItemWatch", 
			"ItemRadio"
		};
	};
	
	class CAF_C9GUNNER_tw : CAF_Soldier02_tw 
	{
		scope = 2;
		faction = CAF_TW;
		_generalMacro = "CAF_C9GUNNER_tw";
		displayName = "C9 Gunner";
		icon = "iconManMG";
		weapons[] = {
		"CAF_C9A2_e", 
		"Throw", 
		"Put"
		};
		respawnWeapons[] = {
		"CAF_C9A2_e", 
		"Throw", 
		"Put"
		};
		Items[] = {
		"H_caf_boonie_tw"
		};
		RespawnItems[] = {
		"H_caf_boonie_tw"
		};
		magazines[] = {
		
		
		//Grenades
		
		"SmokeShell", 
		"SmokeShell", 
		"CAF_C13", 
		"CAF_C13",
		
		//Ammunition
		"200Rnd_556x45_Box_F",
		"200Rnd_556x45_Box_F",
		"200Rnd_556x45_Box_F"
		};
		respawnMagazines[] = {
		
		
		//Grenades
		
		"SmokeShell", 
		"SmokeShell", 
		"CAF_C13", 
		"CAF_C13",
		
		//Ammunition
		"200Rnd_556x45_Box_F",
		"200Rnd_556x45_Box_F",
		"200Rnd_556x45_Box_F"
		};
		linkedItems[] = {
		"V_CAF_rifleman_TW", 
		"H_CAF_CG634_NET_tw_G_U", 
		"caf_MNVG", 
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
		respawnLinkedItems[] = {
		"V_CAF_rifleman_TW", 
		"H_CAF_CG634_NET_tw_G_U", 
		"caf_MNVG",
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
		
	};
	
	class CAF_C6GUNNER_tw : CAF_Soldier02_tw 
	{
	
		scope = 2;
		faction = CAF_TW;
		_generalMacro = "CAF_C6GUNNER_tw";
		displayName = "C6 Gunner";
		icon = "iconManMG";
		weapons[] = {
			"C6GPMG",
			"caf_BHP",
			"Throw", 
			"Put"
		};
		respawnWeapons[] = {
			"C6GPMG",
			"caf_BHP",
			"Throw", 
			"Put"
		};
		Items[] = {
			"H_caf_boonie_tw"
		};
		RespawnItems[] = {
			"H_caf_boonie_tw"
		};
		magazines[] = {
		
		"13Rnd_9x19_BHP",
			"13Rnd_9x19_BHP",
		//Grenades
		
		"SmokeShell", 
		"SmokeShell", 
		"CAF_C13", 
		"CAF_C13",
		
		//Ammunition
		"220Rnd_762x51_Box",
		"220Rnd_762x51_Box",
		"220Rnd_762x51_Box"
		};
		respawnMagazines[] = {
		
		"13Rnd_9x19_BHP",
			"13Rnd_9x19_BHP",
		//Grenades
		
		"SmokeShell", 
		"SmokeShell", 
		"CAF_C13", 
		"CAF_C13",
		
		//Ammunition
		"220Rnd_762x51_Box",
		"220Rnd_762x51_Box",
		"220Rnd_762x51_Box"
		};
		linkedItems[] = {
		"V_CAF_riflemanLeg_TW", 
		"H_CAF_CG634_tw_G_U", 
		"caf_MNVG", 
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
		respawnLinkedItems[] = {
		"V_CAF_riflemanLeg_TW", 
		"H_CAF_CG634_tw_G_U", 
		"caf_MNVG",
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
		
	};
	
	class CAF_OFFICER_tw : CAF_Soldier01_tw 
	{
	
		scope = 2;
		faction = CAF_TW;
		_generalMacro = "CAF_OFFICER_tw";
		displayName = "Officer";
		icon = "iconManLeader";
		//picture = "caf_core\characters\army\data\ui\icon_seccomd_ca.paa";
		weapons[] = {
			"caf_C8A3_e",
			"caf_BHP",
			"Throw",
			"Put", 
			"LASERDESIGNATOR"
		};
		respawnWeapons[] = {
			"caf_C8A3_e",
			"caf_BHP",
			"Throw",
			"Put",
			"LASERDESIGNATOR"
		};
		
		Items[] = {
			"H_caf_boonie_tw",
			"ItemRadio"
		};
		RespawnItems[] = {
			"H_caf_boonie_tw",
			"ItemRadio"
		};
		magazines[] = {
		
			"LASERBATTERIES",
			"13Rnd_9x19_BHP",
			"13Rnd_9x19_BHP",
			//Ammunition
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag", 
			"SmokeShell", 
			"SmokeShell", 
			"CAF_C13", 
			"CAF_C13"
		
		};
		respawnMagazines[] = {
		
			"LASERBATTERIES",
			"13Rnd_9x19_BHP",
			"13Rnd_9x19_BHP",
			//Ammunition
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag", 
			"SmokeShell", 
			"SmokeShell", 
			"CAF_C13", 
			"CAF_C13"
		
		};
		linkedItems[] = {
			"V_CAF_officerLeg_TW", 
			"H_CAF_CG634_tw_G_U", 
			"caf_MNVG",
			"ItemMap", 
			"ItemCompass", 
			"ItemWatch", 
			"ItemRadio"
		};
		respawnLinkedItems[] = {
			"V_CAF_officerLeg_TW", 
			"H_CAF_CG634_tw_G_U", 
			"caf_MNVG",
			"ItemMap", 
			"ItemCompass", 
			"ItemWatch", 
			"ItemRadio"
		};
	};
	
	class CAF_SECTIONIC_tw : CAF_Soldier02_tw 
	{
	
		scope = 2;
		faction = CAF_TW;
		_generalMacro = "CAF_SECTIONIC_tw";
		displayName = "Section Commander";
		icon = "iconManLeader";
		//picture = "caf_core\characters\army\data\ui\icon_seccomd_ca.paa";
		weapons[] = {
			"caf_C8A3_e",
			"caf_BHP",
			"Throw",
			"Put", 
			"rangefinder"
		};
		respawnWeapons[] = {
			"caf_C7A2_e",
			"caf_BHP",
			"Throw",
			"Put",
			"rangefinder"
		};
		
		Items[] = {
			"H_caf_boonie_tw",
			"ItemRadio"
		};
		RespawnItems[] = {
			"H_caf_boonie_tw",
			"ItemRadio"
		};
		magazines[] = {
		
			"13Rnd_9x19_BHP",
			"13Rnd_9x19_BHP",
			//Ammunition
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag", 
			"SmokeShell", 
			"SmokeShell", 
			"CAF_C13", 
			"CAF_C13"
		
		};
		respawnMagazines[] = {
		
			"13Rnd_9x19_BHP",
			"13Rnd_9x19_BHP",
			//Ammunition
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag", 
			"SmokeShell", 
			"SmokeShell", 
			"CAF_C13", 
			"CAF_C13"
		
		};
		linkedItems[] = {
			"V_CAF_officerLeg_TW", 
			"H_CAF_CG634_tw", 
			"caf_MNVG",
			"ItemMap", 
			"ItemCompass", 
			"ItemWatch", 
			"ItemRadio"
		};
		respawnLinkedItems[] = {
			"V_CAF_officerLeg_TW", 
			"H_CAF_CG634_tw", 
			"caf_MNVG",
			"ItemMap", 
			"ItemCompass", 
			"ItemWatch", 
			"ItemRadio"
		};
	};
	
	class CAF_SECTION2IC_tw : CAF_Soldier01_tw 
	{
	
		_generalMacro = "CAF_SECTION2IC_tw";
		scope = 2;
		faction = CAF_TW;
		displayName = "Section 2IC";
		icon = "iconManLeader";
		//picture = "caf_core\characters\army\data\ui\icon_2IC_ca.paa";
		weapons[] = {
		"caf_C7A2_e",
		"Throw",
		"Put", 
		"rangefinder"
		};
		respawnWeapons[] = {
		"caf_C7A2_e",
		"Throw",
		"Put",
		"rangefinder"
		};
		
		Items[] = {
		"H_caf_boonie_tw"
		};
		RespawnItems[] = {
		"H_caf_boonie_tw"
		};
		magazines[] = {
		
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag", 
		"SmokeShell", 
		"SmokeShell", 
		"CAF_C13", 
		"CAF_C13"
		
		};
		respawnMagazines[] = {
		
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag", 
		"SmokeShell", 
		"SmokeShell", 
		"CAF_C13", 
		"CAF_C13"
		
		};
		linkedItems[] = {
		"V_CAF_rifleman_TW", 
		"H_CAF_CG634_tw", 
		"caf_MNVG",
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
		respawnLinkedItems[] = {
		"V_CAF_rifleman_TW", 
		"H_CAF_CG634_tw", 
		"caf_MNVG",
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
	};
	
	class CAF_84GUNNER_tw : CAF_Soldier01_tw 
	{
	
			
		
		_generalMacro = "84GUNNER";
		scope = 2;
		faction = CAF_TW;
		author = "CAF MOD TEAM";
		displayName = "84 Gunner";
		uniformClass = "U_CAF_uniform1_cadpatTW";
		backpack = "B_caf_84_AmmoBag_HEAT";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\ia_soldier_01_tw_co.paa"};
		weapons[] = {
		"caf_C7A2_e", 
		"CAF_M3CG", 
		"Throw", 
		"Put"
		};
		respawnWeapons[] = {
		"caf_C7A2_e", 
		"CAF_M3CG",
		"Throw", 
		"Put"
		};
		Items[] = {
		"H_caf_boonie_tw"
		};
		RespawnItems[] = {
		"H_caf_boonie_tw"
		};
		magazines[] = {
		
		"FFV551_HEAT",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag", 
		"SmokeShell", 
		"SmokeShell", 
		"CAF_C13", 
		"CAF_C13"
		
		};
		respawnMagazines[] = {
		
		"FFV551_HEAT",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag", 
		"SmokeShell", 
		"SmokeShell", 
		"CAF_C13", 
		"CAF_C13"
		
		};
		linkedItems[] = {
		"V_CAF_rifleman_TW", 
		"H_CAF_CG634_tw", 
		"caf_MNVG", 
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
		respawnLinkedItems[] = {
		"V_CAF_rifleman_TW", 
		"H_CAF_CG634_tw", 
		"caf_MNVG", 
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
	};

	class CAF_MEDIC_tw : CAF_Soldier01_tw 
	{
		_generalMacro = "CAF_MEDIC_tw";
		scope = 2;
		faction = CAF_TW;
		author = "CAF MOD TEAM";
		displayName = "Medic";
		uniformClass = "U_CAF_uniform1_cadpatTW";
		backpack = "B_CAF_Carryall_Medical_tw";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\ia_soldier_01_tw_co.paa"};
		weapons[] = {
		"caf_C8A3_e", 
		"Throw", 
		"Put"
		};
		respawnWeapons[] = {
		"caf_C7A2_e", 
		"Throw", 
		"Put"
		};
		Items[] = {
		"H_caf_boonie_tw"
		};
		RespawnItems[] = {
		"H_caf_boonie_tw"
		};
		magazines[] = {
		
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag", 
		"SmokeShell", 
		"SmokeShell"
		
		};
		respawnMagazines[] = {
		
		
		//Ammunition
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag", 
		"SmokeShell", 
		"SmokeShell"
		
		};
		linkedItems[] = {
		"V_CAF_medic_TW", 
		"H_CAF_CG634_tw", 
		"caf_MNVG", 
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
		respawnLinkedItems[] = {
		"V_CAF_medic_TW", 
		"H_CAF_CG634_tw", 
		"caf_MNVG", 
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
	
	
	};

	class CAF_CREWMAN_tw : CAF_Soldier01_tw 
	{
	
		_generalMacro = "CAF_CREWMAN_tw";
		scope = 2;
		faction = CAF_TW;
		engineer = 1;
		author = "CAF MOD TEAM";
		displayName = "Crewman";
		uniformClass = "U_CAF_uniform1_cadpatTW";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\caf_equip_t\tex\ia_soldier_01_tw_co.paa"};
		weapons[] = {
		"caf_BHP",
		"Throw", 
		"Put"
		};
		respawnWeapons[] = {
		"caf_BHP",
		"Throw", 
		"Put"
		};
		Items[] = {
		"H_caf_boonie_tw"
		};
		RespawnItems[] = {
		"H_caf_boonie_tw"
		};
		magazines[] = {
		"13Rnd_9x19_BHP",
		"13Rnd_9x19_BHP"
		
		//Ammunition
		
		};
		respawnMagazines[] = {
		"13Rnd_9x19_BHP",
		"13Rnd_9x19_BHP"
		
		//Ammunition
		
		};
		linkedItems[] = {
		"V_CAF_FragVest_TW", 
		"H_CAF_CREWHELMET", 
		"caf_MNVG", 
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
		respawnLinkedItems[] = {
		"V_CAF_FragVest_TW", 
		"H_CAF_CREWHELMET", 
		"caf_MNVG", 
		"ItemMap", 
		"ItemCompass", 
		"ItemWatch", 
		"ItemRadio"
		};
	};
};