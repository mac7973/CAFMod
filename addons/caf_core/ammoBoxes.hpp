
	class NATO_Box_Base;
	class CAF_Box_Base : NATO_Box_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=1.47;
		_generalMacro="CAF_Box_Base";
		scope=0;
	};
	
	class CAF_BHP_Magazines_Box: CAF_Box_Base
	{
		ace_cargo_canLoad = 1;
        ace_cargo_size = 1; 
		author="$STR_A3_Bohemia_Interactive";
		
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Ammo_F.jpg";
		_generalMacro="Box_NATO_Ammo_F";
		scope=2;
		displayName="9mm BHP Magazines";
		model="\A3\weapons_F\AmmoBoxes\AmmoBox_F";
		icon="iconCrateAmmo";
		maximumLoad=1000;
		class TransportMagazines
		{
			class _xx_13Rnd_9x19_BHP
			{
				magazine="13Rnd_9x19_BHP";
				count=50;
			};
			
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class AnimationSources
		{
			class Ammo_source
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class AmmoOrd_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class Grenades_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class Support_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
		};
	};
	class CAF_556_Magazines_Box: CAF_Box_Base
	{
		ace_cargo_canLoad = 1;
        ace_cargo_size = 1; 
		author="$STR_A3_Bohemia_Interactive";
		
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Ammo_F.jpg";
		_generalMacro="Box_NATO_Ammo_F";
		scope=2;
		displayName="5.56mm Magazines";
		model="\A3\weapons_F\AmmoBoxes\AmmoBox_F";
		icon="iconCrateAmmo";
		maximumLoad=1000;
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count=50;
			};
			
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class AnimationSources
		{
			class Ammo_source
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class AmmoOrd_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class Grenades_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class Support_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
		};
	};
	class CAF_556_Belts_Box: CAF_Box_Base
	{
		ace_cargo_canLoad = 1;
        ace_cargo_size = 1; 
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Ammo_F.jpg";
		_generalMacro="Box_NATO_Ammo_F";
		scope=2;
		displayName="5.56 Belts";
		model="\A3\weapons_F\AmmoBoxes\AmmoBox_F";
		icon="iconCrateAmmo";
		maximumLoad=1000;
		class TransportMagazines
		{
			class _xx_200Rnd_556x45_Box_F
			{
				magazine="200Rnd_556x45_Box_F";
				count=4;
			};
			
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class AnimationSources
		{
			class Ammo_source
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class AmmoOrd_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class Grenades_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class Support_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
		};
	};
	class CAF_762_Belts_Box: CAF_Box_Base
	{
		ace_cargo_canLoad = 1;
        ace_cargo_size = 1; 
		author="$STR_A3_Bohemia_Interactive";

		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Ammo_F.jpg";
		_generalMacro="Box_NATO_Ammo_F";
		scope=2;
		displayName="7.62x51 Belts";
		model="\A3\weapons_F\AmmoBoxes\AmmoBox_F";
		icon="iconCrateAmmo";
		maximumLoad=1000;
		class TransportMagazines
		{
			class _xx_220Rnd_762x51_Box
			{
				magazine="220Rnd_762x51_Box";
				count=4;
			};
			
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class AnimationSources
		{
			class Ammo_source
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class AmmoOrd_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class Grenades_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class Support_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
		};
	};
	class CAF_C4_Box: CAF_Box_Base
	{
		ace_cargo_canLoad = 1;
        ace_cargo_size = 1; 
		author="$STR_A3_Bohemia_Interactive";
		
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_AmmoOrd_F.jpg";
		_generalMacro="Box_NATO_AmmoOrd_F";
		scope=2;
		displayName="M112 Demoliton Charges";
		model="\A3\weapons_F\AmmoBoxes\AmmoBox_F";
		icon="iconCrateOrd";
		class TransportMagazines
		{
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=20;
			};
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class AnimationSources
		{
			class Ammo_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class AmmoOrd_source
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class Grenades_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class Support_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
		};
	};
	class CAF_chemlight_Box: CAF_Box_Base
	{
		ace_cargo_canLoad = 1;
        ace_cargo_size = 1; 
		author="$STR_A3_Bohemia_Interactive";
		
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Grenades_F.jpg";
		_generalMacro="Box_NATO_Grenades_F";
		scope=2;
		displayName="Chemlights";
		model="\A3\weapons_F\AmmoBoxes\AmmoBox_F";
		icon="iconCrateGrenades";
		maximumLoad=500;
		class TransportMagazines
		{
			class _xx_Chemlight_yellow
			{
				magazine="Chemlight_yellow";
				count=20;
			};
			class _xx_Chemlight_green
			{
				magazine="Chemlight_green";
				count=20;
			};
			class _xx_Chemlight_red
			{
				magazine="Chemlight_red";
				count=20;
			};
			class _xx_Chemlight_blue
			{
				magazine="Chemlight_blue";
				count=20;
			};
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class AnimationSources
		{
			class Ammo_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
			class AmmoOrd_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
			class Grenades_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
			class Support_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
		};
	};

	class CAF_Smoke_Box: CAF_Box_Base
	{
		ace_cargo_canLoad = 1;
        ace_cargo_size = 1; 
		author="$STR_A3_Bohemia_Interactive";
		
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Grenades_F.jpg";
		_generalMacro="Box_NATO_Grenades_F";
		scope=2;
		displayName="M18 Smoke Grenades";
		model="\A3\weapons_F\AmmoBoxes\AmmoBox_F";
		icon="iconCrateGrenades";
		maximumLoad=500;
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=10;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=10;
			};
			class _xx_SmokeShellPurple
			{
				magazine="SmokeShellPurple";
				count=10;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=10;
			};
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class AnimationSources
		{
			class Ammo_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
			class AmmoOrd_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
			class Grenades_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
			class Support_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
		};
	};
	class CAF_M67_Box: CAF_Box_Base
	{
		ace_cargo_canLoad = 1;
		ace_cargo_size = 1; 
		author="$STR_A3_Bohemia_Interactive";
		
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Grenades_F.jpg";
		_generalMacro="Box_NATO_Grenades_F";

		scope=2;
		displayName="C13 Frag Grenades";
		model="\A3\weapons_F\AmmoBoxes\AmmoBox_F";
		icon="iconCrateGrenades";

		maximumLoad=500;
		class TransportMagazines
		{
			class _xx_CAF_C13
			{
				magazine="CAF_C13";
				count=32;
			};
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class AnimationSources
		{
			class Ammo_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
			class AmmoOrd_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
			class Grenades_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Support_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
		};
	};
	class CAF_40mm_HEDP_Box: CAF_Box_Base
	{
		ace_cargo_canLoad = 1;
		ace_cargo_size = 1; 

		scope=2;
		displayName="40mm HEDP Grenades";
		model="\A3\weapons_F\AmmoBoxes\AmmoBox_F";

		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=32;
			};
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class AnimationSources
		{
			class Ammo_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
			class AmmoOrd_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Grenades_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
			class Support_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
		};
	};
	class CAF_551_Box: CAF_Box_Base
	{
		ace_cargo_canLoad = 1;
        ace_cargo_size = 1; 
	
		scope=2;
		displayName="84mm FFV551 HEAT Rockets";
		model="\A3\weapons_F\AmmoBoxes\AmmoBox_F";

		class TransportMagazines
		{
			class _xx_FFV551_HEAT
			{
				magazine="FFV551_HEAT";
				count=10;
			};
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class AnimationSources
		{
			class Ammo_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class AmmoOrd_source
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class Grenades_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class Support_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
		};
	};
	class CAF_441_Box: CAF_Box_Base
	{
		ace_cargo_canLoad = 1;
        ace_cargo_size = 1; 

		scope=2;
		displayName="84mm FFV441 HEDP Rockets";
		model="\A3\weapons_F\AmmoBoxes\AmmoBox_F";

		class TransportMagazines
		{
			class _xx_FFV441_HEDP
			{
				magazine="FFV441_HEDP";
				count=10;
			};
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class AnimationSources
		{
			class Ammo_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class AmmoOrd_source
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class Grenades_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class Support_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
		};
	};
	class CAF_M72A6_Box: CAF_Box_Base
	{
		ace_cargo_canLoad = 1;
        ace_cargo_size = 2; 

		scope=2;
		displayName="M72A6 LAW";

		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_WpsLaunch_F.jpg";
		_generalMacro = "Box_NATO_WpsLaunch_F";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_long_F";
		icon = "iconCrateLong";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
			class _xx_caf_m72a6 {
				weapon ="caf_m72a6";
				count=10;
			};
		};
		class TransportItems
		{
		};
	};
	class CAF_84mm_Box: CAF_Box_Base
	{
		ace_cargo_canLoad = 1;
        ace_cargo_size = 2; 
		author="$STR_A3_Bohemia_Interactive";

		scope=2;
		displayName="M3 Carl Gustav";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_WpsLaunch_F.jpg";
		_generalMacro = "Box_NATO_WpsLaunch_F";
		icon = "iconCrateLong";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_long_F";

		class TransportMagazines
		{
		};
		class TransportWeapons
		{
			class _xx_CAF_M3CG {
				weapon = "CAF_M3CG";
				count = 2;
			};
		};

		class TransportItems
		{
		};
	};
