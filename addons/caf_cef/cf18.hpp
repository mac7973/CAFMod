    class Plane_Base_F;
	class JS_JC_FA18E: Plane_Base_F
	{
		class UserActions
		{
			class service_menu;
		};
	};
    class JS_JC_FA18F: Plane_Base_F
	{
		class UserActions
		{
			class service_menu;
		};
	};
	class CAF_CFA18E: JS_JC_FA18E
	{
        scope = 2;
		vehicleClass = "Air";
		side = 1;
		faction = "CAF_TW";
		displayName = "CF/A-18 E Super Hornet";
		crew = "JS_JC_Pilot";
		typicalCargo[] = {"JS_JC_Pilot"};


		hiddenSelections[] = {"camo_hull","camo_misc","camo_center_fueltank","camo_cockpit_1","camo_cockpit_2","camo_MFD","camo_glass","camo_ladder","burner_fire_1_left","burner_fire_1_right"};
		hiddenSelectionsTextures[] = {"\caf_cef\data\CF18E_hull_co.paa","\caf_cef\data\CF18E_misc_co.paa","","\js_jc_fa18\data\fa18_cockpit1_co.paa","\js_jc_fa18\data\fa18_cockpit2_ca.paa","\js_jc_fa18\data\fa18_mfd_co.paa","\js_jc_fa18\data\fa18_glass_ca.paa","\js_jc_fa18\data\fa18_ladder_co.paa","\js_jc_fa18\data\fa18_engine_fire_ca.paa","\js_jc_fa18\data\fa18_engine_fire_ca.paa"};
		
		class UserActions: UserActions
		{
			
			class service_menu: service_menu
			{
				displayName = "Service Menu";
				position = "pilotcontrol";
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
				radius = 5;
				condition = "((this distance (nearestObject [this, ""CAF_8x8_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and player == driver this and this animationPhase ""service_menu_switch"" < 0.5 and speed this < 1) or (this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and player == driver this and this animationPhase ""service_menu_switch"" < 0.5 and speed this < 1) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 55) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and player == driver this and this animationPhase ""service_menu_switch"" < 0.5 and speed this < 1) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 55) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and player == driver this and this animationPhase ""service_menu_switch"" < 0.5 and speed this < 1)";
				statement = "this animate [""service_menu_switch"",1]; [] spawn JS_JC_fnc_FA18_E_MAIN_UI;";
			};

		};
		class textureSources
		{
			class RCAF
			{
				displayName = "RCAF";
				author = "Ness519";
				textures[] = {"\caf_cef\data\CF18E_hull_co.paa","\caf_cef\data\CF18E_misc_co.paa"};
			};
		};
	};
	class CAF_CFA18F: JS_JC_FA18F
	{

		scope = 2;
		vehicleClass = "Air";
		side = 1;
		faction = "CAF_TW";
		displayName = "CF/A-18 F Super Hornet";
	
		crew = "JS_JC_Pilot";
		typicalCargo[] = {"JS_JC_Pilot"};
		
		hiddenSelections[] = {"camo_hull","camo_misc","camo_center_fueltank","camo_cockpit_1","camo_cockpit_2","camo_MFD","camo_glass","camo_ladder","burner_fire_1_left","burner_fire_1_right","camo_buddy_pod"};
		hiddenSelectionsTextures[] = {"\caf_cef\data\CF18E_hull_co.paa","\caf_cef\data\CF18E_misc_co.paa","","\js_jc_fa18\data\fa18_cockpit1_co.paa","\js_jc_fa18\data\fa18_cockpit2_ca.paa","\js_jc_fa18\data\fa18_mfd_co.paa","\js_jc_fa18\data\fa18_glass_ca.paa","\js_jc_fa18\data\fa18_ladder_co.paa","\js_jc_fa18\data\fa18_engine_fire_ca.paa","\js_jc_fa18\data\fa18_engine_fire_ca.paa","\js_jc_fa18\data\fa18_misc_co.paa"};
		
		class UserActions: UserActions
		{	
			class service_menu: service_menu
			{
				displayName = "Service Menu";
				position = "pilotcontrol";
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
				radius = 5;
				condition = "((this distance (nearestObject [this, ""CAF_8x8_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and player == driver this and this animationPhase ""service_menu_switch"" < 0.5 and speed this < 1) or (this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and player == driver this and this animationPhase ""service_menu_switch"" < 0.5 and speed this < 1) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 55) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and player == driver this and this animationPhase ""service_menu_switch"" < 0.5 and speed this < 1) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 55) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and player == driver this and this animationPhase ""service_menu_switch"" < 0.5 and speed this < 1)";
				statement = "this animate [""service_menu_switch"",1]; [] spawn JS_JC_fnc_FA18_F_MAIN_UI;";
			};
			
		};
		class textureSources
		{
			class RCAF
			{
				displayName = "RCAF";
				author = "Ness519";
				textures[] = {"\caf_cef\data\CF18E_hull_co.paa","\caf_cef\data\CF18E_misc_co.paa"};
			};
		};
	};