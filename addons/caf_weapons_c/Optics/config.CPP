class CfgPatches
{
	class CAF_ELCAN
	{
		units[] = {};
		weapons[] = {"optic_elcan"};
		requiredVersion = 0.1;
		addonRootClass = "A3_Weapons_F";
		requiredAddons[] = {"A3_Weapons_F","A3_Weapons_F_Items"};
	};
};
class asdg_SlotInfo;
class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail
{
	class compatibleItems
	{
		optic_elcan = 1;
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class optic_elcan: ItemCore
	{
		displayName = "Elcan";
		scope = 2;
		scopeArsenal = 2;
		picture = "\caf_weapons_t\inv\elcan.paa";
		model = "\caf_weapons\elcan3d";
		descriptionShort = "Elcan";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 4;
			RMBhint = "Elcan";
			optics = 1;
			modelOptics = "\caf_weapons\optic2";
			class OpticsModes
			{
				class Elcan
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
					opticsZoomMin = 0.125;
					opticsZoomMax = 0.125;
					opticsZoomInit = 0.125;
					memoryPointCamera = "opticEye";
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 400;
					discreteDistance[] = {200,300,400,500,600,700,800};	//DOESNT EVEN MATTER THIS SHIT ONLY 
					discreteDistanceInitIndex = 2;						//SHOOTS 400m WHEN ZEROED TO 200m. WAT
					cameraDir = "";
				};
				class battle: Elcan
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
				};
			};
		};
		inertia = 0.1;
	};
};