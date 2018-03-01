class CfgPatches
{
	class caf_mineflag
	{
		requiredAddons[]=
		{};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"CAF_itemMineFlag"
		};
	};
};
class CfgFunctions {	
	class caf_mineflag {
		tag = "CAF";
		file = "\caf_mineflag\functions";
		
		class functions {
			class placeMineFlag {};
			
		};
	};
};
class CfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	
	class CAF_itemMineFlag: ItemCore
	{
		scope=2;
		type = 4096;
        detectRange = -1;
        simulation = "ItemMineDetector";
		displayName="Mine Flag";
		descriptionShort="Flag for Marking Mine Lanes";
		picture="\caf_mineflag\data\ui\picture_mineflag_ca.paa";
		model = "\A3\Signs_F\SignSpecial\FlagSmall_F.p3d";
        icon = "iconObject_circle";
        mapSize = 0.034;
		class ItemInfo: InventoryItem_Base_F
		{
			mass=1;
		};
	};
};
class CfgVehicles
{
	class Man;	// External class reference
	
	class CAManBase : Man {
		class ACE_SelfActions {
			class ACE_Equipment {
					class Place_MineFlag {
						displayName = "Place Mine Flag";
						condition = "'CAF_itemMineFlag' in items (_this select 0)";
						statement = "call CAF_fnc_placeMineFlag";
						showDisabled = 0;
						priority = 6;
						icon = "iconObject_circle";
					};
				};
			};
		};
	};