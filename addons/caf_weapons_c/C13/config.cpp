
class CfgPatches {
	class caf_c13 {
		Units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Weapons_f"};
	};
};



class CfgMagazines {
	
	class CA_Magazine;
	class CAF_C13: CA_Magazine
	{
		author = "CAF";
		mass = 10;
		scope = 2;
		value = 1;
		displayName = "C13 Handgrenade";
		picture = "\A3\Weapons_F\Data\UI\gear_M67_CA.paa";
		model = "\A3\Weapons_f\ammo\Handgrenade";
		type = 256;
		ammo = "GrenadeHand";
		count = 1;
		initSpeed = 18;
		nameSound = "handgrenade";
		maxLeadSpeed = 7;
		descriptionShort = "C13 Hand Grenade";
		displayNameShort = "c13 Hand Grenade";
	};
	
};

class CfgWeapons
{
	class GrenadeLauncher;
	class Throw: GrenadeLauncher
	{
		class ThrowMuzzle: GrenadeLauncher{};
		class HandGrenadeMuzzle: ThrowMuzzle
		{
			magazines[] += {"CAF_C13"};
		};
	};
};