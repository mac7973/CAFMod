class CfgPatches
{
	class caf_bell412
	{
		units[] = {"caf_bell412"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Air_F","A3_Weapons_F"};
		magazines[] = {};
		ammo[] = {};
	};
};
class CfgFunctions {
	
	class caf_bell412 {
		tag = "caf_bell412";
		file = "\caf_air\bell412\functions";
		
		class functions {
			class prepFries {};
			class closeFries {};
		};
	};
};
class CfgMagazines {
	class 24Rnd_missiles;
	class 7Rnd_missiles: 24Rnd_missiles
	{
		count=7;
	};
};
class CfgWeapons {
	class M134_minigun;
	
	class caf_M134_L: M134_minigun {
		scope = 1;
		class GunParticles {
			class FirstEffect {
				directionname = "z_gunL_chamber";
				effectname = "MachineGun1";
				positionname = "z_gunL_muzzle";
			};
			class effect1 {
				directionname = "machinegunL_eject_dir";
				effectname = "MachineGunCartridge";
				positionname = "machinegunL_eject_pos";
			};
		};
	};
	class caf_M134_R: M134_minigun {
		scope = 1;
		class GunParticles {
			class FirstEffect {
				directionname = "z_gunR_chamber";
				effectname = "MachineGun1";
				positionname = "z_gunR_muzzle";
			};
			class effect1 {
				directionname = "machinegunR_eject_dir";
				effectname = "MachineGunCartridge";
				positionname = "machinegunR_eject_pos";
			};
		};
	};
	class missiles_DAR;
	class caf_missiles_DAR : missiles_DAR
	{
		scope = 1;
		magazines[]=
		{
			"7Rnd_missiles"
		};
		modes[]=
		{
			"Burst"
		};
		class Burst: missiles_DAR
		{
			burst=1;
			autoFire=0;
			textureType="semi";
		};
	};
};

class CfgVehicles
{
	class Helicopter_Base_F;
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Turrets;	
	};
	class Heli_Light_03_base_F: Helicopter_Base_H
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
		class RotorLibHelicopterProperties;
		class ViewOptics;
		class AnimationSources;
	};
	class caf_bell412_base_F: Heli_Light_03_base_F
	{
		author = "CAF";				
		
		altFullForce = 4000;
		altNoForce = 6000;
		
		simulation = "helicopterrtd";
		vehicleclass = "Air";
		_generalMacro = "caf_bell412_base_F";
		displayName = "CW 412";
		model = "";
		driveOnComponent[] = {"Skids"};
		accuracy = 0.5;
		usePreciseGetInAction = 1;
		memoryPointsGetInDriver = "pos pilot";
		memoryPointsGetInDriverDir = "pos pilot dir";
		GetInAction = "GetInLow";
		GetOutAction = "GetOutLow";
		driverDoor = "DoorR1_Open";
		cargoDoors[] = {};
		driverAction = "pilot_Heli_Transport_01";
		driverLeftHandAnimName = "lever_pilot";
		driverRightHandAnimName = "stick_pilot";
		driverLeftLegAnimName = "pedalL";
		driverRightLegAnimName = "pedalR";
		ejectdeadcargo = 0;
		ejectdeaddriver = 0;
		castCargoShadow = 1;
		transportSoldier = 0;
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 0;
		cargoCanEject = 0;
		driverCanEject = 0;
		
		maxSpeed = 259;
		maxFordingDepth = 0.55;
		
		MainRotorSpeed = -0.5;
		backRotorSpeed = 3.0;
		mainBladeRadius = 6.2;
		tailBladeRadius = 1.2;
		
		liftForceCoef = 1.1;
		cyclicAsideForceCoef = 1.0;
		cyclicForwardForceCoef = 1.0;
		backRotorForceCoef = 1.0;
		bodyFrictionCoef = 0.9;			
		precisegetinout = 1;		

		
		fuelCapacity = 1252;
		fuelConsumptionRate = 0.0939;
		extCameraPosition[] = {0,3,-23};
		gearRetracting = 0;
		gearUpTime = "";
		gearDownTime = "";
		armor = 60;
		damageResistance = 0.00555;
		maximumLoad = 2000;
		memorypointcm[] = {"flare_launcher1","flare_launcher2"};
		memorypointcmdir[] = {"flare_launcher1_dir","flare_launcher2_dir"};
		class RotorLibHelicopterProperties
		{
			RTDconfig = "caf_air\bell412\RTD_Heli_ch146.xml";
			defaultCollective = 0.7;
			autoHoverCorrection[] = {4,3.3,0};
			maxTorque = 2700;
			stressDamagePerSec = 0.0033333332;
			retreatBladeStallWarningSpeed = 87.5;
			maxHorizontalStabilizerLeftStress = 10000;
			maxHorizontalStabilizerRightStress = 10000;
			maxVerticalStabilizerStress = 10000;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			maxMainRotorStress = 110000;
			maxTailRotorStress = 25000;
		};
		class TransportBackpacks{};
		class TransportItems
		{};
		class TransportWeapons
		{};
		class TransportMagazines
		{};
		memoryPointSupply = "supplyRadius";
		supplyRadius = -1;
		class MFD{};
		class MarkerLights
		{
			class PositionRed
			{
				color[] = {0.8,0.0,0.0};
				ambient[] = {0.08,0.0,0.0};
				intensity = 50;
				name = "NAV_left_red_S";
				drawLight = 1;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 1;
				useFlare = 0;
			};
			class PositionRed2: PositionRed
			{
				name = "NAV_leftT_red_S";
			};
			class PositionGreen: PositionRed
			{
				color[] = {0.0,0.8,0.0};
				ambient[] = {0.0,0.08,0.0};
				name = "NAV_right_green_S";
			};
			class PositionGreen2: PositionGreen
			{
				name = "NAV_rightT_green_S";
			};
			class PositionWhite: PositionRed
			{
				color[] = {1.0,1.0,1.0};
				ambient[] = {0.1,0.1,0.1};
				name = "NAV_tail_white_S";
				drawLightSize = 0.2;
			};
			class PositionWhite2: PositionWhite
			{
				name = "NAV_top_NV_B";
				blinking = 1;
			};
		};
		class Reflectors
		{
			class Light
			{
				color[] = {8000,6500,3500};
				ambient[] = {80,60,30};
				intensity = 40;
				size = 1;
				innerAngle = 5;
				outerAngle = 75;
				coneFadeCoef = 10;
				position = "landinglight01_pos";
				direction = "landinglight01_dir";
				hitpoint = "Light_hitpoint";
				selection = "landingLight01";
				useFlare = 1;
				flareSize = 8;
				flareMaxDistance = 300;
				dayLight = 0;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 0;
					hardLimitStart = 200;
					hardLimitEnd = 250;
				};
			};
		};
		aggregateReflectors[] = {{ "Left","Right" }};
		class Exhausts								/// describes the particle effects fro exhausts
		{
			class Exhaust1							/// there may be as many exhausts as you wish, bear in mind the particle limitation and performance
			{
				position = "exhaust1";				/// on what position should the particle effect start
				direction = "exhaust1_dir";			/// what is the default direction of the particle effect
				effect = "ExhaustsEffectHeliMed";	/// what class of particle effect is going to be used
			};
			class Exhaust2
			{
				position = "exhaust2";
				direction = "exhaust2_dir";
				effect = "ExhaustsEffectHeliMed";
			};
		};
		occludeSoundsWhenIn = 0.562341;
		obstructSoundsWhenIn = 0.316228;
		attenuationEffectType = "OpenHeliAttenuation";

		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",0.1,1};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_2",0.1,1};
		rotorDamageInt[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_int_open_1",1.0,1.0};
		rotorDamageOut[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_ext_1",2.5118864,1.0,150};
		rotorDamage[] = {"rotorDamageInt","rotorDamageOut"};
		tailDamageInt[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",1.0,1.0};
		tailDamageOut[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",1.0,1.0,300};
		tailDamage[] = {"tailDamageInt","tailDamageOut"};
		landingSoundInt0[] = {"A3\Sounds_F\vehicles\air\noises\landing_skids_int1_open",1.0,1.0,100};
		landingSoundInt1[] = {"A3\Sounds_F\vehicles\air\noises\landing_skids_int1_open",1.0,1.0,100};
		landingSoundInt[] = {"landingSoundInt0",0.5,"landingSoundInt1",0.5};
		landingSoundOut0[] = {"A3\Sounds_F\vehicles\air\noises\landing_skids_ext1",1.7782794,1.0,100};
		landingSoundOut1[] = {"A3\Sounds_F\vehicles\air\noises\landing_skids_ext1",1.7782794,1.0,100};
		landingSoundOut[] = {"landingSoundOut0",0.5,"landingSoundOut1",0.5};
		slingCargoAttach0[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEndINT",1.0,1.0};
		slingCargoAttach1[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookLock",1.0,1.0,80};
		slingCargoAttach[] = {"slingCargoAttach0","slingCargoAttach1"};
		slingCargoDetach0[] = {"A3\Sounds_F\dummysound",1.0,1.0};
		slingCargoDetach1[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock",1.0,1.0,80};
		slingCargoDetach[] = {"slingCargoDetach0","slingCargoDetach1"};
		slingCargoDetachAir0[] = {"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_int",1.0,1.0};
		slingCargoDetachAir1[] = {"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_ext",1.0,1.0,80};
		slingCargoDetachAir[] = {"slingCargoDetach0","slingCargoDetach1"};
		slingCargoRopeBreak0[] = {"A3\Sounds_F\vehicles\air\noises\SL_rope_break_int",1.0,1.0};
		slingCargoRopeBreak1[] = {"A3\Sounds_F\vehicles\air\noises\SL_rope_break_ext",1.0,1.0,80};
		slingCargoRopeBreak[] = {"slingCargoDetach0","slingCargoDetach1"};
		
		destrType = "DestructWreck";
		class UserActions
		{
			
		};
		class AnimationSources: AnimationSources
		{
			class DoorL1_Open
			{
				source = "door";
				animPeriod = 0.6;
				initPhase = 0;
			};
			class DoorR1_Open: DoorL1_Open{};
			class Inspect_Panel1_1
			{
				source = "user";
				animPeriod = 0.6;
				initPhase = 0;
			};
			class Inspect_Panel2_1: Inspect_Panel1_1{};
			class RotorCover_Hide
			{
				source = "user";
				animPeriod = 1e-005;
				initPhase = 0;
			};
			class Holder
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 1;
			};
			class GunL_HRot
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};
			class GunL_VRot
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};
			class GunR_HRot
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};
			class GunR_VRot
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};
			class GunL_Revolving
			{
				source = "revolving";
				weapon = "caf_M134_L";
			};
			class GunR_Revolving
			{
				source = "revolving";
				weapon = "caf_M134_R";
			};
			class Muzzle_flash
			{
				source = "ammorandom";
				weapon = "caf_M134_L";
			};
			class Muzzle_flash_R
			{
				source = "ammorandom";
				weapon = "caf_M134_R";
			};
			class Missiles_revolving
			{
				source = "revolving";
				weapon = "caf_missiles_DAR";
			};
			class LightsLDGButton_On
			{
				source = "user";
				initPhase = 1;
			};
			class extendHookLeft
			{
                source = "user";
                initPhase = 0;
                animPeriod = 1;
			};
			class extendHookRight
			{
                source = "user";
                initPhase = 0;
                animPeriod = 1;
			};
			
		};
		driverCompartments = "Compartment1";
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret{};
			class MainTurret: MainTurret{};
		};
		class Armory
		{
			description = "CH-146 Griffon Canadian Armed Forces Medium Tactical Helicopter";
		};
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
		LockDetectionSystem = CM_Lock_Radar + CM_Lock_Laser;	/// this uses macros from basicDefines_A3, just add more to gain more systems for the vehicle
		incomingMissileDetectionSystem = CM_Missile;			/// for example CM_Lock_Laser + CM_Lock_Radar, parser is able to evaluate that, or simply 12 in that case
		enableManualFire = 0;
		class HitPoints
		{
			class HitFuel
			{
				name = "fuel tanks";
				visual = "zbytek";
				armor = 0.7;
				explosionshielding = 1;
				material = 51;
				passthrough = 1;
				minimalHit = 0.4;
			};
			class HitHydraulics
			{
				name = "hydraulics";
				visual = "zbytek";
				armor = 0.7;
				explosionshielding = 1;
				material = 51;
				passthrough = 1;
				minimalHit = 0.4;
			};
			class HitMissiles
			{
				name = "missiles";
				visual = "zbytek";
				armor = 0.7;
				explosionshielding = 1;
				material = 51;
				passthrough = 1;
				minimalHit = 0.4;
			};
			class HitLGlass
			{
				name = "lglass";
				visual = "zbytek";
				armor = 0.7;
				explosionshielding = 1;
				material = 51;
				passthrough = 1;
				minimalHit = 0.4;
			};
			class HitRGlass
			{
				name = "rglass";
				visual = "zbytek";
				armor = 0.7;
				explosionshielding = 1;
				material = 51;
				passthrough = 1;
				minimalHit = 0.4;
			};
			class HitTransmission
			{
				name = "transmission";
				visual = "zbytek";
				armor = 0.7;
				explosionshielding = 1;
				material = 51;
				passthrough = 1;
				minimalHit = 0.4;
			};
			class HitHRotor
			{
				name = "main rotor";
				visual = "main rotor";
				armor = 0.6;
				explosionshielding = 1;
				material = 51;
				passthrough = 1;
				minimalHit = 0.8;
			};
			class HitVRotor
			{
				name = "tail rotor";
				visual = "tail rotor";
				armor = 0.6;
				explosionshielding = 1;
				material = 51;
				passthrough = 1;
				minimalHit = 0.8;
			};
			class HitAvionics
			{
				name = "instruments";
				visual = "instruments";
				armor = 0.6;
				explosionshielding = 1;
				material = 51;
				passthrough = 0;
				minimalHit = 0.3;
			};
			class HitHull
			{
				name = "hull";
				visual = "zbytek";
				armor = 0.6;
				explosionshielding = 1;
				material = 51;
				passthrough = 1;
				minimalHit = 0.4;
			};
			class HitEngine
			{
				armor = 0.6;
				name = "engine1";
				visual = "zbytek";
				explosionshielding = 1;
				material = 51;
				passthrough = 1;
				minimalHit = 0.35;
			};
			class HitEngine2
			{
				armor = 0.6;
				name = "engine2";
				visual = "zbytek";
				explosionshielding = 1;
				material = 51;
				passthrough = 1;
				minimalHit = 0.35;
			};
			class HitTail
			{
				name = "tail boom";
				visual = "zbytek";
				armor = 0.6;
				explosionshielding = 1;
				material = 51;
				passthrough = 1;
				minimalHit = 0.4;
			};
		}; 
		class Damage
		{
			tex[] = {};
			mat[] = {
				"caf_air\bell412\data\heli_medium01_rotor.rvmat",
				"caf_air\bell412\data\heli_medium01_rotor_damage.rvmat",
				"caf_air\bell412\data\heli_medium01_rotor_destruct.rvmat",
				
				"caf_air\bell412\data\heli_medium01_military_main.rvmat",
				"caf_air\bell412\data\heli_medium01_main_damage.rvmat",
				"caf_air\bell412\data\heli_medium01_main_destruct.rvmat",
				
				"caf_air\bell412\data\heli_medium01_in.rvmat",
				"caf_air\bell412\data\heli_medium01_in_damage.rvmat",
				"caf_air\bell412\data\heli_medium01_in_destruct.rvmat",
				
				"caf_air\bell412\data\heli_medium01_glass.rvmat",
				"caf_air\bell412\data\heli_medium01_glass_damage.rvmat",
				"caf_air\bell412\data\heli_medium01_glass_damage.rvmat",
				
				"caf_air\bell412\data\heli_medium01_military_ext1.rvmat",
				"caf_air\bell412\data\heli_medium01_ext1_damage.rvmat",
				"caf_air\bell412\data\heli_medium01_ext1_destruct.rvmat",
				
				"caf_air\bell412\data\heli_medium01_military_ext.rvmat",
				"caf_air\bell412\data\heli_medium01_ext_damage.rvmat",
				"caf_air\bell412\data\heli_medium01_ext_destruct.rvmat",
				
				"caf_air\bell412\data\heli_medium01_detail.rvmat",
				"caf_air\bell412\data\heli_medium01_detail_damage.rvmat",
				"caf_air\bell412\data\heli_medium01_detail_destruct.rvmat"
				
				};
		};
		cost = 1500000;
		
		slingLoadMaxCargoMass 	= 1800;	
	};
	class caf_bell412: caf_bell412_base_F
	{
		ace_cargo_loadmasterTurrets[] = {{1}};
		ace_fastroping_enabled = 1;
		ace_fastroping_onCut = "caf_bell412_fnc_closeFries";
		ace_fastroping_onPrepare = "caf_bell412_fnc_prepFries";
		ace_fastroping_ropeOrigins[] = {"ropeOriginLeft", "ropeOriginRight"};
		ace_cargo_size = 4;
		ace_cargo_canLoad = 1;
		author = "CAF";
		scope = 1;
		side = 1;
		faction = "CAF_TW";
		displayname = "CW-412";
		model = "\caf_air\bell412\bell412.p3d";
		crew = "CAF_CH146_PILOT_OD";
		typicalCargo[] = {};
		availableForSupportTypes[] = {"Drop","Transport"}; 
		transportSoldier = 2;
		cargoAction[] = {
			"passenger_flatground_2", //1 Center Right
			"passenger_flatground_2" //2 Center Left
			};
		memoryPointsGetInCargo[] = {"pos Cargo R","pos Cargo L"};
		memoryPointsGetInCargoDir[] = {"pos Cargo dir R","pos Cargo dir L"};
		memoryPointsGetInCargoPrecise[] = {"pos Cargo R","pos Cargo L"};
		showNVGCargo[] = {1,1,1};
		ejectDeadCargo = 0;
		memorypointlmissile = "P strela";
		memorypointrmissile = "P strela";
		weapons[] = {caf_missiles_DAR, CMFlareLauncher};	/// array of various vehicle weapons mounted on the heli
		magazines[] = {7Rnd_missiles, 168Rnd_CMFlare_Chaff_Magazine}; /// array of corresponding magazines

		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment2"};
		hiddenSelections[] = /// we want to allow changing of colours, this defines on what selection are the textures used
		{
			"numbers"
		};
		hiddenSelectionsTextures[] = /// changes of textures to distinguish variants in same order as hiddenSelections[]
		{
			"caf_air\bell412\data\id\bell412_blank_ca.paa"
		};
		class RenderTargets
		{
			class FLIR2
			{
				renderTarget = "rendertarget1";
				class CameraView2
				{
					pointPosition = "z_FLIR_pos";
					pointDirection = "z_FLIR_dir";
					renderQuality = 2;
					renderVisionMode = 2;
					fov = 0.7;
				};
			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				CanEject = 0;
				gunnerAction = "pilot_Heli_Transport_01";
				gunnerInAction = "pilot_Heli_Transport_01";
				memoryPointsGetInGunner = "pos copilot";
				memoryPointsGetInGunnerDir = "pos copilot dir";
				gunnerGetInAction = "GetInLow";
				gunnergetOutAction = "GetOutLow";
				preciseGetInOut = 0;
				GunnerDoor = "DoorL1_Open";
				gunnerLeftHandAnimName = "lever_copilot";
				gunnerRightHandAnimName = "stick_copilot";
				gunnerLeftLegAnimName = "pedalL";
				gunnerRightLegAnimName = "pedalR";
				proxyIndex = 2;
				LODTurnedIn = 1100;
				LODTurnedOut = 1100;
				gunnerCompartments = "Compartment1";
				commanding = -3;
				weapons[] = {};
				magazines[] = {};
				body = "FLIR_HRot";
				gun = "FLIR_VRot";
				animationSourceBody = "FLIR_HRot";
				animationSourceGun = "FLIR_VRot";
				cameraBegin = "z_FLIR_pos";
				cameraEnd = "z_FLIR_dir";
				stabilizedInAxes = 3;
				memoryPointGunnerOptics = "z_FLIR_pos";
				isCopilot = 1;
				memoryPointsGetInGunnerPrecise = "GetIn_Turret";
				turretInfoType = "RscOptics_UAV_gunner";
				primaryObserver = 1;
				turretFollowFreeLook = 1;
				gunnerName = "Co-Pilot";
				driverLeftLegAnimName = "pedalL";
				driverRightLegAnimName = "pedalR";
				proxytype = "CPGunner";
				class ViewOptics;
				class OpticsIn
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						opticsDisplayName="W";
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					};
					class Medium: Wide
					{
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						opticsDisplayName="M";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
					};
					class Narrow: Wide
					{
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
						opticsDisplayName="N";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						minFov=0.25;
						maxFov=1.25;
						initFov=0.75;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsModel="";
						gunnerOpticsEffect[]={};
					};
				};
				minElev = -74;
				maxElev = 14;
				initElev = -5;
				minTurn = -171;
				maxTurn = 171;
				initTurn = 0;
			};
			class MainTurret: CopilotTurret
			{
				body = "GunL_HRot";
				gun = "GunL_VRot";
				animationSourceBody = "GunL_HRot";
				animationSourceGun = "GunL_VRot";
				weapons[] = {"caf_M134_L"};
				magazines[] = {"5000Rnd_762x51_Belt","5000Rnd_762x51_Belt"};
				selectionFireAnim = "zaslehL";
				minElev = -50;
				maxElev = 30;
				initElev = -30;
				minTurn = -3;
				maxTurn = 173;
				initTurn = 88;
				turretFollowFreeLook = 1;
				maxHorizontalRotSpeed = 1.2;
				maxVerticalRotSpeed = 1.2;
				gunnerForceOptics = 0;
				gunnerName = "Door Gunner L";
				gunnerType= "";
				gunnerOpticsModel="a3\weapons_f\Reticle\optic_empty";
				gunnerOutOpticsShowCursor = 1;
				gunnerOpticsShowCursor = 1;
				startengine = 0;
				gunnerAction = "gunner_Heli_Transport_01";
				gunnerInAction = "gunner_Heli_Transport_01";
				GunnerDoor = "";
				commanding = -2;
				proxyIndex = 1;
				primaryObserver = 0;
				primaryGunner = 1;
				gunnerCompartments = "Compartment1";
				iscopilot = 0;
				memoryPointsGetInGunnerPrecise = "GetIn_Turret2";
				soundServo[] = {"",0.01,1.0};
				animationSourceHatch = "";
				stabilizedInAxes = 0;
				turretInfoType = "RscWeaponZeroing";
				cameraBegin = "z_gunnerViewL";
				cameraEnd = "";
				memoryPointsGetInGunner = "pos Gunner";
				memoryPointsGetInGunnerDir = "pos Gunner Dir";
				gunBeg = "z_gunL_muzzle";
				gunEnd = "z_gunL_chamber";
				memoryPointGun = "z_machinegunL";
				memoryPointGunnerOptics = "z_gunnerViewL";
				LODTurnedIn=1200;
				LODTurnedOut=1200;
				proxytype = "CPGunner";
				class OpticsIn
				{
					class Monocular
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						minFov=0.25;
						maxFov=1.25;
						initFov=0.75;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsModel="\a3\weapons_f\Reticle\optics_empty";
						gunnerOpticsEffect[]={};
					};
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
					gunnerOpticsModel="\a3\weapons_f\Reticle\optics_empty";
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						minFov=0.25;
						maxFov=1.25;
						initFov=0.75;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsModel="\a3\weapons_f\Reticle\optics_empty";
						gunnerOpticsEffect[]={};
					};
				};
			};
			class MainTurret_R: MainTurret
			{
				body = "GunR_HRot";
				gun = "GunR_VRot";
				animationSourceBody = "GunR_HRot";
				animationSourceGun = "GunR_VRot";
				weapons[] = {"caf_M134_R"};
				magazines[] = {"5000Rnd_762x51_Belt","5000Rnd_762x51_Belt"};
				selectionFireAnim = "zaslehR";
				minElev=-60; maxElev=+30; initElev=-30;
				minTurn=-173; maxTurn=-3; initTurn=-70;
				gunnerForceOptics = 0;
				gunnerName = "Door Gunner R";
				gunnerOpticsModel = "\A3\Weapons_F\empty.p3d";
				gunnerOutOpticsShowCursor = 1;
				gunnerOpticsShowCursor = 1;
				startengine = 0;
				gunnerAction = "gunner_Heli_Transport_01";
				gunnerInAction = "gunner_Heli_Transport_01";
				GunnerDoor = "";
				commanding = -2;
				proxyIndex = 3;
				primaryObserver = 0;
				primaryGunner = 0;
				gunnerCompartments = "Compartment1";
				iscopilot = 0;
				memoryPointsGetInGunnerPrecise = "GetIn_Turret";
				soundServo[] = {"",0.01,1.0};
				animationSourceHatch = "";
				stabilizedInAxes = 0;
				cameraBegin = "z_gunnerViewR";
				LODTurnedIn=1200;
				LODTurnedOut=1200;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
				};
				memoryPointsGetInGunner = "pos Cargo RR";
				memoryPointsGetInGunnerDir = "pos Cargo RR Dir";
				gunBeg = "z_gunR_muzzle";
				gunEnd = "z_gunR_chamber";
				memoryPointGun = "z_machinegunR";
				memoryPointGunnerOptics = "z_gunnerViewR";
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_bench_1";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos cargo FR";
				memoryPointsGetInGunnerDir="pos cargo FR dir";
				gunnerName="Right Skid Front";
				proxyIndex=3;
				isPersonTurret=1;
				ejectDeadGunner=0;
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{9.4394999,-94.855698},
						{12.5849,-34.384102},
						{14.0365,60.875801},
						{14.1021,95}
					};
					limitsArrayBottom[]=
					{
						{-32.2276,-94.901703},
						{-32.7616,-79.195801},
						{-45,-75.648804},
						{-44.965302,95}
					};
				};
				class TurnIn: TurnOut
				{
				};
				class dynamicViewLimits
				{
					CargoTurret_04[]={-65,95};
				};
				playerPosition=4;
				soundAttenuationTurret="";
				disableSoundAttenuation=1;
				gunnerGetInAction="GetInHeli_Light_01bench";
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="pos cargo FL";
				memoryPointsGetInGunnerDir="pos cargo FL dir";
				gunnerName="Left Skid Front";
				proxyIndex=4;
				class dynamicViewLimits
				{
					CargoTurret_03[]={-65,95};
				};
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{14.705,-95},
						{14.1224,-62.859001},
						{12.3049,32.941399},
						{9.0861998,94.947998}
					};
					limitsArrayBottom[]=
					{
						{-45,-94.965599},
						{-45,80.990402},
						{-31.903299,82.846497},
						{-31.793501,95}
					};
				};
				class TurnIn: TurnOut
				{
				};
			};
			class CargoTurret_03: CargoTurret_02
			{
				gunnerCompartments="Compartment3";
				gunnerName="Left Skid Middle";
				memoryPointsGetInGunner="pos cargo ML";
				memoryPointsGetInGunnerDir="pos cargo ML dir";
				proxyIndex=6;
				class dynamicViewLimits
				{
					CargoTurret_02[]={-95,65};
				};
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{10.6196,-94.8601},
						{11.1364,-69.195396},
						{14.0333,15.3744},
						{11.6789,94.968201}
					};
					limitsArrayBottom[]=
					{
						{-32.208099,-94.038101},
						{-32.368198,-78.541496},
						{-45,-72.854202},
						{-44.918598,94.886497}
					};
				};
				class TurnIn: TurnOut
				{
				};
			};
			class CargoTurret_04: CargoTurret_01
			{
				gunnerCompartments="Compartment2";
				gunnerName="Right Skid Middle";
				memoryPointsGetInGunner="pos cargo MR";
				memoryPointsGetInGunnerDir="pos cargo MR dir";
				proxyIndex=5;
				class dynamicViewLimits
				{
					CargoTurret_01[]={-95,65};
				};
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{12.1826,-95},
						{14.4163,-16.698299},
						{11.5046,68.829201},
						{11.8156,94.980904}
					};
					limitsArrayBottom[]=
					{
						{-44.897598,-94.999397},
						{-44.973999,81.190598},
						{-32.447899,83.791603},
						{-32.740501,95}
					};
				};
				class TurnIn: TurnOut
				{
				};
			};
			class CargoTurret_05: CargoTurret_02
			{
				gunnerCompartments="Compartment3";
				gunnerName="Left Skid Rear";
				memoryPointsGetInGunner="pos cargo RL";
				memoryPointsGetInGunnerDir="pos cargo RL dir";
				proxyIndex=8;
				class dynamicViewLimits
				{
					CargoTurret_06[]={-95,65};
				};
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{14.705,-95},
						{14.1224,-62.859001},
						{12.3049,32.941399},
						{9.0861998,94.947998}
					};
					limitsArrayBottom[]=
					{
						{-45,-94.965599},
						{-45,80.990402},
						{-31.903299,82.846497},
						{-31.793501,95}
					};
				};
				class TurnIn: TurnOut
				{
				};
			};
			class CargoTurret_06: CargoTurret_01
			{
				gunnerCompartments="Compartment2";
				gunnerName="Right Skid Rear";
				memoryPointsGetInGunner="pos cargo RR";
				memoryPointsGetInGunnerDir="pos cargo RR dir";
				proxyIndex=7;
				class dynamicViewLimits
				{
					CargoTurret_05[]={-95,65};
				};
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{12.1826,-95},
						{14.4163,-16.698299},
						{11.5046,68.829201},
						{11.8156,94.980904}
					};
					limitsArrayBottom[]=
					{
						{-44.897598,-94.999397},
						{-44.973999,81.190598},
						{-32.447899,83.791603},
						{-32.740501,95}
					};
				};
				class TurnIn: TurnOut
				{
				};
			};
		};
		class Armory
		{
			description = "CH-146 is the CAF variant of the Bell 412.  The CH-146 is a Tactical Medium Utility Helciopter.";
		};
	};
	class caf_bell412c6: caf_bell412
	{
		
		author = "CAF";
		scope = 1;
		side = 1;
		faction = "CAF_TW";
		displayname = "CW-412";
		model = "\caf_air\bell412\bell412c6.p3d";
		crew = "CAF_CH146_PILOT_OD";

		class Turrets:Turrets
		{
			class CopilotTurret:CopilotTurret
			{
				CanEject = 0;
				gunnerAction = "pilot_Heli_Transport_01";
				gunnerInAction = "pilot_Heli_Transport_01";
				memoryPointsGetInGunner = "pos copilot";
				memoryPointsGetInGunnerDir = "pos copilot dir";
				gunnerGetInAction = "GetInLow";
				gunnergetOutAction = "GetOutLow";
				preciseGetInOut = 0;
				GunnerDoor = "DoorL1_Open";
				gunnerLeftHandAnimName = "lever_copilot";
				gunnerRightHandAnimName = "stick_copilot";
				gunnerLeftLegAnimName = "pedalL";
				gunnerRightLegAnimName = "pedalR";
				proxyIndex = 2;
				LODTurnedIn = 1100;
				LODTurnedOut = 1100;
				gunnerCompartments = "Compartment1";
				commanding = -3;
				weapons[] = {};
				magazines[] = {};
				body = "FLIR_HRot";
				gun = "FLIR_VRot";
				animationSourceBody = "FLIR_HRot";
				animationSourceGun = "FLIR_VRot";
				cameraBegin = "z_FLIR_pos";
				cameraEnd = "z_FLIR_dir";
				stabilizedInAxes = 3;
				memoryPointGunnerOptics = "z_FLIR_pos";
				isCopilot = 1;
				memoryPointsGetInGunnerPrecise = "GetIn_Turret";
				turretInfoType = "RscOptics_UAV_gunner";
				primaryObserver = 1;
				turretFollowFreeLook = 1;
				gunnerName = "Co-Pilot";
				driverLeftLegAnimName = "pedalL";
				driverRightLegAnimName = "pedalR";
				proxytype = "CPGunner";
				class ViewOptics;
				class OpticsIn
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						opticsDisplayName="W";
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					};
					class Medium: Wide
					{
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						opticsDisplayName="M";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
					};
					class Narrow: Wide
					{
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
						opticsDisplayName="N";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						minFov=0.25;
						maxFov=1.25;
						initFov=0.75;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsModel="";
						gunnerOpticsEffect[]={};
					};
				};
				minElev = -74;
				maxElev = 14;
				initElev = -5;
				minTurn = -171;
				maxTurn = 171;
				initTurn = 0;

			};
			class MainTurret:CopilotTurret
			{
				CanEject = 0;
				gunnerAction = "gunner_Heli_Transport_01";
				gunnerInAction = "gunner_Heli_Transport_01";
				memoryPointsGetInGunner = "pos Cargo RR";
				memoryPointsGetInGunnerDir = "pos Cargo RR dir";
				gunnerGetInAction = "GetInLow";
				gunnergetOutAction = "GetOutLow";
				preciseGetInOut = 1;
				GunnerDoor = "";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				gunnerLeftLegAnimName = "";
				gunnerRightLegAnimName = "";
				gunnerName="Door Gunner (Right)";
				proxyIndex = 3;
				gunnerCompartments = "Compartment2";
				commanding = -3;
				weapons[]={"C6GPMG_veh"};
				magazines[]={"220Rnd_762x51_Box","220Rnd_762x51_Box","220Rnd_762x51_Box"};
				body="mainTurret";
				gun="mainGun";
				gunBeg = "muzzle"; //gunBeg = endpoint of the gun
				gunEnd = "chamber"; //gunEnd = chamber of the gun
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				selectionFireAnim = "zaslehR";
				cameraBegin = "gunnerview";
				cameraEnd = "";
				stabilizedInAxes = 0;
				memoryPointGunnerOptics="gunnerview";
				isCopilot = 0;
				memoryPointsGetInGunnerPrecise = "GetIn_Turret";
				turretInfoType = "RscWeaponZeroing";
				primaryObserver = 1;
				turretFollowFreeLook = 1;
				maxHorizontalRotSpeed = 1.2;
				maxVerticalRotSpeed = 1.2;
				proxytype = "CPGunner";
				LODTurnedIn=1200;
				LODTurnedOut=1200;
				class OpticsIn
				{
					class Monocular
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						minFov=0.25;
						maxFov=1.25;
						initFov=0.75;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsModel="\a3\weapons_f\Reticle\optics_empty";
						gunnerOpticsEffect[]={};
					};
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
					gunnerOpticsModel="\a3\weapons_f\Reticle\optics_empty";
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						minFov=0.25;
						maxFov=1.25;
						initFov=0.75;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsModel="\a3\weapons_f\Reticle\optics_empty";
						gunnerOpticsEffect[]={};
					};
				};
				minElev=-60; maxElev=+30; initElev=-30;
				minTurn=-173; maxTurn=-3; initTurn=-70;

			};
			class LeftDoorGun: MainTurret
			{
				body="Turret_2";
				gun="Gun_2";
				animationSourceBody="Turret_2";
				animationSourceGun="Gun_2";
				weapons[]={"C6GPMG_veh"};
				gunBeg = "muzzle_2"; //gunBeg = endpoint of the gun
				gunEnd = "chamber_2"; //gunEnd = chamber of the gun
				memoryPointGun = "";
				memoryPointsGetInGunner = "pos Gunner";
				memoryPointsGetInGunnerDir = "pos Gunner dir";
				proxyIndex=1;
				memoryPointGunnerOptics="gunnerview_2";
				selectionFireAnim = "zaslehL";
				gunnerName="Crew Chief";
				commanding=-2;
				minElev=-50; maxElev=+30; initElev=-30;
				minTurn=3; maxTurn=173; initTurn=80;
				primaryGunner=1;
				LODTurnedIn=1200;
				LODTurnedOut=1200;
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_bench_1";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos cargo FR";
				memoryPointsGetInGunnerDir="pos cargo FR dir";
				gunnerName="Right Skid Front";
				proxyIndex=3;
				isPersonTurret=1;
				ejectDeadGunner=0;
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{9.4394999,-94.855698},
						{12.5849,-34.384102},
						{14.0365,60.875801},
						{14.1021,95}
					};
					limitsArrayBottom[]=
					{
						{-32.2276,-94.901703},
						{-32.7616,-79.195801},
						{-45,-75.648804},
						{-44.965302,95}
					};
				};
				class TurnIn: TurnOut
				{
				};
				class dynamicViewLimits
				{
					CargoTurret_04[]={-65,95};
				};
				playerPosition=4;
				soundAttenuationTurret="";
				disableSoundAttenuation=1;
				gunnerGetInAction="GetInHeli_Light_01bench";
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="pos cargo FL";
				memoryPointsGetInGunnerDir="pos cargo FL dir";
				gunnerName="Left Skid Front";
				proxyIndex=4;
				class dynamicViewLimits
				{
					CargoTurret_03[]={-65,95};
				};
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{14.705,-95},
						{14.1224,-62.859001},
						{12.3049,32.941399},
						{9.0861998,94.947998}
					};
					limitsArrayBottom[]=
					{
						{-45,-94.965599},
						{-45,80.990402},
						{-31.903299,82.846497},
						{-31.793501,95}
					};
				};
				class TurnIn: TurnOut
				{
				};
			};
			class CargoTurret_03: CargoTurret_02
			{
				gunnerCompartments="Compartment3";
				gunnerName="Left Skid Middle";
				memoryPointsGetInGunner="pos cargo ML";
				memoryPointsGetInGunnerDir="pos cargo ML dir";
				proxyIndex=6;
				class dynamicViewLimits
				{
					CargoTurret_02[]={-95,65};
				};
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{10.6196,-94.8601},
						{11.1364,-69.195396},
						{14.0333,15.3744},
						{11.6789,94.968201}
					};
					limitsArrayBottom[]=
					{
						{-32.208099,-94.038101},
						{-32.368198,-78.541496},
						{-45,-72.854202},
						{-44.918598,94.886497}
					};
				};
				class TurnIn: TurnOut
				{
				};
			};
			class CargoTurret_04: CargoTurret_01
			{
				gunnerCompartments="Compartment2";
				gunnerName="Right Skid Middle";
				memoryPointsGetInGunner="pos cargo MR";
				memoryPointsGetInGunnerDir="pos cargo MR dir";
				proxyIndex=5;
				class dynamicViewLimits
				{
					CargoTurret_01[]={-95,65};
				};
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{12.1826,-95},
						{14.4163,-16.698299},
						{11.5046,68.829201},
						{11.8156,94.980904}
					};
					limitsArrayBottom[]=
					{
						{-44.897598,-94.999397},
						{-44.973999,81.190598},
						{-32.447899,83.791603},
						{-32.740501,95}
					};
				};
				class TurnIn: TurnOut
				{
				};
			};
			class CargoTurret_05: CargoTurret_02
			{
				gunnerCompartments="Compartment3";
				gunnerName="Left Skid Rear";
				memoryPointsGetInGunner="pos cargo RL";
				memoryPointsGetInGunnerDir="pos cargo RL dir";
				proxyIndex=8;
				class dynamicViewLimits
				{
					CargoTurret_06[]={-95,65};
				};
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{14.705,-95},
						{14.1224,-62.859001},
						{12.3049,32.941399},
						{9.0861998,94.947998}
					};
					limitsArrayBottom[]=
					{
						{-45,-94.965599},
						{-45,80.990402},
						{-31.903299,82.846497},
						{-31.793501,95}
					};
				};
				class TurnIn: TurnOut
				{
				};
			};
			class CargoTurret_06: CargoTurret_01
			{
				gunnerCompartments="Compartment2";
				gunnerName="Right Skid Rear";
				memoryPointsGetInGunner="pos cargo RR";
				memoryPointsGetInGunnerDir="pos cargo RR dir";
				proxyIndex=7;
				class dynamicViewLimits
				{
					CargoTurret_05[]={-95,65};
				};
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{12.1826,-95},
						{14.4163,-16.698299},
						{11.5046,68.829201},
						{11.8156,94.980904}
					};
					limitsArrayBottom[]=
					{
						{-44.897598,-94.999397},
						{-44.973999,81.190598},
						{-32.447899,83.791603},
						{-32.740501,95}
					};
				};
				class TurnIn: TurnOut
				{
				};
			};
		};	
	};

	class caf_bell412_400 : caf_bell412c6
	{
		scope = 2;
		displayname = "CH-146 [400]";
		hiddenSelections[] = /// we want to allow changing of colours, this defines on what selection are the textures used
		{
			"numbers"
		};
		hiddenSelectionsTextures[] = /// changes of textures to distinguish variants in same order as hiddenSelections[]
		{
			"caf_air\bell412\data\ID\ch146\ch146_decal_400_ca.paa"
		};
	};
	class caf_bell412_401 : caf_bell412
	{
		scope = 2;
		displayname = "CH-146 [401]";
		hiddenSelections[] = /// we want to allow changing of colours, this defines on what selection are the textures used
		{
			"numbers"
		};
		hiddenSelectionsTextures[] = /// changes of textures to distinguish variants in same order as hiddenSelections[]
		{
			"caf_air\bell412\data\ID\ch146\ch146_decal_401_ca.paa"
		};
	};
	class caf_bell412_402 : caf_bell412
	{
		scope = 2;
		displayname = "CH-146 [402]";
		hiddenSelections[] = /// we want to allow changing of colours, this defines on what selection are the textures used
		{
			"numbers"
		};
		hiddenSelectionsTextures[] = /// changes of textures to distinguish variants in same order as hiddenSelections[]
		{
			"caf_air\bell412\data\ID\ch146\ch146_decal_402_ca.paa"
		};
	};
	class caf_bell412_403 : caf_bell412
	{
		scope = 2;
		displayname = "CH-146 [403]";
		hiddenSelections[] = /// we want to allow changing of colours, this defines on what selection are the textures used
		{
			"numbers"
		};
		hiddenSelectionsTextures[] = /// changes of textures to distinguish variants in same order as hiddenSelections[]
		{
			"caf_air\bell412\data\ID\ch146\ch146_decal_403_ca.paa"
		};
	};
	class caf_bell412_404 : caf_bell412
	{
		scope = 2;
		displayname = "CH-146 [404]";
		hiddenSelections[] = /// we want to allow changing of colours, this defines on what selection are the textures used
		{
			"numbers"
		};
		hiddenSelectionsTextures[] = /// changes of textures to distinguish variants in same order as hiddenSelections[]
		{
			"caf_air\bell412\data\ID\ch146\ch146_decal_404_ca.paa"
		};
	};
	class caf_bell412_150X : caf_bell412_base_F
	{
		ace_cargo_loadmasterTurrets[] = {{1}};
		ace_fastroping_enabled = 1;
		ace_fastroping_onCut = "caf_bell412_fnc_closeFries";
		ace_fastroping_onPrepare = "caf_bell412_fnc_prepFries";
		ace_fastroping_ropeOrigins[] = {"ropeOriginLeft", "ropeOriginRight"};
		ace_cargo_size = 4;
		ace_cargo_canLoad = 1;
		author = "CAF";
		forceInGarage = 1;
		scope = 2;
		side = 1;
		faction = "CAF_TW";
		displayname = "CH-146 [MEDEVAC(410)]";
		model = "\caf_air\bell412\bell412X.p3d";
		crew = "caf_pilot";
		typicalCargo[] = {"caf_pilot"};
		availableForSupportTypes[] = {"Drop","Transport"}; 
		transportSoldier = 4;
		cargoAction[] = {"passenger_injured_medevac_truck03","passenger_generic01_foldhands","passenger_generic01_foldhands","passenger_generic01_foldhands"};
		memoryPointsGetInCargo[] = {"pos Cargo R","pos Cargo L"};
		memoryPointsGetInCargoDir[] = {"pos Cargo dir R","pos Cargo dir L"};
		memoryPointsGetInCargoPrecise[] = {"pos Cargo R","pos Cargo L"};
		showNVGCargo[] = {1,1,1};
		ejectDeadCargo = 0;
		memorypointlmissile = "P strela";
		memorypointrmissile = "P strela";
		weapons[] = {CMFlareLauncher};	/// array of various vehicle weapons mounted on the heli
		magazines[] = {168Rnd_CMFlare_Chaff_Magazine}; /// array of corresponding magazines

		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment2"};
		hiddenSelections[] = /// we want to allow changing of colours, this defines on what selection are the textures used
		{
			"numbers"
		};
		hiddenSelectionsTextures[] = /// changes of textures to distinguish variants in same order as hiddenSelections[]
		{
			"caf_air\bell412\data\ID\ch146\ch146_decal_410_ca.paa"
		};
		class TransportItems
		{
			class _xx_ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=50;
			};
			class _xx_ACE_elasticBandage
			{
				name="ACE_elasticBandage";
				count=50;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=50;
			};
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=50;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=20;
			};
			class _xx_ACE_epinephrine
			{
				name="ACE_epinephrine";
				count=10;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=20;
			};
			class _xx_ACE_atropine
			{
				name="ACE_atropine";
				count=10;
			};
			class _xx_ACE_salineIV_500
			{
				name="ACE_salineIV_500";
				count=8;
			};
			class _xx_ACE_surgicalKit
			{
				name="ACE_surgicalKit";
				count=2;
			};
			class _xx_ACE_personalAidKit
			{
				name="ACE_personalAidKit";
				count=2;
			};
		};
		class RenderTargets
		{
			class FLIR2
			{
				renderTarget = "rendertarget1";
				class CameraView2
				{
					pointPosition = "z_FLIR_pos";
					pointDirection = "z_FLIR_dir";
					renderQuality = 2;
					renderVisionMode = 2;
					fov = 0.7;
				};
			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				CanEject = 0;
				gunnerAction = "pilot_Heli_Transport_01";
				gunnerInAction = "pilot_Heli_Transport_01";
				memoryPointsGetInGunner = "pos copilot";
				memoryPointsGetInGunnerDir = "pos copilot dir";
				gunnerGetInAction = "GetInLow";
				gunnergetOutAction = "GetOutLow";
				preciseGetInOut = 0;
				GunnerDoor = "DoorL1_Open";
				gunnerLeftHandAnimName = "lever_copilot";
				gunnerRightHandAnimName = "stick_copilot";
				gunnerLeftLegAnimName = "pedalL";
				gunnerRightLegAnimName = "pedalR";
				proxyIndex = 2;
				LODTurnedIn = 1100;
				LODTurnedOut = 1100;
				gunnerCompartments = "Compartment1";
				commanding = -3;
				weapons[] = {};
				magazines[] = {};
				body = "FLIR_HRot";
				gun = "FLIR_VRot";
				animationSourceBody = "FLIR_HRot";
				animationSourceGun = "FLIR_VRot";
				cameraBegin = "z_FLIR_pos";
				cameraEnd = "z_FLIR_dir";
				stabilizedInAxes = 3;
				memoryPointGunnerOptics = "z_FLIR_pos";
				isCopilot = 1;
				memoryPointsGetInGunnerPrecise = "GetIn_Turret";
				turretInfoType = "RscOptics_UAV_gunner";
				primaryObserver = 1;
				turretFollowFreeLook = 1;
				gunnerName = "Co-Pilot";
				driverLeftLegAnimName = "pedalL";
				driverRightLegAnimName = "pedalR";
				proxytype = "CPGunner";
				class ViewOptics;
				class OpticsIn
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						opticsDisplayName="W";
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					};
					class Medium: Wide
					{
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						opticsDisplayName="M";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
					};
					class Narrow: Wide
					{
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
						opticsDisplayName="N";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						minFov=0.25;
						maxFov=1.25;
						initFov=0.75;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsModel="";
						gunnerOpticsEffect[]={};
					};
				};
				minElev = -74;
				maxElev = 14;
				initElev = -5;
				minTurn = -171;
				maxTurn = 171;
				initTurn = 0;
			};
		};
		class Armory
		{
			description = "CH-146 is the CAF variant of the Bell 412.  The CH-146 is a Tactical Medium Utility Helciopter.";
		};
	};
	
};