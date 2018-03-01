class CfgPatches
{
	class caf_equip_c
	{
		units[] = {};
		weapons[] = {"caf_MNVG"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F", "A3_characters_F"};
	};
};
class CfgUnitInsignia
{
	class PPCLI
	{
		displayName = "Princess Patricia's Canadian Light Infantry"; // Name displayed in Arsenal
		author = "CAF"; // Author displayed in Arsenal
		texture = "caf_equip_t\insignia\PPCLI_ca.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	class CEFPatch
	{
		displayName = "Canadian Expeditionary Forces";
		author = "CAF";
		texture = "caf_equip_t\insignia\CEF_co.paa";
		textureVehicle = "";
	};
	class CEFSS
	{
		displayName = "Canadian Expeditionary Forces Pathfinders";
		author = "CAF";
		texture = "caf_equip_t\insignia\CEF_SS_ca.paa";
		textureVehicle = "";
	};
	class airborne
	{
		displayName = "Canadian Airborne";
		author = "CAF";
		texture = "caf_equip_t\insignia\airborne_ca.paa";
		textureVehicle = "";
	};
	class Irish
	{
		displayName = "Irish Regiment of Canada";
		author = "CAF";
		texture = "caf_equip_t\insignia\Irish_ca.paa";
		textureVehicle = "";
	};
	class Lorne
	{
		displayName = "The Lorne Scots";
		author = "CAF";
		texture = "caf_equip_t\insignia\Lorne_ca.paa";
		textureVehicle = "";
	};
	class LoyalEds
	{
		displayName = "The Loyal Edmonton Regiment";
		author = "CAF";
		texture = "caf_equip_t\insignia\LoyalEds_ca.paa";
		textureVehicle = "";
	};
	class PWOR
	{
		displayName = "Princess of Wales' Own Regiment";
		author = "CAF";
		texture = "caf_equip_t\insignia\pwor_ca.paa";
		textureVehicle = "";
	};
	class R22
	{
		displayName = "Royal 22nd Regiment";
		author = "CAF";
		texture = "caf_equip_t\insignia\R22er_ca.paa";
		textureVehicle = "";
	};
	class RHFC
	{
		displayName = "The Royal Highland Fusiliers of Canada";
		author = "CAF";
		texture = "caf_equip_t\insignia\RHFC_ca.paa";
		textureVehicle = "";
	};
	class RHLI
	{
		displayName = "The Royal Hamilton Light Infantry";
		author = "CAF";
		texture = "caf_equip_t\insignia\RHLI_ca.paa";
		textureVehicle = "";
	};
	class Argyll
	{
		displayName = "The Argyll and Sutherland Highlanders of Canada";
		author = "CAF";
		texture = "caf_equip_t\insignia\theargylls_ca.paa";
		textureVehicle = "";
	};
	class westmin
	{
		displayName = "Royal Westminster Regiment";
		author = "CAF";
		texture = "caf_equip_t\insignia\westminister_ca.paa";
		textureVehicle = "";
	};
};
class CfgWeapons
{

	class Binocular;
	class caf_MNVG: Binocular
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "caf_MNVG";
		displayName = "PVS 14 NVG";
		nameSound = "nvgoggles";
		simulation = "NVGoggles";
		showEmpty = 0;
		muzzlePos = "usti hlavne";
		muzzleEnd = "konec hlavne";
		value = 5;
		opticsZoomMin = 1;
		opticsZoomMax = 1;
		modelOptics = "\A3\weapons_f\reticle\optics_night";
		model = "\caf_equip\HMNVS_UP";
		picture = "\caf_equip_t\inv\INV_pvs14_CA.paa";
		descriptionUse = "$STR_A3_cfgWeapons_Default_NVGoggles1";
		visionMode[] = {"Normal","NVG"};
		class Library
		{
			libTextDesc = "$STR_LIB_NV_GOGGLES";
		};
		descriptionShort = "$STR_DSS_NV_GOGGLES";
		class ItemInfo
		{
			type = 616;
			uniformModel = "caf_equip\HMNVS_DOWN.p3d";
			modelOff = "caf_equip\HMNVS_UP.p3d";
			mass = 20;
		};
	};
};