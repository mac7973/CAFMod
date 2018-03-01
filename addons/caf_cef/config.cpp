class CfgPatches
{
	class caf_cef
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"caf_core","A3_Weapons_F", "A3_characters_F"};
	};
};
#include "functions\functions.hpp"

class CfgVehicles
{	

	///ACE Medical Boxes
	#include "ammoboxes.hpp"
	#include "cf18.hpp"
	//TFAR Backpacks
	class tf_rt1523g_big;
	class tf_rt1523g_CAF: tf_rt1523g_big
	{
		author = "Raspu, Gandi, Nkey";
		displayName = "RT-1523G (ASIP) Big (TW)";
		descriptionShort = "RT-1523G (ASIP) Big long range radio 20km";
		maximumLoad = 160;
		mass = 160;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"caf_cef\data\clf_nicecomm2_aff_TW_co"};
		model="\task_force_radio_items\models\clf_nicecomm2";
	};
	class clf_nicecomm2_coy;
	class B_caf_falconIII : clf_nicecomm2_coy {
		displayName = "FALCON III MULTIBAND (TW)";
		descriptionShort = "FALCON III MULTIBAND";
		maximumLoad = 35;
		mass = 80;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"caf_cef\data\clf_nicecomm2_aff_TW_co"};
		model = "\clf_radios\clf_nicecomm2.p3d";
	};

	///ACE ACTIONS
	class Man;
	class CAManBase: Man 
	{
		class ACE_SelfActions
		 {
			class CAF_TFAR 
			{
				displayName = "PRR";
				condition = 1;
				exceptions[] = {};
				statement = "";
				showDisabled = 0;
				priority = 4.5;	
				icon = "caf_cef\functions\electronics\images\icon_PRR_ca.paa";
				class ACE_CWL_RADIO_A1 {	
					displayName = "Block A1";
					condition = "assignedItems (_this select 0) select 3 in (getArray (configFile >> 'hk_radios' >> 'hk_radios'))";
					statement = "[_this select 0, 'A1'] call CAF_e_fnc_setPRRBlock";
					showDisabled = 0;
					priority = 6;
				};
				class ACE_CWL_RADIO_A2{
					displayName = "Block A2";
					condition = "assignedItems (_this select 0) select 3 in (getArray (configFile >> 'hk_radios' >> 'hk_radios'))";
					statement = "[_this select 0, 'A2'] call CAF_e_fnc_setPRRBlock";
					showDisabled = 0;
					priority = 6;
				};
				class ACE_CWL_RADIO_A3{
					displayName = "Block A3";
					condition = "assignedItems (_this select 0) select 3 in (getArray (configFile >> 'hk_radios' >> 'hk_radios'))";
					statement = "[_this select 0, 'A3'] call CAF_e_fnc_setPRRBlock";
					showDisabled = 0;
					priority = 6;
				};
				class ACE_CWL_RADIO_A4{
					displayName = "Block A4";
					condition = "assignedItems (_this select 0) select 3 in (getArray (configFile >> 'hk_radios' >> 'hk_radios'))";
					statement = "[_this select 0, 'A4'] call CAF_e_fnc_setPRRBlock";
					showDisabled = 0;
					priority = 6;
				};
			
				class ACE_CWL_RADIO_B1 {	
					displayName = "Block B1";
					condition = "assignedItems (_this select 0) select 3 in (getArray (configFile >> 'hk_radios' >> 'hk_radios'))";
					statement = "[_this select 0, 'B1'] call CAF_e_fnc_setPRRBlock";
					showDisabled = 0;
					priority = 6;
				};
				class ACE_CWL_RADIO_B2{
					displayName = "Block B2";
					condition = "assignedItems (_this select 0) select 3 in (getArray (configFile >> 'hk_radios' >> 'hk_radios'))";
					statement = "[_this select 0, 'B2'] call CAF_e_fnc_setPRRBlock";
					showDisabled = 0;
					priority = 6;
				};
				class ACE_CWL_RADIO_B3{
					displayName = "Block B3";
					condition = "assignedItems (_this select 0) select 3 in (getArray (configFile >> 'hk_radios' >> 'hk_radios'))";
					statement = "[_this select 0, 'B3'] call CAF_e_fnc_setPRRBlock";
					showDisabled = 0;
					priority = 6;
				};
				class ACE_CWL_RADIO_B4{
					displayName = "Block B4";
					condition = "assignedItems (_this select 0) select 3 in (getArray (configFile >> 'hk_radios' >> 'hk_radios'))";
					statement = "[_this select 0, 'B4'] call CAF_e_fnc_setPRRBlock";
					showDisabled = 0;
					priority = 6;
				};
			
			};
		class CAF_electronics 
		{
			displayName = "Configure BFT";
			exceptions[] = {"notOnMap"};
			condition = "(('ItemcTab' in assignedItems (_this select 0)) or ('ItemAndroid' in assignedItems (_this select 0)))";
			statement = "";
			class CAF_acoy_cs 
			{
				displayName = "1 Commando";
				condition = 1;
				statement = "";
				class CAF_1_9 {
					displayName = "I-1-9";
					condition = 1;
					statement = "['I-1-9'] call CAF_e_fnc_setCtabCallsign;";
				};	
				class CAF_1_9_C {
					displayName = "I-1-9-C";
					condition = 1;
					statement = "['I-1-9-C'] call CAF_e_fnc_setCtabCallsign;";
				};	
				class CAF_acoy_1plt_cs {
					displayName = "1 Troop";
					condition = 1;
					statement = "";
						class CAF_1_1 {
							displayName = "I-1-1";
							condition = 1;
							statement = "['I-1-1'] call CAF_e_fnc_setCtabCallsign;";
						};	
						class CAF_1_1_A {
							displayName = "I-1-1-A";
							condition = 1;
							statement = "['I-1-1-A'] call CAF_e_fnc_setCtabCallsign;";
						};	
						class CAF_1_1_B {
							displayName = "I-1-1-B";
							condition = "";
							statement = "['I-1-1-B'] call CAF_e_fnc_setCtabCallsign;";
						};	
						class CAF_1_1_C {
							displayName = "I-1-1-C";
							condition = 1;
							statement = "['I-1-1-C'] call CAF_e_fnc_setCtabCallsign;";
						};	
						class CAF_1_1_D {
							displayName = "I-1-1-D";
							condition = 1;
							statement = "['I-1-1-D'] call CAF_e_fnc_setCtabCallsign;";
						};	
					};
				class CAF_acoy_2plt_cs 
				{
					displayName = "2 Troop";
					condition = 1;
					statement = "";
						class CAF_1_2 {
							displayName = "I-1-2";
							condition = 1;
							statement = "['I-1-2'] call CAF_e_fnc_setCtabCallsign;";
						};	
						class CAF_1_2_A {
							displayName = "I-1-2-A";
							condition = 1;
							statement = "['I-1-2-A'] call CAF_e_fnc_setCtabCallsign;";
						};	
						class CAF_1_2_B {
							displayName = "I-1-2-B";
							condition = 1;
							statement = "['I-1-2-B'] call CAF_e_fnc_setCtabCallsign;";
						};	
						class CAF_1_2_C {
							displayName = "I-1-2-C";
							condition = 1;
							statement = "['I-1-2-C'] call CAF_e_fnc_setCtabCallsign;";
						};	
						class CAF_1_2_D {
							displayName = "I-1-2-D";
							condition = 1;
							statement = "['I-1-2-D'] call CAF_e_fnc_setCtabCallsign;";
						};	
					};
				};
							
				class CAF_cs_reset 
				{
					displayName = "Release Callsign";
					condition = 1;
					statement = "[_this select 0] call CAF_e_fnc_dropCtabCallsign;";	
				};
			};
		};
	};
};


    