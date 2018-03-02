class CfgPatches
{
	class caf_ammo
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F"};
	};
};

class CfgAmmo
{
 class BulletBase;
	class R_12GA_Slug : BulletBase {
		hit = 11;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_slug";
		cost = 5;
		typicalSpeed = 400;
		visibleFire = 18;	// how much is visible when this weapon is fired
		audibleFire = 18;
		airFriction = -0.005;
		caliber = 0.5;
		scope = 2;
	};
	
	class R_12GA_BeanBag : BulletBase {
		hit = 2;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_slug";
		cost = 5;
		typicalSpeed = 400;
		visibleFire = 18;	// how much is visible when this weapon is fired
		audibleFire = 18;
		airFriction = -0.005;
		caliber = 0.5;
		scope = 2;
	};
	
	class R_12GA_Buck : BulletBase {
		hit = 8;
		indirectHit = 1;
		indirectHitRange = 1.5;
		cartridge = "FxCartridge_slug";
		cost = 5;
		typicalSpeed = 400;
		visibleFire = 18;	// how much is visible when this weapon is fired
		audibleFire = 18;
		airFriction = -0.005;
		caliber = 0.5;
		scope = 2;
	};
};







class CfgMagazines
{
	class CA_Magazine;
	class 3Rnd_870_Slug_12GA : CA_Magazine {
		scope = 2;
		displayName = "3Rnd Slug";
		ammo = "R_12GA_Slug";
		count = 3;
		initSpeed = 396;
		picture = "\A3\weapons_f\data\UI\M_12gauge_CA.paa";
		descriptionShort = "Caliber: 12 gauge <br/>Rounds: 3 <br/>Used in: Shotgun";
	};

	class 3Rnd_870_Buck_12GA : ca_magazine {
		scope = 2;
		displayName = "3Rnd Buckshot";
		ammo = "R_12GA_Buck";
		count = 3;
		initSpeed = 440;
		picture = "\A3\weapons_f\data\UI\M_12gauge_CA.paa";
		descriptionShort = "Caliber: 12 gauge <br/>Rounds: 3 <br/>Used in: Shotgun";
	};
	
	class 6Rnd_870_Slug_12GA : CA_Magazine {
		scope = 2;
		displayName = "6Rnd Slug";
		ammo = "R_12GA_Slug";
		count = 6;
		initSpeed = 396;
		picture = "\A3\weapons_f\data\UI\M_12gauge_CA.paa";
		descriptionShort = "Caliber: 12 gauge <br/>Rounds: 6 <br/>Used in: Shotgun";
	};
	class 6Rnd_870_BeanBag_12GA : CA_Magazine {
		scope = 2;
		displayName = "6Rnd Police Beanbag";
		ammo = "R_12GA_BeanBag";
		count = 6;
		initSpeed = 396;
		picture = "\A3\weapons_f\data\UI\M_12gauge_CA.paa";
		descriptionShort = "Caliber: 12 gauge <br/>Rounds: 6 <br/>Used in: Shotgun";
	};
	
	class 6Rnd_870_Buck_12GA : ca_magazine {
		scope = 2;
		displayName = "6Rnd Buckshot";
		ammo = "R_12GA_Buck";
		count = 6;
		initSpeed = 440;
		picture = "\A3\weapons_f\data\UI\M_12gauge_CA.paa";
		descriptionShort = "Caliber: 12 gauge <br/>Rounds: 6 <br/>Used in: Shotgun";
	};
	
};
	
