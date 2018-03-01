class CfgPatches {
	class CAF_Axe {
		units[] = {};
		weapons[] = {"CAF_Axe"};
		requiredVersion = 1;
		requiredAddons[] = {"caf_core"};
	};
};
class CfgWeapons
{
	class CBA_MiscItem_ItemInfo;
	class ACE_ItemCore;
	class ACE_Actions;
	class ACE_MainActions;
	class CAF_Axe: ACE_ItemCore
	{
		author = "Theebu";
		scope = 2;
		displayName = "Wood Axe";
		descriptionShort = "Loggers Axe for cutting wood.";
		model = "\a3\structures_F\Items\Tools\Axe_F.p3d";
		picture = "\CAF_Axe\axe_ui.paa";
		icon = "iconObject_4x1";
		mapSize = 0.034;
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
};
class CfgVehicles
{	
	class Man;
	class CAManBase: Man {
		class ACE_SelfActions {
			//class ACE_Equipment {
				
			class CAF_Axe {
				displayName = "Axe";
				exceptions[] = {"notOnMap"};
				condition = "('CAF_Axe' in items (_this select 0))";
				statement = "[cursorObject, player] spawn caf_fnc_treeRemoval";
			};
		};
	};
};
class CfgFunctions {
    #include "Functions.hpp"
};