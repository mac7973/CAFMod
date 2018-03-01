class DefaultEventHandlers;
class CfgPatches
{
	class caf_tracked_m109a8
	{
		units[] = {"CAF_M109_TW"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Armor_F"};
	};
};
class CfgVehicles
{
	
	
	class B_MBT_01_arty_base_F;
	class CAF_M109_TW: B_MBT_01_arty_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 11.83;
		class SimpleObject
		{
			eden = 1;
			animate[] = {{"damagehide",0},{"wheel_koll1",0},{"wheel_kolol1",0},{"wheel_podkolol1",0.33},{"wheel_kolp1",0},{"wheel_kolop1",0},{"wheel_podkolop1",0.33},{"wheel_koll2",0},{"wheel_kolp2",0},{"wheel_kolol2",0},{"wheel_kolol3",0},{"wheel_kolol4",0},{"wheel_kolol5",0},{"wheel_kolol6",0},{"wheel_kolop2",0},{"wheel_kolop3",0},{"wheel_kolop4",0},{"wheel_kolop5",0},{"wheel_kolop6",0},{"wheel_podkolol2",0.39},{"wheel_podkolol3",0.47},{"wheel_podkolol4",0.53},{"wheel_podkolol5",0.61},{"wheel_podkolol6",0.67},{"wheel_podkolop2",0.41},{"wheel_podkolop3",0.53},{"wheel_podkolop4",0.52},{"wheel_podkolop5",0.65},{"wheel_podkolop6",0.73},{"podkolol1_hide_damage",0},{"podkolol2_hide_damage",0},{"podkolol3_hide_damage",0},{"podkolol4_hide_damage",0},{"podkolol5_hide_damage",0},{"podkolol6_hide_damage",0},{"podkolol7_hide_damage",0},{"podkolol8_hide_damage",0},{"podkolop1_hide_damage",0},{"podkolop2_hide_damage",0},{"podkolop3_hide_damage",0},{"podkolop4_hide_damage",0},{"podkolop5_hide_damage",0},{"podkolop6_hide_damage",0},{"podkolop7_hide_damage",0},{"podkolop8_hide_damage",0},{"damagevez",0},{"mainturret",0},{"maingun",0.17},{"hatchcommander",0},{"recoil",0},{"obsturret",0},{"obsgun",0},{"damagevezvelitele",0},{"poklop_commander_damage",0},{"poklop_driver_damage",0},{"hatchdriver",0},{"plates_1_y",0},{"plates_2_y",0},{"plates_1_x",0},{"plates_2_x",0},{"plates_1_bank",0},{"plates_2_bank",0},{"maingunoptics",0.17},{"zaslehrot_hmg",0},{"artillery_muzzle_flash",0},{"gmg_muzzle_flash",0},{"zaslehrot_gmg",0}};
			hide[] = {"clan","zasleh2","light_l","light_r","zadni svetlo","brzdove svetlo","podsvit pristroju","poskozeni"};
			verticalOffset = 2.925;
			verticalOffsetWorld = 0.031;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_MBT_01_arty_F.jpg";

		scope = 2;
		_generalMacro = "CAF_M109_TW";
		displayName = "M109A8 Paladin";
		forceInGarage = 1;
		crew = "CAF_crewman_TW";
		faction = "CAF_TW";
		hiddenSelectionsTextures[] = {"caf_tracked_t\tex\mbt_cdn_body_co.paa","caf_tracked_t\tex\mbt_cdn_scorcher_co.paa","caf_tracked_t\tex\turret_cdn_co.paa"};
		availableForSupportTypes[] = {"Artillery"};
	};

};
//};