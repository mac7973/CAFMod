
class CfgPatches
{
	class CAF_M72A6
	{
		units[] = {};
		weapons[] = {"M72A6"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F"};
	};
};
class Mode_SemiAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;

class CfgAmmo 
{
	class RocketBase;
	class 60MM_ROCKET: RocketBase
	{
		SoundSetExplosion[] = {"RocketsLight_Exp_SoundSet","RocketsLight_Tail_SoundSet","Explosion_Debris_SoundSet"};
		hit = 375;
		indirectHit = 20;
		indirectHitRange = 3;
		explosive = 0.8;
		cost = 200;
		airFriction = 0.085;
		sideAirFriction = 0.085;
		maxSpeed = 150;
		initTime = 0.1;
		thrust = 0;
		thrusttime = 0.1;
		fuseDistance = 5;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissileInit = "";
		effectsMissile = "EmptyEffect";
		simulationStep = 0.02;
		airLock = 0;
		irLock = 0;
		timeToLive = 5;
		maneuvrability = 0;
		allowAgainstInfantry = 0;
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",6,1,500};
		whistleDist = 32;
		model = "\CAF_weapons\firedRound.p3d";
		class CamShakeExplode
		{
			power = "(55 * 0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(20^0.25)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
};

class CfgMagazines
{
	class Default {
		caf_disposable = 0;
	};
	
	class CA_LauncherMagazine;
	class 1Rnd_M72a6 : CA_LauncherMagazine {
		allowedSlots[] = {701,801,901};
		caf_disposable = 1;
		displayName = "M72A6";
		scope = 2;
		count = 1;
		ammo = "60MM_ROCKET";
		picture = "\caf_weapons_t\inv\60mm_rocket.paa";
		modelSpecial = "\CAF_weapons\CAF_M72a6_launcher_loaded";
		model = "\CAF_weapons\firedRound.p3d";
		initSpeed = 145;
		descriptionShort = "1Rnd M72a6";
		mass = 0;
	};
	class caf_m72a6_USED : 1Rnd_M72A6 {
		scope = 1;
		count = 0;
		type = 0;
		CAF_disposable = 0;
		displayName = M72A6 Used;
	};
};



class CfgWeapons {

	class Default {
		caf_disposable = 0;
	};	// External class reference

	class Launcher;	// External class reference
	
	class Launcher_Base_F : Launcher {
		class WeaponSlotsInfo;	// External class reference
	};
	
	class caf_m72a6 : Launcher  {

		scope = 2;

		CAF_disposable=1;
		CAF_disposable_used = "caf_m72a6_USED";
		CAF_disposable_tube = "CAF_M72a6_USED_TUBE";

		autoReload = false;
		displayName = "M72A6";

		inertia = 0.8;
		dexterity = 1.2;
		aimTransitionSpeed = 0.6;

		model = "\CAF_weapons\CAF_M72a6_collapsed";
		modelSpecial = "\CAF_weapons\CAF_M72a6_launcher_loaded";
		handAnim[] = {"OFP2_ManSkeleton", "\CAF_weapons_c\anims\bog_std_launcher.rtm"};
		modelOptics = "-";
		magazines[] = {"1Rnd_M72a6"};
		magazineReloadTime = 3;
		sounds[] = {"StandardSound"};
		class StandardSound {
			begin1[] = {"\CAF_weapons_s\m72a6\m72a6Fire.ogg", 2.0, 1, 800};
			soundBegin[] = {"begin1", 1};
			weaponSoundEffect = "DefaultRifle";
		};
		reloadMagazineSound[] = {"\CAF_weapons_s\m72a6\m72a6_load.ogg", 0.316228, 1, 20};
		drySound[] = {"A3\sounds_f\weapons\other\dry6.wss", 0.0316228, 1, 10};
		soundFly[] = {"A3\sounds_f\weapons\rockets\rocket_fly_1.wss", 0.316228, 1.5, 700};
		picture = "\caf_weapons_t\inv\m72a6.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_at_CA.paa";
		recoil = "launcherBase";
		minRange = 10;
		midRange = 200;
		maxRange = 300;
		aiRateOfFire = 10.0;
		aiRateOfFireDistance = 250;

		class Library {
			libTextDesc = "M72A6 Short Range Anti Tank Weapon";
		};
		descriptionShort = "M72A6";
		
		class WeaponSlotsInfo {
			mass = 58;
			allowedSlots[] = {901};
		};
	
		class ItemInfo {
			priority = 3;
			RMBhint = M72A6;
			onHoverText = "TODO M72A6 DSS";
		};
		
	};
		class caf_m72a6_USED : caf_m72a6 {
		scope = 1;
		caf_disposable = 0;
		magazines[] = {"caf_m72a6_USED"};
		displayName = "M72A6 (USED)";
		model = "\caf_weapons\caf_M72a6_launcher";
	};
	
	
	
};
	
	
class Extended_Fired_EventHandlers
{
	class Man
	{
		caf_disposable = "if ((local (_this select 0)) && (getNumber (configFile >> 'CfgWeapons' >> _this select 1 >> 'caf_disposable') == 1)) then { _this spawn caf_disposable_fired };";
	};
};

class Extended_PostInit_EventHandlers
{
	class caf_disposable
	{
		init = "call compile preProcessFileLineNumbers 'caf_weapons_c\m72a6\scripts\XEH_PostInit_Once.sqf'";
	};
};

class CfgVehicles {

	class Thing; // External class reference
	
		class CAF_M72a6_USED_TUBE : Thing {
		scope = 1;
		side = -1;
		model = "caf_weapons\caf_M72a6_launcher_loaded.p3d";
		icon = "";
		displayName = "";
		nameSound = "";
		destrType = "DestructNo";
		simulation = "thingx";
		mapSize = 0;
		accuracy = 0;
		armor = 5;
		weight = 200;
		airFriction2[] = {0.3, 0.3, 0.3};
		airFriction1[] = {0.3, 0.3, 0.3};
		airFriction0[] = {0.3, 0.3, 0.3};
	};
};