	class CAF_Box_Base;
	class CAF_footlocker_recon : CAF_Box_Base {
	scope = 2;
	ace_cargo_hasCargo = 0;
	ace_cargo_canLoad = 0;
	ace_dragging_canDrag = 0;
	ace_dragging_canCarry = 0;
	faction = "CAF_TW";
	model = "\A3\Supplies_F_Exp\Ammoboxes\Equipment_Box_F.p3d";
	hiddenSelections[] = {"camo","camo_signs"};
	hiddenSelectionsTextures[] = {"\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_blufor_co.paa","\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_blufor_ca.paa"};
	displayName = "Pathfinder Foot Locker";
	editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Box_NATO_Equip_F.jpg";
	_generalMacro = "Box_NATO_Equip_F";
	icon = "\A3\Supplies_F_Exp\Ammoboxes\Data\UI\icon_equipment_box_ca.paa";
	transportMaxWeapons = 0;
	transportMaxMagazines = 0;
	transportMaxBackpacks = 20;
	transportMaxItems = 0;
	class EventHandlers {
		containerOpened = "[] spawn caf_fl_fnc_restrictOpen";
	};
	class TransportWeapons
	{
		class _xx_CUP_srifle_M107_Base
		{
			name = "CUP_srifle_M107_Base";
			count =2;
		};
		class _xx_CUP_srifle_AWM_wdl
		{
			name = "CUP_srifle_AWM_wdl";
			count =2;
		};
	};
	class TransportMagazines
	{
		class _xx_CUP_10Rnd_127x99_M107
		{
			magazine = "CUP_10Rnd_127x99_M107";
			count = 20;
		};
		class _xx_CUP_5Rnd_86x70_L115A1
		{
			magazine = "CUP_5Rnd_86x70_L115A1";
			count = 20;
		};
		class _xx_Chemlight_green
		{
			magazine = "Chemlight_green";
			count = 10;
		};
		class _xx_Chemlight_blue
		{
			magazine = "Chemlight_blue";
			count = 10;
		};
		class _xx_B_IR_Grenade
		{
			magazine = "B_IR_Grenade";
			count = 8;
		};
		class _xx_ACE_M84
		{
			magazine = "ACE_M84";
			count = 8;
		};
		class _xx_Chemlight_red
		{
			magazine = "Chemlight_red";
			count = 10;
		};
		class _xx_DemoCharge_Remote_Mag
		{
			magazine = "DemoCharge_Remote_Mag";
			count = 8;
		};
		class _xx_DSatchelCharge_Remote_Mag
		{
			magazine = "SatchelCharge_Remote_Mag";
			count = 4;
		};
		class _xx_Laserbatteries
		{
			magazine = "Laserbatteries";
			count = 4;
		};
	};
	class TransportItems
	{
		class _xx_CUP_muzzle_snds_AWM
		{
			name = "CUP_muzzle_snds_AWM";
			count =2;
		};
		class _xx_optic_AMS
		{
			name = "optic_AMS";
			count = 4;
		};
		class _xx_ACE_CableTie
		{
			name = "ACE_CableTie";
			count = 8;
		};
		class _xx_CAF_Axe
		{
			name = "CAF_Axe";
			count = 2;
		};
		class _xx_ACE_RangeCard
		{
			name = "ACE_RangeCard";
			count = 4;
		};
		class _xx_optic_Nightstalker
		{
			name = "optic_Nightstalker";
			count = 4;
		};
		class _xx_optic_tws
		{
			name = "optic_tws";
			count = 4;
		};
		class _xx_muzzle_snds_m
		{
			name = "muzzle_snds_m";
			count = 4;
		};
		class _xx_B_UavTerminal
		{
			name = "B_UavTerminal";
			count = 2;
		};
		class _xx_V_RebreatherB
		{
			name = "V_RebreatherB";
			count = 4;
		};
		class _xx_U_B_Wetsuit
		{
			name = "U_B_Wetsuit";
			count = 4;
		};
		class _xx_G_B_Diving
		{
			name = "G_B_Diving";
			count = 4;
		};
	};
	class TransportBackpacks
	{
		class _xx_B_Parachute
		{
			backpack = "B_Parachute";
			count = 4;
		};
		class _xx_tf_rt1523g_CAF
		{
			backpack = "tf_rt1523g_CAF";
			count = 4;
		};
		class _xx_B_CAF_Rucksack
		{
			backpack = "B_CAF_Rucksack";
			count = 4;
		};
		class _xx_B_UAV_01_backpack_F
		{
			backpack = "B_UAV_01_backpack_F";
			count = 4;
		};
	};
	};
	
	class CAF_footlocker : CAF_Box_Base {
		ace_cargo_hasCargo = 0;
		ace_cargo_canLoad = 0;
		ace_dragging_canDrag = 0;
		ace_dragging_canCarry = 0;
		scopeCurator = 2;
		model = "\A3\Supplies_F_Exp\Ammoboxes\Equipment_Box_F.p3d";
		hiddenSelections[] = {"camo","camo_signs"};
		hiddenSelectionsTextures[] = {"\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_blufor_co.paa","\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_blufor_ca.paa"};
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Box_NATO_Equip_F.jpg";
		_generalMacro = "Box_NATO_Equip_F";
		icon = "\A3\Supplies_F_Exp\Ammoboxes\Data\UI\icon_equipment_box_ca.paa";
		scope = 2;
		faction = "CAF_TW";
		displayName = "Foot Locker";
		transportMaxWeapons = 0;
		transportMaxMagazines = 0;
		transportMaxBackpacks = 20;
		transportMaxItems = 0;
		class TransportMagazines{};
		class TransportItems{};
		class TransportWeapons{};
		class TransportBackpacks{};
	};
	class B_supplyCrate_F;
	class CAF_parachuteBox : B_supplyCrate_F {
		ace_cargo_hasCargo = 0;
		ace_cargo_canLoad = 0;
		ace_dragging_canDrag = 0;
		ace_dragging_canCarry = 0;
		
		faction = "CAF_TW";
		displayName = "Parachute Box";
		transportMaxWeapons = 0;
		transportMaxMagazines = 0;
		transportMaxBackpacks = 20;
		transportMaxItems = 0;
		class TransportMagazines{};
		class TransportItems{};
		class TransportWeapons{};
		class TransportBackpacks{};
	};

	class Land_Cargo20_military_green_F;
	class CAF_cargo_spawner : Land_Cargo20_military_green_F
	{
		ace_cargo_hasCargo = 0;
		ace_cargo_space = 0; 
		ace_cargo_canLoad = 0;
		scope=2;
		scopeCurator=2;
		displayName="Cargo Spawner";
		
	};
	class Land_Cargo10_military_green_F;
	class CAF_load_pallet : Land_Cargo10_military_green_F {
		ace_cargo_canLoad = 1;
        ace_cargo_size = 5; 
		ace_cargo_hasCargo = 1;
		ace_cargo_space = 20; 
		scope=2;
		scopeCurator=2;
		displayName="Sling Load Pallet";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_CO.paa","\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa"};
		icon = "iconObject_1x1";
		mapSize = 1.65;
		model = "\A3\Supplies_F_Heli\CargoNets\CargoNet_01_ammo_F.p3d";
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		transportMaxWeapons = 0;
		transportMaxMagazines = 0;
		transportMaxBackpacks = 0;
		transportMaxItems = 0;
		class TransportMagazines{};
		class TransportItems{};
		class TransportWeapons{};
		class TransportBackpacks {};
	};
	
	
	class CAF_Bandage_Box: CAF_Box_Base
	{
		ace_cargo_canLoad = 1;
        ace_cargo_size = 2; 
		author="$STR_A3_Bohemia_Interactive";
		mapSize=2.3399999;
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_WpsSpecial_F.jpg";
		_generalMacro="Box_NATO_WpsSpecial_F";
		scope=2;
		displayName="Bandage Box";
		model="\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";
		icon="iconCrateLarge";
		maximumLoad=3000;
		hiddenSelectionsTextures[]=
		{
			"\caf_cef\data\sign_bandages_ca.paa",
			"A3\Weapons_F\Ammoboxes\data\ammobox_haf_co.paa"
		};
		class TransportMagazines
		{
		
		};
		class TransportWeapons
		{
		
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
		};
	};
	class CAF_MedSupplies_Box: CAF_Box_Base
	{
		ace_cargo_canLoad = 1;
        ace_cargo_size = 2; 
		author="$STR_A3_Bohemia_Interactive";
		mapSize=1.8099999;
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Wps_F.jpg";
		_generalMacro="Box_NATO_Wps_F";
		scope=2;
		displayName="Medical Supplies";
		model="\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		icon="iconCrateWpns";
		hiddenSelectionsTextures[]=
		{
			"caf_cef\data\sign_medical_ca.paa",
			"A3\Weapons_F\Ammoboxes\data\ammobox_haf_co.paa"
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
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
		};
	};
	
	class CAF_Etool_Box: CAF_Box_Base
	{
		ace_cargo_canLoad = 1;
        ace_cargo_size = 1; 
		author="$STR_A3_Bohemia_Interactive";
		
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Support_F.jpg";
		_generalMacro = "Box_NATO_Support_F";
		scope=2;
		displayName="ETool";
		model="\A3\weapons_F\AmmoBoxes\AmmoBox_F";
		icon = "iconCrateSupp";
		maximumLoad=500;
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
			class _xx_ACE_EntrenchingTool
			{
				name = "ACE_EntrenchingTool";
				count = 50;
			};
		};
		class AnimationSources
		{
			class Ammo_source
			{
				source = "user";
				initPhase = 1;
				animPeriod = 1;
			};
			class AmmoOrd_source
			{
				source = "user";
				initPhase = 1;
				animPeriod = 1;
			};
			class Grenades_source
			{
				source = "user";
				initPhase = 1;
				animPeriod = 1;
			};
			class Support_source
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
			};
		};
	};