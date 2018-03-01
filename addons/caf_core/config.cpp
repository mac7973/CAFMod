class CfgPatches
{
	class caf_core
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F", "A3_characters_F"};
	};
};
#include "functions\functions.hpp"

class CfgFactionClasses
{
	class CAF_TW
	{
		displayName = "Canada (TW)";
		icon = "\A3\ui_f\data\map\markers\flags\Canada_ca.paa";
		author = "CAF MOD TEAM";
		priority = 2;
		side = 1;
	};
	class CANSOFCOM
	{
		displayName = "Cansofcom";
		icon = "\A3\ui_f\data\map\markers\flags\Canada_ca.paa";
		author = "CAF MOD TEAM";
		priority = 2;
		side = 1;
	};
	class CAF_AR
	{
		displayName = "Canada (AR)";
		icon = "\A3\ui_f\data\map\markers\flags\Canada_ca.paa";
		author = "CAF MOD TEAM";
		priority = 2;
		side = 1;
	};
	class CAF_AC
	{
		displayName = "Canada (AC)";
		icon = "\A3\ui_f\data\map\markers\flags\Canada_ca.paa";
		author = "CAF MOD TEAM";
		priority = 2;
		side = 1;
	};
};
class cfgVehicleClasses
{
	class men_RCAF
	{
		displayName = "Air Crew";
	};
	
};
class cfgVehicles
{
	#include "ammoboxes.hpp"
	class Man;
	class CAManBase: Man 
	{
		class ACE_SelfActions
		{
			class CAF_headgear 
			{
				displayName = "Headgear";
				exceptions[] = {"notOnMap"};
				condition = 1;
				statement = "";
				
				class CAF_toggleGoogles_OFF {
					displayName = "Googles Off";
					condition = "headgear (_this select 0) in (getArray (configFile >> 'CAF_glasses_classes' >> 'hasGoggles'))";
					statement = "[_this select 0,1] call CAF_hg_fnc_toggleGoggles;";
				};	
				class CAF_toggleGoogles_On {
					displayName = "Googles On";
					condition = "headgear (_this select 0) in (getArray (configFile >> 'CAF_glasses_classes' >> 'noGoggles'))";
					statement = "[_this select 0,0] call CAF_hg_fnc_toggleGoggles;";
				};	

				class CAF_toggleNet_OFF {
					displayName = "Net Off";
					condition = "headgear (_this select 0) in (getArray (configFile >> 'CAF_net_classes' >> 'hasNet'))";
					statement = "[_this select 0,1] call CAF_hg_fnc_toggleNet;";
				};	
				class CAF_toggleNet_On {
					displayName = "Net On";
					condition = "headgear (_this select 0) in (getArray (configFile >> 'CAF_net_classes' >> 'noNet'))";
					statement = "[_this select 0,0] call CAF_hg_fnc_toggleNet;";
				};

				class CAF_toggleScrim_OFF {
					displayName = "Scrim Off";
					condition = "headgear (_this select 0) in (getArray (configFile >> 'CAF_scrim_classes' >> 'hasScrim'))";
					statement = "[_this select 0,1] call CAF_hg_fnc_toggleScrim;";
				};	
				class CAF_toggleScrim_On {
					displayName = "Scrim On";
					condition = "headgear (_this select 0) in (getArray (configFile >> 'CAF_scrim_classes' >> 'noScrim'))";
					statement = "[_this select 0,0] call CAF_hg_fnc_toggleScrim;";
				};
				
			};
			class CAF_uniform
			{
				displayName = "Uniform";
				exceptions[] = {"notOnMap"};
				condition = 1;
				statement = "";
				
				class CAF_sleevesUp {
					displayName = "Sleeves Up";
					condition = "uniform (_this select 0) in (getArray (configFile >> 'CAF_uniform_classes' >> 'unRolled'))";
					statement = "[_this select 0] call CAF_u_fnc_sleevesRoll;";
				};	
				class CAF_sleevesDown {
					displayName = "Sleeves Down";
					condition = "uniform (_this select 0) in (getArray (configFile >> 'CAF_uniform_classes' >> 'isRolled'))";
					statement = "[_this select 0] call CAF_u_fnc_sleevesUnRoll;";
				};				
			};
		};
	};
};

