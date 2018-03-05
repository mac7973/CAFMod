
#include "CrewAnimations.hpp"
#include "basicDefines_A3.hpp"

class DefaultEventhandlers;
class CfgPatches
{
	class caf_wheeled
	{
		units[] = {"CAF_8x8_repair_F","CAF_8x8_ammo_F","CAF_8x8_fuel_F","CAF_8x8_transport_F","CAF_8x8_transport_uncovered_F"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Armor_F","A3_Soft_F"};
	};
};

class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class NewTurret;
		class Sounds;
		class HitPoints
		{
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
		};
	};
	////Kerax 8x8////
	class Truck_F: Car_F
	{
		unitInfoType = "RscUnitInfoNoWeapon";

		class Exhausts
		{
			class Exhaust1
			{
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = "ExhaustEffectHEMTT";
			};
		};
		class HitPoints: HitPoints
		{
			class HitRGlass;
			class HitLGlass;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitBody;
			class HitFuel;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
			class HitEngine;
		};
		class EventHandlers;
		class AnimationSources;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class Turrets
				{
					class CommanderOptics;
				};
			};
			class ViewGunner;
		};
	};
	class CAF_8x8_base_F: Truck_F
	{
		author = "CAF";
		mapSize = 12.02;
		_generalMacro = "CAF_8x8_base_F";
		class Library
		{
			libTextDesc = "Mack Renault Kerax 8x8";
		};
		editorSubcategory = "EdSubcat_Cars";
		vehicleClass = "Car";
		transportSoldier = 16;
		//memoryPointTaskMarker = "TaskMarker_1_pos";
		//slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		armor = 200;
		class HitPoints: HitPoints
		{
			class HitFuel: HitFuel
			{
				armor = 0.5;
				passThrough = 1;
				minimalHit = 0.0;
				explosionShielding = 1.5;
				radius = 0.45;
			};
			class HitEngine: HitEngine
			{
				armor = 0.5;
				passThrough = 1;
				minimalHit = 0.1;
				explosionShielding = 0.5;
				radius = 0.45;
			};
			class HitBody: HitBody
			{
				armor = 1.0;
				passThrough = 1;
				minimalHit = 0.0;
				explosionShielding = 1.5;
				radius = 0.33;
			};
			class HitLFWheel: HitLFWheel
			{
				armor = 0.5;
				minimalHit = 0.02;
				passThrough = 0.3;
				explosionShielding = 4;
				radius = 0.33;
			};
			class HitLBWheel: HitLBWheel
			{
				armor = 0.5;
				minimalHit = 0.02;
				passThrough = 0.3;
				explosionShielding = 4;
				radius = 0.33;
			};
			class HitLMWheel: HitLMWheel
			{
				armor = 0.5;
				minimalHit = 0.02;
				passThrough = 0.3;
				explosionShielding = 4;
				radius = 0.33;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor = 0.5;
				minimalHit = 0.02;
				passThrough = 0.3;
				explosionShielding = 4;
				radius = 0.33;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.5;
				minimalHit = 0.02;
				passThrough = 0.3;
				explosionShielding = 4;
				radius = 0.33;
			};
			class HitRBWheel: HitRBWheel
			{
				armor = 0.5;
				minimalHit = 0.02;
				passThrough = 0.3;
				explosionShielding = 4;
				radius = 0.33;
			};
			class HitRMWheel: HitRMWheel
			{
				armor = 0.5;
				minimalHit = 0.02;
				passThrough = 0.3;
				explosionShielding = 4;
				radius = 0.33;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor = 0.5;
				minimalHit = 0.02;
				passThrough = 0.3;
				explosionShielding = 4;
				radius = 0.33;
			};
			class HitGlass1: HitGlass1
			{
				armor = 1.5;
				passThrough = 0;
				explosionShielding = 3;
				radius = 0.33;
			};
			class HitGlass2: HitGlass2
			{
				armor = 1.5;
				passThrough = 0;
				explosionShielding = 3;
				radius = 0.33;
			};
			class HitGlass3: HitGlass3
			{
				armor = 1.5;
				passThrough = 0;
				explosionShielding = 3;
				radius = 0.33;
			};
			class HitGlass4: HitGlass4
			{
				armor = 1.5;
				passThrough = 0;
				explosionShielding = 3;
				radius = 0.33;
			};
		};
		cost = 50000;
		weapons[] = {"TruckHorn2"};
		driverAction = "T810Driver";
		cargoIsCoDriver[] = {1,1,0};
		cargoGetOutAction[] = {"GetOutMedium","GetOutMedium","GetOutHighHemtt"};
		getInAction = "GetInMRAP_01";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInMRAP_01","GetInMRAP_01","GetInHemttBack"};
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 1;

		cargoAction[] = {"Truck_Cargo01","Truck_Cargo01",
			"Truck_Cargo04","Truck_Cargo04","Truck_Cargo02","Truck_Cargo03","Truck_Cargo02","Truck_Cargo02","Truck_Cargo03","Truck_Cargo04","Truck_Cargo04","Truck_Cargo04","Truck_Cargo04","Truck_Cargo04","Truck_Cargo04","Truck_Cargo02"};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1","Compartment1","Compartment2"};
		memoryPointsGetInCoDriver = "pos_codriver";

		destrType = "DestructWreck";
		showNVGCargo[] = {0,1};
		soundAttenuationCargo[] = {1,0};
		attenuationEffectType = "CarAttenuation";
		soundGetIn[] = {"A3\Sounds_F\vehicles\soft\Truck_02\getin",0.56234133,1};
		soundGetOut[] = {"A3\Sounds_F\vehicles\soft\Truck_02\getout",0.56234133,1,20};
		soundDammage[] = {"",0.56234133,1};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_start",0.15848932,1.0};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_stop",0.19952622,1.0};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_start",1.0,1.0,200};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_stop",1.0,1.0,200};
		buildCrash0[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",1.0,1,200};
		buildCrash1[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",1.0,1,200};
		buildCrash2[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",1.0,1,200};
		buildCrash3[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",1.0,1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",1.0,1,200};
		WoodCrash1[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",1.0,1,200};
		WoodCrash2[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",1.0,1,200};
		WoodCrash3[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",1.0,1,200};
		soundWoodCrash[] = {"woodCrash0",0.25,"woodCrash1",0.25,"woodCrash2",0.25,"woodCrash3",0.25};
		armorCrash0[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",1.0,1,200};
		armorCrash1[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",1.0,1,200};
		armorCrash2[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",1.0,1,200};
		armorCrash3[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",1.0,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		Crash0[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",1.0,1,200};
		Crash1[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",1.0,1,200};
		Crash2[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",1.0,1,200};
		Crash3[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",1.0,1,200};
		soundCrashes[] = {"Crash0",0.25,"Crash1",0.25,"Crash2",0.25,"Crash3",0.25};
		class Sounds
		{
			class Idle_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_00",0.31622776,1};
				frequency = "0.8	+	((rpm/	3000) factor[(100/	3000),(800/	3000)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(10/	3000),(200/	3000)])	*	((rpm/	3000) factor[(600/	3000),(400/	3000)]))";
			};
			class Engine_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_01",0.2818383,1};
				frequency = "0.8	+	((rpm/	3000) factor[(610/	3000),(1200/	3000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(450/	3000),(820/	3000)])	*	((rpm/	3000) factor[(1200/	3000),(1000/	3000)]))";
			};
			class Engine1_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_02",0.2818383,1};
				frequency = "0.8	+	((rpm/	3000) factor[(1000/	3000),(1400/	3000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(900/	3000),(1200/	3000)])	*	((rpm/	3000) factor[(1550/	3000),(1300/	3000)]))";
			};
			class Engine2_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_03",0.2818383,1};
				frequency = "0.8	+	((rpm/	3000) factor[(1200/	3000),(1600/	3000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(1200/	3000),(1400/	3000)])	*	((rpm/	3000) factor[(1650/	3000),(1500/	3000)]))";
			};
			class Engine3_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_04",0.3548134,1};
				frequency = "0.8	+	((rpm/	3000) factor[(1400/	3000),(2200/	3000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(1300/	3000),(1500/	3000)])	*	((rpm/	3000) factor[(2200/	3000),(1600/	3000)]))*1.3";
			};
			class Engine4_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_05",0.3548134,1};
				frequency = "0.8	+	((rpm/	3000) factor[(1800/	3000),(2700/	3000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(1800/	3000),(2200/	3000)])	*	((rpm/	3000) factor[(2750/	3000),(2400/	3000)]))*1.3";
			};
			class Engine5_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_06",0.39810717,1};
				frequency = "0.8	+	((rpm/	3000) factor[(2300/	3000),(3000/	3000)])*0.2";
				volume = "engineOn*(1-camPos)*((rpm/	3000) factor[(2300/	3000),(3000/	3000)])";
			};
			class Idle_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_00",0.2818383,1};
				frequency = "0.9	+	((rpm/	3000) factor[(100/	3000),(800/	3000)])*0.15";
				volume = "engineOn*camPos*(((rpm/	3000) factor[(10/	3000),(200/	3000)])	*	((rpm/	3000) factor[(600/	3000),(400/	3000)]))";
			};
			class Engine_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_01",0.31622776,1};
				frequency = "0.9	+	((rpm/	3000) factor[(610/	3000),(1200/	3000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	3000) factor[(450/	3000),(820/	3000)])	*	((rpm/	3000) factor[(1200/	3000),(1000/	3000)]))";
			};
			class Engine1_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_02",0.3548134,1};
				frequency = "0.9	+	((rpm/	3000) factor[(1000/	3000),(1400/	3000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	3000) factor[(900/	3000),(1200/	3000)])	*	((rpm/	3000) factor[(1550/	3000),(1300/	3000)]))";
			};
			class Engine2_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_03",0.3548134,1};
				frequency = "0.9	+	((rpm/	3000) factor[(1200/	3000),(1600/	3000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	3000) factor[(1200/	3000),(1400/	3000)])	*	((rpm/	3000) factor[(1650/	3000),(1500/	3000)]))";
			};
			class Engine3_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_04",0.39810717,1};
				frequency = "0.9	+	((rpm/	3000) factor[(1400/	3000),(2200/	3000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	3000) factor[(1300/	3000),(1500/	3000)])	*	((rpm/	3000) factor[(2200/	3000),(1600/	3000)]))*1.3";
			};
			class Engine4_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_05",0.39810717,1};
				frequency = "0.9	+	((rpm/	3000) factor[(1800/	3000),(2700/	3000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	3000) factor[(1800/	3000),(2200/	3000)])	*	((rpm/	3000) factor[(2750/	3000),(2400/	3000)]))*1.3";
			};
			class Engine5_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_06",0.4466836,1};
				frequency = "0.9	+	((rpm/	3000) factor[(2300/	3000),(3000/	3000)])*0.2";
				volume = "engineOn*camPos*((rpm/	3000) factor[(2300/	3000),(3000/	3000)])";
			};
			class IdleThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_00",0.63095737,1,250};
				frequency = "0.9	+	((rpm/	3000) factor[(100/	3000),(800/	3000)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(10/	3000),(200/	3000)])	*	((rpm/	3000) factor[(600/	3000),(400/	3000)]))";
			};
			class EngineThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_01",0.7943282,1,300};
				frequency = "0.9	+	((rpm/	3000) factor[(610/	3000),(1200/	3000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(450/	3000),(820/	3000)])	*	((rpm/	3000) factor[(1200/	3000),(1000/	3000)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_02",0.70794576,1,350};
				frequency = "0.9	+	((rpm/	3000) factor[(1000/	3000),(1400/	3000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(900/	3000),(1200/	3000)])	*	((rpm/	3000) factor[(1550/	3000),(1300/	3000)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_03",1.0,1,400};
				frequency = "0.9	+	((rpm/	3000) factor[(1200/	3000),(1600/	3000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1200/	3000),(1400/	3000)])	*	((rpm/	3000) factor[(1650/	3000),(1500/	3000)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_04",1.2589254,1,450};
				frequency = "0.9	+	((rpm/	3000) factor[(1400/	3000),(2200/	3000)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1300/	3000),(1500/	3000)])	*	((rpm/	3000) factor[(2200/	3000),(1600/	3000)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_05",1.2589254,1,450};
				frequency = "0.9	+	((rpm/	3000) factor[(1800/	3000),(2700/	3000)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1800/	3000),(2200/	3000)])	*	((rpm/	3000) factor[(2750/	3000),(2400/	3000)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_06",1.4125376,1,500};
				frequency = "0.9	+	((rpm/	3000) factor[(2300/	3000),(3000/	3000)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3000) factor[(2300/	3000),(3000/	3000)])";
			};
			class IdleThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_00",0.63095737,1};
				frequency = "0.8	+	((rpm/	3000) factor[(100/	3000),(800/	3000)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(10/	3000),(200/	3000)])	*	((rpm/	3000) factor[(600/	3000),(400/	3000)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_01",0.22387211,1};
				frequency = "0.8	+	((rpm/	3000) factor[(610/	3000),(1200/	3000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(450/	3000),(820/	3000)])	*	((rpm/	3000) factor[(1200/	3000),(1000/	3000)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_02",0.25118864};
				frequency = "0.8	+	((rpm/	3000) factor[(1000/	3000),(1400/	3000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(900/	3000),(1200/	3000)])	*	((rpm/	3000) factor[(1550/	3000),(1300/	3000)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_03",0.25118864,1};
				frequency = "0.8	+	((rpm/	3000) factor[(1200/	3000),(1600/	3000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(1200/	3000),(1400/	3000)])	*	((rpm/	3000) factor[(1650/	3000),(1500/	3000)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_04",0.2818383,1};
				frequency = "0.8	+	((rpm/	3000) factor[(1400/	3000),(2200/	3000)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(1300/	3000),(1500/	3000)])	*	((rpm/	3000) factor[(2200/	3000),(1600/	3000)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_05",0.31622776,1};
				frequency = "0.8	+	((rpm/	3000) factor[(1800/	3000),(2700/	3000)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(1800/	3000),(2200/	3000)])	*	((rpm/	3000) factor[(2750/	3000),(2400/	3000)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_06",0.70794576,1};
				frequency = "0.8	+	((rpm/	3000) factor[(2300/	3000),(3000/	3000)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/	3000) factor[(2300/	3000),(3000/	3000)])";
			};
			class TiresRockOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",1.4125376,1.0,60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[0, 8])";
			};
			class TiresSandOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",1.4125376,1.0,60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[0, 8])";
			};
			class TiresGrassOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_01\Truck_01_Tires_Mud",1.9952624,1.0,60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[0, 8])";
			};
			class TiresGrassOut_DirtLayer
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_01\Truck_01_Tires_Dirt_Ext",2.818383,1.0,60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[0, 8])";
			};
			class TiresMudOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_01\Truck_01_Tires_Mud",1.9952624,1.0,60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[0, 8])";
			};
			class TiresMudOut_DirtLayer
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_01\Truck_01_Tires_Dirt_Ext",2.818383,1.0,60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[0, 8])";
			};
			class TiresGravelOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",1.4125376,1.0,60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[0, 8])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_01\Truck_01_Tires_Asphalt",2.5118864,1.0,60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[0, 8])";
			};
			class NoiseOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",1.9952624,1.0,90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockOut_Reverse
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",1.4125376,1.0,60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[0,-2])";
			};
			class TiresSandOut_Reverse
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",1.4125376,1.0,60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[0,-2])";
			};
			class TiresGrassOut_Reverse
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_01\Truck_01_Tires_Mud",1.9952624,1.0,60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[0,-2])";
			};
			class TiresGrassOut_Reverse_DirtLayer
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_01\Truck_01_Tires_Dirt_Ext",2.818383,1.0,60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[0,-2])";
			};
			class TiresMudOut_Reverse
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_01\Truck_01_Tires_Mud",1.9952624,1.0,60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[0,-2])";
			};
			class TiresMudOut_DirtLayer_Reverse
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_01\Truck_01_Tires_Dirt_Ext",2.818383,1.0,60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[0,-2])";
			};
			class TiresGravelOut_Reverse
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",1.4125376,1.0,60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[0,-2])";
			};
			class TiresAsphaltOut_Reverse
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_01\Truck_01_Tires_Asphalt",2.5118864,1.0,60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[0,-2])";
			};
			class NoiseOut_Reverse
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",1.5848932,1.0,90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0,-2])";
			};
			class TiresRockIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",0.7943282,1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[0, 10])";
			};
			class TiresSandIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",0.7943282,1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[0, 10])";
			};
			class TiresGrassIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_01\Truck_01_Tires_Mud",0.5011872,1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[0, 10])";
			};
			class TiresMudIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_01\Truck_01_Tires_Mud",0.5011872,1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[0, 10])";
			};
			class TiresGravelIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",0.63095737,1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[0, 10])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_01\Truck_01_Tires_Asphalt",0.3548134,1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[0, 10])";
			};
			class NoiseIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",0.22387211,1.0};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class TiresRockIn_Reverse
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",0.7943282,1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[0,-2])";
			};
			class TiresSandIn_Reverse
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",0.7943282,1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[0,-2])";
			};
			class TiresGrassIn_Reverse
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_01\Truck_01_Tires_Mud",0.5011872,1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[0,-2])";
			};
			class TiresMudIn_Reverse
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_01\Truck_01_Tires_Mud",0.5011872,1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[0,-2])";
			};
			class TiresGravelIn_Reverse
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",0.63095737,1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[0,-2])";
			};
			class TiresAsphaltIn_Reverse
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_01\Truck_01_Tires_Asphalt",0.3548134,1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[0,-2])";
			};
			class NoiseIn_Reverse
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",0.22387211,1.0};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0,-2])*(1-camPos)";
			};
			class brakes_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",2.818383,1,80};
				frequency = 1;
				volume = "1.1*engineOn*camPos*asphalt*(LongSlipDrive factor[-0.02, -0.05])*(Speed factor[0, 15])";
			};
			class turn_left_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",1.9952624,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive factor[0, 0.1])*(Speed factor[0, 15])";
			};
			class turn_right_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",1.9952624,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive factor[0, -0.1])*(Speed factor[0, 15])";
			};
			class brakes_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",0.5011872,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive factor[-0.02, -0.05])*(Speed factor[2, 11])";
			};
			class turn_left_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.3548134,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive factor[0, 0.1])*(Speed factor[0, 10])";
			};
			class turn_right_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.3548134,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive factor[0, -0.1])*(Speed factor[0, 10])";
			};
			class brakes_ext_dirt_HI
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_15_dirt_breaking",3.9810717,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive factor[-0.01, -0.1])*(Speed factor[0, 5])";
			};
			class brakes_ext_dirt_LO
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",3.9810717,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive factor[-0.01, -0.1])*(Speed factor[0, 5])";
			};
			class turn_left_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.70794576,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive factor[0, 0.1])*(Speed factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.70794576,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive factor[0, -0.1])*(Speed factor[0, 10])";
			};
			class brakes_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",0.3548134,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive factor[-0.02, -0.05])*(Speed factor[2, 11])";
			};
			class turn_left_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive factor[0, 0.1])*(Speed factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive factor[0, -0.1])*(Speed factor[0, 10])";
			};
			class Waternoise_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\soft_driving_in_water",0.70794576,1,300};
				frequency = "1";
				volume = "(speed factor[0, 5]) * water * camPos + (speed factor[-0.1, -5]) * water * camPos";
			};
			class Waternoise_int
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\soft_driving_in_water_int",0.56234133,1,100};
				frequency = "1";
				volume = "(speed factor[0, 5]) * water * (1-camPos) + (speed factor[-0.1, -5]) * water * (1-camPos)";
			};
			class RainExt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext",1.0,1.0,100};
				frequency = 1;
				volume = "camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int",1.0,1.0,100};
				frequency = 1;
				volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
			};
		};
		thrustDelay = 0.5;
		brakeIdleSpeed = 1.78;
		maxSpeed = 80;
		fuelCapacity = 45;
		antiRollbarForceCoef = 0;
		antiRollbarForceLimit = 5;
		antiRollbarSpeedMin = 0;
		antiRollbarSpeedMax = 20;
		idleRpm = 600;
		redRpm = 3000;
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-10.094,"N",0,"D1",5.562,"D2",3.456,"D3",2.623,"D4",1.678,"D5",1.078};
			TransmissionRatios[] = {"High",5.0};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		simulation = "carx";
		dampersBumpCoef = 6.0;
		differentialType = "all_limited";
		frontRearSplit = 0.5;
		frontBias = 1.3;
		rearBias = 1.3;
		centreBias = 1.3;
		clutchStrength = 55.0;
		enginePower = 450;
		maxOmega = 320;
		peakTorque = 1450;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 2.0;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		torqueCurve[] = {{0.0,0.2},{0.278,0.5},{0.35,0.85},{0.461,1.0},{0.7,0.95},{0.75,0.85},{0.8,0.7},{1.0,0.5}};
		switchTime = 0.51;
		class Wheels
		{
			class L1
			{
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.2";
				mass = 80;
				MOI = 40;
				dampingRate = 0.1;
				dampingRateDamaged = 1.0;
				dampingRateDestroyed = 1000.0;
				maxBrakeTorque = 10000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.15;
				maxDroop = 0.15;
				sprungMass = 1000;
				springStrength = 25000;
				springDamperRate = 5000;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};
			};
			class L2: L1
			{
				boneName = "wheel_1_2_damper";
				steering = 1;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
			};
			class L3: L1
			{
				boneName = "wheel_1_3_damper";
				steering = 0;
				center = "wheel_1_3_axis";
				boundary = "wheel_1_3_bound";
				suspForceAppPointOffset = "wheel_1_3_axis";
				tireForceAppPointOffset = "wheel_1_3_axis";
				maxHandBrakeTorque = 300000;
			};
			class L4: L1
			{
				boneName = "wheel_1_4_damper";
				steering = 1;
				center = "wheel_1_4_axis";
				boundary = "wheel_1_4_bound";
				suspForceAppPointOffset = "wheel_1_4_axis";
				tireForceAppPointOffset = "wheel_1_4_axis";
				maxHandBrakeTorque = 300000;
			};
			class R1: L1
			{
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
			};
			class R2: R1
			{
				boneName = "wheel_2_2_damper";
				steering = 1;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
			};
			class R3: R1
			{
				boneName = "wheel_2_3_damper";
				steering = 0;
				center = "wheel_2_3_axis";
				boundary = "wheel_2_3_bound";
				suspForceAppPointOffset = "wheel_2_3_axis";
				tireForceAppPointOffset = "wheel_2_3_axis";
				maxHandBrakeTorque = 300000;
			};
			class R4: R1
			{
				boneName = "wheel_2_4_damper";
				steering = 1;
				center = "wheel_2_4_axis";
				boundary = "wheel_2_4_bound";
				suspForceAppPointOffset = "wheel_2_4_axis";
				tireForceAppPointOffset = "wheel_2_4_axis";
				maxHandBrakeTorque = 300000;
			};
		};
		class RenderTargets
		{
			class mirrorL
			{
				renderTarget = "rendertarget0";
				class mirror
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderVisionMode = 0;
					renderQuality = 2;
					fov = 0.5;
				};
			};
			class mirrorL2
			{
				renderTarget = "rendertarget1";
				class mirror
				{
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderVisionMode = 0;
					renderQuality = 2;
					fov = 0.7;
				};
			};
			class mirrorR2
			{
				renderTarget = "rendertarget2";
				class mirror
				{
					pointPosition = "PIP2_pos";
					pointDirection = "PIP2_dir";
					renderVisionMode = 0;
					renderQuality = 2;
					fov = 0.7;
				};
			};
			class mirrorR
			{
				renderTarget = "rendertarget3";
				class mirror
				{
					pointPosition = "PIP3_pos";
					pointDirection = "PIP3_dir";
					renderVisionMode = 0;
					renderQuality = 2;
					fov = 0.5;
				};
			};
		};
		extCameraPosition[] = {0,3,-15};
		class Turrets{};
		class Damage
		{
			tex[] = {};
			mat[] =
			{
				"caf_wheeled_t\mat\auta_skla.rvmat",
				"caf_wheeled_t\mat\auta_skla_damage.rvmat",
				"caf_wheeled_t\mat\auta_skla_damage.rvmat",

				"caf_wheeled_t\mat\auta_skla_in.rvmat",
				"caf_wheeled_t\mat\auta_skla_in_damage.rvmat",
				"caf_wheeled_t\mat\auta_skla_in_damage.rvmat",

				"caf_wheeled_t\mat\t810_fueltank.rvmat",
				"caf_wheeled_t\mat\t810_fueltank_damage.rvmat",
				"caf_wheeled_t\mat\t810_fueltank_destruct.rvmat",

				"caf_wheeled_t\mat\cabin.rvmat",
				"caf_wheeled_t\mat\cabin_damage.rvmat",
				"caf_wheeled_t\mat\cabin_destruct.rvmat",

				"caf_wheeled_t\mat\undercarriage.rvmat",
				"caf_wheeled_t\mat\undercarriage_damage.rvmat",
				"caf_wheeled_t\mat\undercarriage_destruct.rvmat",

				"a3\data_f\default.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default_destruct.rvmat",
			};
		};
		class Reflectors
		{
			class Left
			{
				color[] = {1900,1300,950};
				ambient[] = {5,5,5};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 0;
				dayLight = 0;
				flareSize = 1.0;
				class Attenuation
				{
					start = 1.0;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class Right: Left
			{
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
			class Right2: Right
			{
				useFlare = 1;
				position = "P svetlo";
			};
			class Left2: Left
			{
				useFlare = 1;
				position = "L svetlo";
			};
		};
		aggregateReflectors[] = {{"Left","Right","Left2","Right2"}};
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo3",
			"clan"
		};
		hiddenSelectionsTextures[] =
		{
			"caf_wheeled_t\tex\cabin_co.paa",
			"caf_wheeled_t\tex\bed_co.paa",
			"caf_wheeled_t\tex\undercarriage_co.paa"
		};
		numberPhysicalWheels = 8;
	};
	class CAF_8x8_transport_F: CAF_8x8_base_F
	{
		features = "Lots of sitting room? It's a truck.";
		author = "CAF";
		class SimpleObject
		{
			eden = 1;
			animate[] = {{"damagehide",0},{"damagehidevez",0},{"damagehidehlaven",0},{"wheel_1_1_destruct",0},{"wheel_1_2_destruct",0},{"wheel_1_3_destruct",0},{"wheel_1_4_destruct",0},{"wheel_2_1_destruct",0},{"wheel_2_2_destruct",0},{"wheel_2_3_destruct",0},{"wheel_2_4_destruct",0},{"wheel_1_1_destruct_unhide",0},{"wheel_1_2_destruct_unhide",0},{"wheel_1_3_destruct_unhide",0},{"wheel_1_4_destruct_unhide",0},{"wheel_2_1_destruct_unhide",0},{"wheel_2_2_destruct_unhide",0},{"wheel_2_3_destruct_unhide",0},{"wheel_2_4_destruct_unhide",0},{"glass1_destruct",0},{"glass2_destruct",0},{"glass3_destruct",0},{"glass4_destruct",0},{"glass5_destruct",0},{"glass6_destruct",0},{"steering_1_1",0},{"steering_2_1",0},{"wheel_1_1",1},{"wheel_2_1",1},{"wheel_1_2",1},{"wheel_2_2",1},{"daylights",0},{"reverse_light",0},{"pedal_thrust",0},{"pedal_brake",1},{"wheel_1_1_damage",0},{"wheel_1_2_damage",0},{"wheel_1_3_damage",0},{"wheel_1_4_damage",0},{"wheel_2_1_damage",0},{"wheel_2_2_damage",0},{"wheel_2_3_damage",0},{"wheel_2_4_damage",0},{"wheel_1_1_damper_damage_backanim",0},{"wheel_1_2_damper_damage_backanim",0},{"wheel_1_3_damper_damage_backanim",0},{"wheel_1_4_damper_damage_backanim",0},{"wheel_2_1_damper_damage_backanim",0},{"wheel_2_2_damper_damage_backanim",0},{"wheel_2_3_damper_damage_backanim",0},{"wheel_2_4_damper_damage_backanim",0},{"steering_1_2",0},{"steering_2_2",0},{"wheel_1_3",1},{"wheel_2_3",1},{"wheel_1_4",1},{"wheel_2_4",1},{"wheel_1_1_damper",1},{"wheel_2_1_damper",1},{"wheel_1_2_damper",0.94},{"wheel_2_2_damper",0.96},{"wheel_1_3_damper",0.79},{"wheel_2_3_damper",0.8},{"wheel_1_4_damper",0.74},{"wheel_2_4_damper",0.84},{"damage_hide",0},{"damage_unhide",0},{"indicatorspeed",0},{"indicatorrpm",0},{"indicatoroiltemp_1",0},{"indicatoroiltemp_2",0},{"fuel",1},{"amp",0},{"pressure_front_1",0},{"pressure_front_2",0},{"pressure_front_3",0},{"pressure_front_4",0},{"pressure_rear_1",0},{"pressure_rear_2",0},{"pressure_rear_3",0},{"pressure_rear_4",0},{"tyre_temp",0},{"drivingwheel",0},{"driwingwheelshaft1",0},{"driwingwheelshaft2",0},{"driwingwheelshaft3",0},{"exhaust_lid_rot",0}};
			hide[] = {"clan","zasleh","light_l","light_r","zadni svetlo","brzdove svetlo","podsvit pristroju","poskozeni"};
			verticalOffset = 2.022;
			verticalOffsetWorld = -0.203;
			init = "''";
		};
		editorPreview = "\caf_wheeled_t\ico\CAF_8x8_transport_F.jpg";
		_generalMacro = "CAF_8x8_transport_F";
		scope = 2;

		crew = "CAF_RIFLEMAN_tw";
		typicalCargo[] = {"CAF_RIFLEMAN_tw"};
		side = 1;
		faction = "CAF_TW";

		displayName = "Kerax 8x8 (Covered)";
		model = "\caf_wheeled\caf_8x8_TC.p3d";
		picture = "\a3\soft_f_beta\Truck_01\Data\UI\Truck_01_Base_CA.paa";
		Icon = "\a3\soft_f_beta\Truck_01\Data\UI\map_truck_01_CA.paa";

		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo3",
			"clan"
		};
		hiddenSelectionsTextures[] =
		{
			"caf_wheeled_t\tex\cabin_co.paa",
			"caf_wheeled_t\tex\bed_co.paa",
			"caf_wheeled_t\tex\undercarriage_co.paa"
		};


		transportSoldier = 16;
		cargoIsCoDriver[] = {1,1,0};

		cargoProxyIndexes[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
		getInProxyOrder[] = {3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,1,2};

		class AnimationSources: AnimationSources
		{
			class Select_plachta {source = "user"; animPeriod = 0.0000001; initPhase = 0;};
			class Select_fuel {source = "user"; animPeriod = 0.0000001; initPhase = 1;};
			class Select_benches {source = "user"; animPeriod = 0.0000001; initPhase = 0;};
			class Select_transportbase {source = "user"; animPeriod = 0.0000001; initPhase = 0;};
			class Select_repair {source = "user"; animPeriod = 0.0000001; initPhase = 1;};
			class Select_ammo {source = "user"; animPeriod = 0.0000001; initPhase = 1;};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_inside_3";
				memoryPointsGetInGunner = "pos cargo LR";
				memoryPointsGetInGunnerDir = "pos cargo LR dir";
				gunnerName = "$STR_A3_TURRETS_CARGOTURRET_L";
				gunnerCompartments = "Compartment2";
				proxyIndex = 17;
				isPersonTurret = 1;
				class TurnIn
				{
					limitsArrayTop[] = {{24.5211,-88.823},{26.2387,-59.0294},{9.5906,-16.2671},{5.4713,-4.581},{2.7563,-1.1697}};
					limitsArrayBottom[] = {{-45.0,-94.9193},{-44.0104,-13.0683},{-31.6632,-5.2087},{-27.2245,-4.5888},{-24.2733,-2.6233}};
				};
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerName = "$STR_A3_TURRETS_CARGOTURRET_R";
				memoryPointsGetInGunner = "pos cargo RR";
				memoryPointsGetInGunnerDir = "pos cargo RR dir";
				proxyIndex = 18;
				class TurnIn
				{
					limitsArrayTop[] = {{6.687,0.312},{8.9259,4.006},{22.4693,76.9909},{20.6476,94.9442}};
					limitsArrayBottom[] = {{-20.5226,-0.2106},{-23.8296,3.2136},{-27.5894,3.8358},{-45.0,94.1379}};
				};
			};
		};
	};
	class CAF_8x8_transport_uncovered_F: CAF_8x8_transport_F
	{
		author = "CAF";
		class SimpleObject
		{
			eden = 1;
			animate[] = {{"damagehide",0},{"damagehidevez",0},{"damagehidehlaven",0},{"wheel_1_1_destruct",0},{"wheel_1_2_destruct",0},{"wheel_1_3_destruct",0},{"wheel_1_4_destruct",0},{"wheel_2_1_destruct",0},{"wheel_2_2_destruct",0},{"wheel_2_3_destruct",0},{"wheel_2_4_destruct",0},{"wheel_1_1_destruct_unhide",0},{"wheel_1_2_destruct_unhide",0},{"wheel_1_3_destruct_unhide",0},{"wheel_1_4_destruct_unhide",0},{"wheel_2_1_destruct_unhide",0},{"wheel_2_2_destruct_unhide",0},{"wheel_2_3_destruct_unhide",0},{"wheel_2_4_destruct_unhide",0},{"glass1_destruct",0},{"glass2_destruct",0},{"glass3_destruct",0},{"glass4_destruct",0},{"glass5_destruct",0},{"glass6_destruct",0},{"steering_1_1",0},{"steering_2_1",0},{"wheel_1_1",1},{"wheel_2_1",1},{"wheel_1_2",1},{"wheel_2_2",1},{"daylights",0},{"reverse_light",0},{"pedal_thrust",0},{"pedal_brake",1},{"wheel_1_1_damage",0},{"wheel_1_2_damage",0},{"wheel_1_3_damage",0},{"wheel_1_4_damage",0},{"wheel_2_1_damage",0},{"wheel_2_2_damage",0},{"wheel_2_3_damage",0},{"wheel_2_4_damage",0},{"wheel_1_1_damper_damage_backanim",0},{"wheel_1_2_damper_damage_backanim",0},{"wheel_1_3_damper_damage_backanim",0},{"wheel_1_4_damper_damage_backanim",0},{"wheel_2_1_damper_damage_backanim",0},{"wheel_2_2_damper_damage_backanim",0},{"wheel_2_3_damper_damage_backanim",0},{"wheel_2_4_damper_damage_backanim",0},{"steering_1_2",0},{"steering_2_2",0},{"wheel_1_3",1},{"wheel_2_3",1},{"wheel_1_4",1},{"wheel_2_4",1},{"wheel_1_1_damper",1},{"wheel_2_1_damper",1},{"wheel_1_2_damper",0.95},{"wheel_2_2_damper",0.97},{"wheel_1_3_damper",0.82},{"wheel_2_3_damper",0.82},{"wheel_1_4_damper",0.77},{"wheel_2_4_damper",0.87},{"damage_hide",0},{"damage_unhide",0},{"indicatorspeed",0},{"indicatorrpm",0},{"indicatoroiltemp_1",0},{"indicatoroiltemp_2",0},{"fuel",1},{"amp",0},{"pressure_front_1",0},{"pressure_front_2",0},{"pressure_front_3",0},{"pressure_front_4",0},{"pressure_rear_1",0},{"pressure_rear_2",0},{"pressure_rear_3",0},{"pressure_rear_4",0},{"tyre_temp",0},{"drivingwheel",0},{"driwingwheelshaft1",0},{"driwingwheelshaft2",0},{"driwingwheelshaft3",0},{"exhaust_lid_rot",0}};
			hide[] = {"clan","zasleh","light_l","light_r","zadni svetlo","brzdove svetlo","podsvit pristroju","poskozeni"};
			verticalOffset = 2.018;
			verticalOffsetWorld = -0.207;
			init = "''";
		};
		editorPreview = "\caf_wheeled_t\ico\CAF_8x8_transport_uncovered_F.jpg";
		_generalMacro = "CAF_8x8_transport_uncovered_F";
		displayName = "Kerax 8x8 (Open)";
		picture = "\a3\soft_f_beta\Truck_01\Data\UI\Truck_01_covered_CA.paa";
		Icon = "\a3\soft_f_beta\Truck_01\Data\UI\map_truck_01_covered_CA.paa";
		forceInGarage = 1;
		class AnimationSources: AnimationSources
		{
			class Select_plachta {source = "user"; animPeriod = 0.0000001; initPhase = 1;};
			class Select_fuel {source = "user"; animPeriod = 0.0000001; initPhase = 1;};
			class Select_benches {source = "user"; animPeriod = 0.0000001; initPhase = 0;};
			class Select_transportbase {source = "user"; animPeriod = 0.0000001; initPhase = 0;};
			class Select_repair {source = "user"; animPeriod = 0.0000001; initPhase = 1;};
			class Select_ammo {source = "user"; animPeriod = 0.0000001; initPhase = 1;};
		};
	};
	class CAF_8x8_fuel_F: CAF_8x8_base_F
	{
		features = "Randomization: No						<br />Camo selections: 2 - the body, engine						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: Positions 8 and 16						<br />Slingload: No						<br />Cargo proxy indexes: 1 to 17";
		author = "CAF";
		class SimpleObject
		{
			eden = 1;
			animate[] = {{"damagehide",0},{"damagehidevez",0},{"damagehidehlaven",0},{"wheel_1_1_destruct",0},{"wheel_1_2_destruct",0},{"wheel_1_3_destruct",0},{"wheel_1_4_destruct",0},{"wheel_2_1_destruct",0},{"wheel_2_2_destruct",0},{"wheel_2_3_destruct",0},{"wheel_2_4_destruct",0},{"wheel_1_1_destruct_unhide",0},{"wheel_1_2_destruct_unhide",0},{"wheel_1_3_destruct_unhide",0},{"wheel_1_4_destruct_unhide",0},{"wheel_2_1_destruct_unhide",0},{"wheel_2_2_destruct_unhide",0},{"wheel_2_3_destruct_unhide",0},{"wheel_2_4_destruct_unhide",0},{"glass1_destruct",0},{"glass2_destruct",0},{"glass3_destruct",0},{"glass4_destruct",0},{"glass5_destruct",0},{"glass6_destruct",0},{"steering_1_1",0},{"steering_2_1",0},{"wheel_1_1",1},{"wheel_2_1",1},{"wheel_1_2",1},{"wheel_2_2",1},{"daylights",0},{"reverse_light",0},{"pedal_thrust",0},{"pedal_brake",1},{"wheel_1_1_damage",0},{"wheel_1_2_damage",0},{"wheel_1_3_damage",0},{"wheel_1_4_damage",0},{"wheel_2_1_damage",0},{"wheel_2_2_damage",0},{"wheel_2_3_damage",0},{"wheel_2_4_damage",0},{"wheel_1_1_damper_damage_backanim",0},{"wheel_1_2_damper_damage_backanim",0},{"wheel_1_3_damper_damage_backanim",0},{"wheel_1_4_damper_damage_backanim",0},{"wheel_2_1_damper_damage_backanim",0},{"wheel_2_2_damper_damage_backanim",0},{"wheel_2_3_damper_damage_backanim",0},{"wheel_2_4_damper_damage_backanim",0},{"steering_1_2",0},{"steering_2_2",0},{"wheel_1_3",1},{"wheel_2_3",1},{"wheel_1_4",1},{"wheel_2_4",1},{"wheel_1_1_damper",1},{"wheel_2_1_damper",1},{"wheel_1_2_damper",0.94},{"wheel_2_2_damper",0.96},{"wheel_1_3_damper",0.79},{"wheel_2_3_damper",0.8},{"wheel_1_4_damper",0.74},{"wheel_2_4_damper",0.84},{"damage_hide",0},{"damage_unhide",0},{"indicatorspeed",0},{"indicatorrpm",0},{"indicatoroiltemp_1",0},{"indicatoroiltemp_2",0},{"fuel",1},{"amp",0},{"pressure_front_1",0},{"pressure_front_2",0},{"pressure_front_3",0},{"pressure_front_4",0},{"pressure_rear_1",0},{"pressure_rear_2",0},{"pressure_rear_3",0},{"pressure_rear_4",0},{"tyre_temp",0},{"drivingwheel",0},{"driwingwheelshaft1",0},{"driwingwheelshaft2",0},{"driwingwheelshaft3",0},{"exhaust_lid_rot",0}};
			hide[] = {"clan","zasleh","light_l","light_r","zadni svetlo","brzdove svetlo","podsvit pristroju","poskozeni"};
			verticalOffset = 2.022;
			verticalOffsetWorld = -0.203;
			init = "''";
		};
		editorPreview = "\caf_wheeled_t\ico\CAF_8x8_fuel_F.jpg";
		_generalMacro = "CAF_8x8_fuel_F";
		scope = 2;
		
		crew = "CAF_RIFLEMAN_tw";
		typicalCargo[] = {"CAF_RIFLEMAN_tw"};
		side = 1;
		faction = "CAF_TW";

		vehicleClass = "Support";
		supplyRadius = 10;
		transportFuel = 1000000000000;
		secondaryExplosion = 10000;
		fuelExplosionPower = 1;
		explosionEffect = "SupplyExplosion";
		forceInGarage = 1;
		displayName = "Kerax 8x8 Fuel";
		model = "\caf_wheeled\caf_8x8_TC.p3d";
		picture = "\a3\soft_f_beta\Truck_01\Data\UI\Truck_01_Base_CA.paa";
		Icon = "\a3\soft_f_beta\Truck_01\Data\UI\map_truck_01_CA.paa";

		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo3",
			"clan"
		};
		hiddenSelectionsTextures[] =
		{
			"caf_wheeled_t\tex\cabin_co.paa",
			"caf_wheeled_t\tex\t810_fueltank_co.paa",
			"caf_wheeled_t\tex\undercarriage_co.paa"
		};


		transportSoldier = 2;
		cargoIsCoDriver[] = {1,1};
		cargoProxyIndexes[] = {1,2};
		getInProxyOrder[] = {2,1};
		class AnimationSources: AnimationSources
		{
			class Select_fuel {source = "user"; animPeriod = 0.0000001; initPhase = 0;};
			class Select_transportbase {source = "user"; animPeriod = 0.0000001; initPhase = 1;};
			class Select_plachta {source = "user"; animPeriod = 0.0000001; initPhase = 1;};
			class Select_benches {source = "user"; animPeriod = 0.0000001; initPhase = 1;};
			class Select_repair {source = "user"; animPeriod = 0.0000001; initPhase = 1;};
			class Select_ammo {source = "user"; animPeriod = 0.0000001; initPhase = 1;};
		};
		class CargoTurret;
		class Turrets: Turrets {};
	};
	class CAF_8x8_ammo_F: CAF_8x8_base_F
	{
		features = "Randomization: No						<br />Camo selections: 2 - the body, engine						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: Positions 8 and 16						<br />Slingload: No						<br />Cargo proxy indexes: 1 to 17";
		author = "CAF";
		class SimpleObject
		{
			eden = 1;
			animate[] = {{"damagehide",0},{"damagehidevez",0},{"damagehidehlaven",0},{"wheel_1_1_destruct",0},{"wheel_1_2_destruct",0},{"wheel_1_3_destruct",0},{"wheel_1_4_destruct",0},{"wheel_2_1_destruct",0},{"wheel_2_2_destruct",0},{"wheel_2_3_destruct",0},{"wheel_2_4_destruct",0},{"wheel_1_1_destruct_unhide",0},{"wheel_1_2_destruct_unhide",0},{"wheel_1_3_destruct_unhide",0},{"wheel_1_4_destruct_unhide",0},{"wheel_2_1_destruct_unhide",0},{"wheel_2_2_destruct_unhide",0},{"wheel_2_3_destruct_unhide",0},{"wheel_2_4_destruct_unhide",0},{"glass1_destruct",0},{"glass2_destruct",0},{"glass3_destruct",0},{"glass4_destruct",0},{"glass5_destruct",0},{"glass6_destruct",0},{"steering_1_1",0},{"steering_2_1",0},{"wheel_1_1",1},{"wheel_2_1",1},{"wheel_1_2",1},{"wheel_2_2",1},{"daylights",0},{"reverse_light",0},{"pedal_thrust",0},{"pedal_brake",1},{"wheel_1_1_damage",0},{"wheel_1_2_damage",0},{"wheel_1_3_damage",0},{"wheel_1_4_damage",0},{"wheel_2_1_damage",0},{"wheel_2_2_damage",0},{"wheel_2_3_damage",0},{"wheel_2_4_damage",0},{"wheel_1_1_damper_damage_backanim",0},{"wheel_1_2_damper_damage_backanim",0},{"wheel_1_3_damper_damage_backanim",0},{"wheel_1_4_damper_damage_backanim",0},{"wheel_2_1_damper_damage_backanim",0},{"wheel_2_2_damper_damage_backanim",0},{"wheel_2_3_damper_damage_backanim",0},{"wheel_2_4_damper_damage_backanim",0},{"steering_1_2",0},{"steering_2_2",0},{"wheel_1_3",1},{"wheel_2_3",1},{"wheel_1_4",1},{"wheel_2_4",1},{"wheel_1_1_damper",1},{"wheel_2_1_damper",1},{"wheel_1_2_damper",0.94},{"wheel_2_2_damper",0.96},{"wheel_1_3_damper",0.79},{"wheel_2_3_damper",0.8},{"wheel_1_4_damper",0.74},{"wheel_2_4_damper",0.84},{"damage_hide",0},{"damage_unhide",0},{"indicatorspeed",0},{"indicatorrpm",0},{"indicatoroiltemp_1",0},{"indicatoroiltemp_2",0},{"fuel",1},{"amp",0},{"pressure_front_1",0},{"pressure_front_2",0},{"pressure_front_3",0},{"pressure_front_4",0},{"pressure_rear_1",0},{"pressure_rear_2",0},{"pressure_rear_3",0},{"pressure_rear_4",0},{"tyre_temp",0},{"drivingwheel",0},{"driwingwheelshaft1",0},{"driwingwheelshaft2",0},{"driwingwheelshaft3",0},{"exhaust_lid_rot",0}};
			hide[] = {"clan","zasleh","light_l","light_r","zadni svetlo","brzdove svetlo","podsvit pristroju","poskozeni"};
			verticalOffset = 2.022;
			verticalOffsetWorld = -0.203;
			init = "''";
		};
		editorPreview = "\caf_wheeled_t\ico\CAF_8x8_ammo_F.jpg";
		_generalMacro = "CAF_8x8_ammo_F";
		scope = 2;
		
		crew = "CAF_RIFLEMAN_tw";
		typicalCargo[] = {"CAF_RIFLEMAN_tw"};
		side = 1;
		faction = "CAF_TW";

		vehicleClass = "Support";
		supplyRadius = 10;
		transportAmmo = 1000000000000;
		secondaryExplosion = 10000;
		fuelExplosionPower = 1;
		explosionEffect = "SupplyExplosion";
		forceInGarage = 1;
		displayName = "Kerax 8x8 Ammo";
		model = "\caf_wheeled\caf_8x8_TC.p3d";
		picture = "\a3\soft_f_beta\Truck_01\Data\UI\Truck_01_Base_CA.paa";
		Icon = "\a3\soft_f_beta\Truck_01\Data\UI\map_truck_01_CA.paa";

		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo3",
			"clan"
		};
		hiddenSelectionsTextures[] =
		{
			"caf_wheeled_t\tex\cabin_co.paa",
			"caf_wheeled_t\tex\t810_fueltank_co.paa",
			"caf_wheeled_t\tex\undercarriage_co.paa"
		};


		transportSoldier = 2;
		cargoIsCoDriver[] = {1,1};
		cargoProxyIndexes[] = {1,2};
		getInProxyOrder[] = {2,1};
		class AnimationSources: AnimationSources
		{
			class Select_fuel {source = "user"; animPeriod = 0.0000001; initPhase = 1;};
			class Select_transportbase {source = "user"; animPeriod = 0.0000001; initPhase = 0;};
			class Select_plachta {source = "user"; animPeriod = 0.0000001; initPhase = 0;};
			class Select_benches {source = "user"; animPeriod = 0.0000001; initPhase = 1;};
			class Select_repair {source = "user"; animPeriod = 0.0000001; initPhase = 1;};
			class Select_ammo {source = "user"; animPeriod = 0.0000001; initPhase = 0;};
		};
		class CargoTurret;
		class Turrets: Turrets {};
	};
	class CAF_8x8_repair_F: CAF_8x8_base_F
	{
		features = "Randomization: No						<br />Camo selections: 2 - the body, engine						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: Positions 8 and 16						<br />Slingload: No						<br />Cargo proxy indexes: 1 to 17";
		author = "CAF";
		class SimpleObject
		{
			eden = 1;
			animate[] = {{"damagehide",0},{"damagehidevez",0},{"damagehidehlaven",0},{"wheel_1_1_destruct",0},{"wheel_1_2_destruct",0},{"wheel_1_3_destruct",0},{"wheel_1_4_destruct",0},{"wheel_2_1_destruct",0},{"wheel_2_2_destruct",0},{"wheel_2_3_destruct",0},{"wheel_2_4_destruct",0},{"wheel_1_1_destruct_unhide",0},{"wheel_1_2_destruct_unhide",0},{"wheel_1_3_destruct_unhide",0},{"wheel_1_4_destruct_unhide",0},{"wheel_2_1_destruct_unhide",0},{"wheel_2_2_destruct_unhide",0},{"wheel_2_3_destruct_unhide",0},{"wheel_2_4_destruct_unhide",0},{"glass1_destruct",0},{"glass2_destruct",0},{"glass3_destruct",0},{"glass4_destruct",0},{"glass5_destruct",0},{"glass6_destruct",0},{"steering_1_1",0},{"steering_2_1",0},{"wheel_1_1",1},{"wheel_2_1",1},{"wheel_1_2",1},{"wheel_2_2",1},{"daylights",0},{"reverse_light",0},{"pedal_thrust",0},{"pedal_brake",1},{"wheel_1_1_damage",0},{"wheel_1_2_damage",0},{"wheel_1_3_damage",0},{"wheel_1_4_damage",0},{"wheel_2_1_damage",0},{"wheel_2_2_damage",0},{"wheel_2_3_damage",0},{"wheel_2_4_damage",0},{"wheel_1_1_damper_damage_backanim",0},{"wheel_1_2_damper_damage_backanim",0},{"wheel_1_3_damper_damage_backanim",0},{"wheel_1_4_damper_damage_backanim",0},{"wheel_2_1_damper_damage_backanim",0},{"wheel_2_2_damper_damage_backanim",0},{"wheel_2_3_damper_damage_backanim",0},{"wheel_2_4_damper_damage_backanim",0},{"steering_1_2",0},{"steering_2_2",0},{"wheel_1_3",1},{"wheel_2_3",1},{"wheel_1_4",1},{"wheel_2_4",1},{"wheel_1_1_damper",1},{"wheel_2_1_damper",1},{"wheel_1_2_damper",0.94},{"wheel_2_2_damper",0.96},{"wheel_1_3_damper",0.79},{"wheel_2_3_damper",0.8},{"wheel_1_4_damper",0.74},{"wheel_2_4_damper",0.84},{"damage_hide",0},{"damage_unhide",0},{"indicatorspeed",0},{"indicatorrpm",0},{"indicatoroiltemp_1",0},{"indicatoroiltemp_2",0},{"fuel",1},{"amp",0},{"pressure_front_1",0},{"pressure_front_2",0},{"pressure_front_3",0},{"pressure_front_4",0},{"pressure_rear_1",0},{"pressure_rear_2",0},{"pressure_rear_3",0},{"pressure_rear_4",0},{"tyre_temp",0},{"drivingwheel",0},{"driwingwheelshaft1",0},{"driwingwheelshaft2",0},{"driwingwheelshaft3",0},{"exhaust_lid_rot",0}};
			hide[] = {"clan","zasleh","light_l","light_r","zadni svetlo","brzdove svetlo","podsvit pristroju","poskozeni"};
			verticalOffset = 2.022;
			verticalOffsetWorld = -0.203;
			init = "''";
		};
		editorPreview = "\caf_wheeled_t\ico\CAF_8x8_repair_F.jpg";
		_generalMacro = "CAF_8x8_repair_F";
		scope = 2;
		
		crew = "CAF_RIFLEMAN_tw";
		typicalCargo[] = {"CAF_RIFLEMAN_tw"};
		side = 1;
		faction = "CAF_TW";
		forceInGarage = 1;
		vehicleClass = "Support";
		supplyRadius = 10;
		transportRepair = 1000000000000;
		secondaryExplosion = 1000;
		fuelExplosionPower = 1;
		explosionEffect = "SupplyExplosion";

		displayName = "Kerax 8x8 Repair";
		model = "\caf_wheeled\caf_8x8_TC.p3d";
		picture = "\a3\soft_f_beta\Truck_01\Data\UI\Truck_01_Base_CA.paa";
		Icon = "\a3\soft_f_beta\Truck_01\Data\UI\map_truck_01_CA.paa";

		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo3",
			"clan"
		};
		hiddenSelectionsTextures[] =
		{
			"caf_wheeled_t\tex\cabin_co.paa",
			"caf_wheeled_t\tex\t810_fueltank_co.paa",
			"caf_wheeled_t\tex\undercarriage_co.paa"
		};


		transportSoldier = 2;
		cargoIsCoDriver[] = {1,1};
		cargoProxyIndexes[] = {1,2};
		getInProxyOrder[] = {2,1};
		class AnimationSources: AnimationSources
		{
			class Select_fuel {source = "user"; animPeriod = 0.0000001; initPhase = 1;};
			class Select_transportbase {source = "user"; animPeriod = 0.0000001; initPhase = 0;};
			class Select_plachta {source = "user"; animPeriod = 0.0000001; initPhase = 0;};
			class Select_benches {source = "user"; animPeriod = 0.0000001; initPhase = 1;};
			class Select_repair {source = "user"; animPeriod = 0.0000001; initPhase = 0;};
			class Select_ammo {source = "user"; animPeriod = 0.0000001; initPhase = 1;};
		};
		class CargoTurret;
		class Turrets: Turrets {};
	};
	////MILCOTS////
	class Offroad_01_base_F: Car_F
	{
		class AnimationSources;
	};

	class Milcots_01_F: Offroad_01_base_F
	{
		author = "CAF";
		class SimpleObject
		{
			eden = 1;
			animate[] = {{"damagehide",0},{"damagehidevez",0},{"damagehidehlaven",0},{"wheel_1_1_destruct",0},{"wheel_1_2_destruct",0},{"wheel_1_3_destruct",0},{"wheel_1_4_destruct",0},{"wheel_2_1_destruct",0},{"wheel_2_2_destruct",0},{"wheel_2_3_destruct",0},{"wheel_2_4_destruct",0},{"wheel_1_1_destruct_unhide",0},{"wheel_1_2_destruct_unhide",0},{"wheel_1_3_destruct_unhide",0},{"wheel_1_4_destruct_unhide",0},{"wheel_2_1_destruct_unhide",0},{"wheel_2_2_destruct_unhide",0},{"wheel_2_3_destruct_unhide",0},{"wheel_2_4_destruct_unhide",0},{"wheel_1_3_damage",0},{"wheel_1_4_damage",0},{"wheel_2_3_damage",0},{"wheel_2_4_damage",0},{"wheel_1_3_damper_damage_backanim",0},{"wheel_1_4_damper_damage_backanim",0},{"wheel_2_3_damper_damage_backanim",0},{"wheel_2_4_damper_damage_backanim",0},{"glass1_destruct",0},{"glass2_destruct",0},{"glass3_destruct",0},{"glass4_destruct",0},{"glass5_destruct",0},{"glass6_destruct",0},{"wheel_1_1",0},{"wheel_2_1",0},{"wheel_1_2",0},{"wheel_2_2",0},{"pedal_thrust",0},{"pedal_brake",1},{"wheel_1_1_damage",0},{"wheel_1_2_damage",0},{"wheel_2_1_damage",0},{"wheel_2_2_damage",0},{"wheel_1_1_damper_damage_backanim",0},{"wheel_1_2_damper_damage_backanim",0},{"wheel_2_1_damper_damage_backanim",0},{"wheel_2_2_damper_damage_backanim",0},{"wheel_1_1_damper",0.09},{"wheel_2_1_damper",0.08},{"wheel_1_2_damper",0.3},{"wheel_2_2_damper",0.28},{"gunnerlf",1},{"gunnerlf_pos",1},{"gunnerrf",1},{"gunnerrf_pos",1},{"damagehidegunner_rf",0},{"damagehidegunner_lf",0},{"drivingwheel",0},{"steering_1_1",0},{"steering_2_1",0},{"indicatorspeed",0},{"damagehidemph",0},{"fuel",1},{"damagehidefuel",0},{"indicatorrpm",0},{"damagehiderpm",0},{"prop_02",0},{"damagehidetemp",0},{"damagehidedoor1",0},{"damagehideglass2",0},{"damagehidepolice",0},{"damagehideservices",0},{"damageunhideservices",1},{"damagehidebackpack_proxy",0},{"damagehidebumper_1_proxy",0},{"damageunhidebumper1",1},{"damagehidebumper_2_proxy",0},{"damageunhidebumper2",1},{"damagehideconstruction_proxy",0},{"damageunhideconstruction",1},{"reverse_light",1},{"daylights",0},{"beacon1",2486.55},{"beaconsstart",0},{"beaconsservicesstart",0},{"beacon2",2486.55},{"beacon3",2486.55},{"beacon4",2486.55},{"beacon5",2486.55},{"beacon6",2486.55},{"beacons1",2486.55},{"beacons2",2486.55},{"beacons3",2486.55},{"beacons4",2486.55}};
			hide[] = {"clan","zasleh","light_l","light_r","zadni svetlo","brzdove svetlo","podsvit pristroju","poskozeni"};
			verticalOffset = 1.545;
			verticalOffsetWorld = -0.067;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview = "\caf_wheeled_t\ico\Milcots_01_F.jpg";
		_generalMacro = "Milcots_01_F";

		scope = 2;
		displayName = "Milcots";
		model = "caf_wheeled\milcots.p3d";
		crew = "CAF_RIFLEMAN_tw";
		side = 1;
		faction = "CAF_TW";

		transportSoldier = 3;
		driverAction 		= driver_offroad01; /// what action is going the driver take inside the vehicle. Non-existent action makes the vehicle inaccessible
		cargoAction[] 		= {passenger_low01, passenger_generic01_leanleft, passenger_generic01_foldhands}; /// the same of all the crew
		getInAction 		= GetInLow; 		/// how does driver look while getting in
		getOutAction 		= GetOutLow; 		/// and out
		cargoGetInAction[] 	= {"GetInLow"}; 	/// and the same for the rest, if the array has fewer members than the count of crew, the last one is used for the rest
		cargoGetOutAction[] = {"GetOutLow"}; 	/// that means all use the same in this case

		class AnimationSources: AnimationSources
		{
			class Select_cover {source = "user"; animPeriod = 0.0000001; initPhase = 1;};
		};
		class Turrets{};
		class UserActions {};
	};
};