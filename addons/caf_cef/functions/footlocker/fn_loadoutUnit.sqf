_unit = _this select 0;
_role = _this select 1;
_type = _this select 2;

	switch (_role) do {
		case "Rifleman" : {

			_unit addVest "V_CAF_rifleman_TW";
			for "_i" from 1 to 4 do {_unit addItemToVest "ACE_CableTie";};
			for "_i" from 1 to 12 do {_unit addItemToVest "30Rnd_556x45_Stanag_red";};
			for "_i" from 1 to 4 do {_unit addItemToVest "CAF_C13";};
			for "_i" from 1 to 2 do {_unit addItemToVest "SmokeShell";};

			

			_unit addWeapon "caf_C7A2";
			_unit addPrimaryWeaponItem "acc_pointer_IR";
			_unit addPrimaryWeaponItem "optic_elcan";
			
			_unit linkItem "tf_rf7800str";
			
			switch (_type) do {
				
				case "24" : {
					
				};
				case "48" : {
					
				};
			};
		};

		case "Grenadier" : {

			_unit addVest "V_CAF_grenadier_TW";
			for "_i" from 1 to 4 do {_unit addItemToVest "ACE_CableTie";};
			for "_i" from 1 to 10 do {_unit addItemToVest "30Rnd_556x45_Stanag_red";};
			for "_i" from 1 to 12 do {_unit addItemToVest "1Rnd_HE_Grenade_shell";};
			for "_i" from 1 to 2 do {_unit addItemToVest "CAF_C13";};
			for "_i" from 1 to 2 do {_unit addItemToVest "SmokeShell";};

			

			_unit addWeapon "caf_C7A2_M203";
			_unit addPrimaryWeaponItem "acc_pointer_IR";
			_unit addPrimaryWeaponItem "optic_elcan";

			_unit linkItem "tf_rf7800str";
			
			switch (_type) do {
				
				case "24" : {
					
				};
				case "48" : {
					
				};
			};
		};
		
		case "GPMG" : {
			_unit addVest "V_CAF_riflemanLeg_TW";
			for "_i" from 1 to 4 do {_unit addItemToVest "ACE_CableTie";};
			for "_i" from 1 to 2 do {_unit addItemToVest "13Rnd_9x19_BHP";};
			for "_i" from 1 to 4 do {_unit addItemToVest "CAF_C13";};
			for "_i" from 1 to 2 do {_unit addItemToVest "SmokeShell";};
			for "_i" from 1 to 2 do {_unit addItemToVest "220Rnd_762x51_Box";};
			
			_unit addWeapon "C6GPMG";
			
			_unit addItemToVest "220Rnd_762x51_Box";
			
			_unit addWeapon "caf_BHP";
			_unit linkItem "tf_rf7800str";
			
			switch (_type) do {
				
				case "24" : {
					
				};
				case "48" : {
					_unit addBackpack "B_caf_AssaultPack_TW";
					for "_i" from 1 to 2 do {_unit addItemToBackpack "220Rnd_762x51_Box";};
				};
			};
		};

		case "C9Gunner" : {
			_unit addVest "V_CAF_rifleman_TW";
			for "_i" from 1 to 2 do {_unit addItemToVest "ACE_CableTie";};
			for "_i" from 1 to 2 do {_unit addItemToVest "CAF_C13";};
			for "_i" from 1 to 2 do {_unit addItemToVest "SmokeShell";};
			for "_i" from 1 to 3 do {_unit addItemToVest "200Rnd_556x45_Box_Red_F";};
			

			_unit addWeapon "CAF_C9A2";
			_unit addPrimaryWeaponItem "acc_pointer_IR";
			_unit addPrimaryWeaponItem "optic_elcan";
		
			_unit linkItem "tf_rf7800str";
			
			switch (_type) do {
				
				case "24" : {
					
				};
				case "48" : {
					_unit addBackpack "B_caf_AssaultPack_TW";
					for "_i" from 1 to 2 do {_unit addItemToBackpack "200Rnd_556x45_Box_Red_F";};
				};
			};
		};

		case "Medic" : {
			_unit addVest "V_CAF_medic_TW";
			_unit addItemToVest "ACE_IR_Strobe_Item";

			for "_i" from 1 to 10 do {_unit addItemToVest "30Rnd_556x45_Stanag_red";};
			for "_i" from 1 to 4 do {_unit addItemToVest "CAF_C13";};
			for "_i" from 1 to 4 do {_unit addItemToVest "SmokeShellPurple";};
			for "_i" from 1 to 2 do {_unit addItemToVest "SmokeShell";};

			
			_unit addWeapon "Binocular";
			_unit addWeapon "caf_C8A3";
			_unit addPrimaryWeaponItem "acc_pointer_IR";
			_unit addPrimaryWeaponItem "optic_elcan";

			_unit linkItem "tf_anprc152";
			_unit linkItem "ItemAndroid";
			_unit setVariable ["ace_medical_medicClass",2,true];
			_unit setUnitTrait ["Medic",true];

			switch (_type) do {
				
				case "24" : {
					_unit addBackpack "B_CAF_Carryall_Medical_TW";
					for "_i" from 1 to 20 do {_unit addItemToBackpack "ACE_fieldDressing";};
					for "_i" from 1 to 20 do {_unit addItemToBackpack "ACE_elasticBandage";};
					for "_i" from 1 to 20 do {_unit addItemToBackpack "ACE_quikclot";};
					for "_i" from 1 to 10 do {_unit addItemToBackpack "ACE_epinephrine";};
					for "_i" from 1 to 36 do {_unit addItemToBackpack "ACE_packingBandage";};
					for "_i" from 1 to 10 do {_unit addItemToBackpack "ACE_morphine";};
					for "_i" from 1 to 6 do {_unit addItemToBackpack "ACE_salineIV_500";};
					for "_i" from 1 to 4 do {_unit addItemToBackpack "ACE_salineIV_250";};
					for "_i" from 1 to 4 do {_unit addItemToBackpack "ACE_tourniquet";};
					for "_i" from 1 to 2 do {_unit addItemToBackpack "ACE_personalAidKit";};
					for "_i" from 1 to 10 do {_unit addItemToBackpack "ACE_adenosine";};
					for "_i" from 1 to 10 do {_unit addItemToBackpack "ACE_atropine";};
					for "_i" from 1 to 4 do {_unit addItemToBackpack "ACE_salineIV";};
					for "_i" from 1 to 4 do {_unit addItemToBackpack "SmokeShellBlue";};

					_unit addItemToBackpack "adv_aceCPR_AED";
					_unit addItemToBackpack "ACE_surgicalKit";

				};
				case "48" : {
					_unit addBackpack "B_CAF_Carryall_Medical_TW";
					for "_i" from 1 to 20 do {_unit addItemToBackpack "ACE_fieldDressing";};
					for "_i" from 1 to 20 do {_unit addItemToBackpack "ACE_elasticBandage";};
					for "_i" from 1 to 20 do {_unit addItemToBackpack "ACE_quikclot";};
					for "_i" from 1 to 10 do {_unit addItemToBackpack "ACE_epinephrine";};
					for "_i" from 1 to 36 do {_unit addItemToBackpack "ACE_packingBandage";};
					for "_i" from 1 to 10 do {_unit addItemToBackpack "ACE_morphine";};
					for "_i" from 1 to 6 do {_unit addItemToBackpack "ACE_salineIV_500";};
					for "_i" from 1 to 4 do {_unit addItemToBackpack "ACE_salineIV_250";};
					for "_i" from 1 to 4 do {_unit addItemToBackpack "ACE_tourniquet";};
					for "_i" from 1 to 2 do {_unit addItemToBackpack "ACE_personalAidKit";};
					for "_i" from 1 to 10 do {_unit addItemToBackpack "ACE_adenosine";};
					for "_i" from 1 to 10 do {_unit addItemToBackpack "ACE_atropine";};
					for "_i" from 1 to 4 do {_unit addItemToBackpack "ACE_salineIV";};
					for "_i" from 1 to 4 do {_unit addItemToBackpack "SmokeShellBlue";};

					_unit addItemToBackpack "adv_aceCPR_AED";
					_unit addItemToBackpack "ACE_surgicalKit";
				};
			};
		};
		
		case "SectIC" : {
			_unit removeItem "ACE_salineIV_500";
			_unit addVest "V_CAF_riflemanLeg_TW";
			for "_i" from 1 to 4 do {_unit addItemToVest "ACE_CableTie";};

			_unit addItemToVest "ACE_DefusalKit";
			_unit addItemToVest "ACE_Clacker";
			_unit addItemToVest "ACE_IR_Strobe_Item";
			_unit addItemToUniform "ItemcTabHCam";
			_unit addItemToVest "ACE_salineIV_500";
			for "_i" from 1 to 10 do {_unit addItemToVest "30Rnd_556x45_Stanag_red";};
			for "_i" from 1 to 2 do {_unit addItemToVest "13Rnd_9x19_BHP";};
			for "_i" from 1 to 2 do {_unit addItemToVest "SmokeShellBlue";};
			for "_i" from 1 to 2 do {_unit addItemToVest "SmokeShell";};
			for "_i" from 1 to 1 do {_unit addItemToVest "LaserBatteries";};
			for "_i" from 1 to 2 do {_unit addItemToVest "CAF_C13";};

			
			_unit addWeapon "caf_C7A2";
			_unit addPrimaryWeaponItem "acc_pointer_IR";
			_unit addPrimaryWeaponItem "optic_elcan";
			_unit addWeapon "caf_BHP";
			_unit addWeapon "Laserdesignator_01_khk_F";
			_unit linkItem "tf_anprc152";
			_unit linkItem "ItemAndroid";
			switch (_type) do {
				
				case "24" : {
					_unit addBackpack "B_caf_AssaultPack_TW";
					_unit addItemToBackpack "ACE_wirecutter";
					_unit addItemToBackpack "ACE_EntrenchingTool";

				};
				case "48" : {
					_unit addBackpack "B_caf_AssaultPack_TW";
					_unit addItemToBackpack "ACE_wirecutter";
					_unit addItemToBackpack "ACE_EntrenchingTool";

				};
			};
		};
		
		case "Sect2IC" : {
			_unit addVest "V_CAF_rifleman_TW";
			for "_i" from 1 to 4 do {_unit addItemToVest "ACE_CableTie";};
			_unit addItemToVest "ACE_DefusalKit";
			_unit addItemToVest "ACE_Clacker";
			for "_i" from 1 to 10 do {_unit addItemToVest "30Rnd_556x45_Stanag_red";};
			for "_i" from 1 to 4 do {_unit addItemToVest "SmokeShell";};
			for "_i" from 1 to 4 do {_unit addItemToVest "CAF_C13";};

			
			_unit addWeapon "caf_C7A2";
			_unit addPrimaryWeaponItem "acc_pointer_IR";
			_unit addPrimaryWeaponItem "optic_elcan";
			_unit linkItem "tf_anprc152";

			switch (_type) do {
				
				case "24" : {
					_unit addBackpack "B_caf_AssaultPack_TW";
					for "_i" from 1 to 3 do {_unit addItemToBackpack "200Rnd_556x45_Box_Tracer_Red_F";};
					_unit addItemToBackpack "ACE_wirecutter";
					_unit addItemToBackpack "ACE_EntrenchingTool";

				};
				case "48" : {
					_unit addBackpack "B_caf_AssaultPack_TW";
					for "_i" from 1 to 3 do {_unit addItemToBackpack "200Rnd_556x45_Box_Tracer_Red_F";};
					_unit addItemToBackpack "ACE_wirecutter";
					_unit addItemToBackpack "ACE_EntrenchingTool";

				};
			};
		};
		
		case "TrpLdr" : {
			_unit addVest "V_CAF_officerLeg_TW";

			_unit addItemToVest "ACE_IR_Strobe_Item";
			_unit addItemToVest "ACE_Flashlight_XL50";

			for "_i" from 1 to 10 do {_unit addItemToVest "30Rnd_556x45_Stanag_red";};
			for "_i" from 1 to 2 do {_unit addItemToVest "13Rnd_9x19_BHP";};
			for "_i" from 1 to 2 do {_unit addItemToVest "SmokeShell";};
			for "_i" from 1 to 4 do {_unit addItemToVest "CAF_C13";};

			_unit addItemToVest "Laserbatteries";
			
			_unit addWeapon "caf_C8A3";
			_unit addPrimaryWeaponItem "acc_pointer_IR";
			_unit addPrimaryWeaponItem "optic_elcan";
			_unit addWeapon "caf_BHP";
			_unit addWeapon "Laserdesignator_01_khk_F";
			_unit linkItem "tf_anprc152";
			_unit linkItem "ItemcTab";
			
			switch (_type) do {
				
				case "24" : {
					_unit addBackpack "B_caf_falconIII";
					for "_i" from 1 to 3 do {_unit addItemToBackpack "SmokeShellBlue";};
					for "_i" from 1 to 3 do {_unit addItemToBackpack "SmokeShellGreen";};
					for "_i" from 1 to 3 do {_unit addItemToBackpack "SmokeShellOrange";};
					for "_i" from 1 to 3 do {_unit addItemToBackpack "SmokeShellPurple";};
					for "_i" from 1 to 3 do {_unit addItemToBackpack "SmokeShellRed";};
					for "_i" from 1 to 3 do {_unit addItemToBackpack "SmokeShellYellow";};			
	
				};
				case "48" : {
					_unit addBackpack "B_caf_falconIII";
					for "_i" from 1 to 3 do {_unit addItemToBackpack "SmokeShellBlue";};
					for "_i" from 1 to 3 do {_unit addItemToBackpack "SmokeShellGreen";};
					for "_i" from 1 to 3 do {_unit addItemToBackpack "SmokeShellOrange";};
					for "_i" from 1 to 3 do {_unit addItemToBackpack "SmokeShellPurple";};
					for "_i" from 1 to 3 do {_unit addItemToBackpack "SmokeShellRed";};
					for "_i" from 1 to 3 do {_unit addItemToBackpack "SmokeShellYellow";};	
				};
			};
		};
		
		case "Trp2IC" : {
			_unit addVest "V_CAF_officer_TW";
			for "_i" from 1 to 4 do {_unit addItemToVest "ACE_CableTie";};
			_unit addItemToVest "ACE_DefusalKit";
			_unit addItemToVest "ACE_IR_Strobe_Item";
			_unit addItemToVest "ACE_Clacker";
			_unit addItemToUniform "ItemcTabHCam";
			for "_i" from 1 to 10 do {_unit addItemToVest "30Rnd_556x45_Stanag_red";};
			for "_i" from 1 to 4 do {_unit addItemToVest "CAF_C13";};
			for "_i" from 1 to 2 do {_unit addItemToVest "SmokeShell";};
			for "_i" from 1 to 4 do {_unit addItemToVest "SmokeShellBlue";};
			for "_i" from 1 to 2 do {_unit addItemToVest "SmokeShellPurple";};
			
			_unit addWeapon "caf_C7A2_e";
			_unit addPrimaryWeaponItem "acc_pointer_IR";
			_unit addPrimaryWeaponItem "optic_elcan";
			_unit addWeapon "Laserdesignator_01_khk_F";
			_unit linkItem "tf_rf7800str";
			_unit linkItem "ItemcTab";
			_unit addItemToVest "Laserbatteries";
			switch (_type) do {
				
				case "24" : {
					_unit addBackpack "B_caf_falconIII";	
				};
				case "48" : {
					_unit addBackpack "B_caf_falconIII";	
				};
			};
		};
		
		case "WDCdr" : {
			_unit addVest "V_CAF_riflemanLeg_TW";
			_unit addItemToVest "Laserbatteries";
			for "_i" from 1 to 2 do {_unit addItemToVest "13Rnd_9x19_BHP";};
			for "_i" from 1 to 10 do {_unit addItemToVest "30Rnd_556x45_Stanag_red";};
			for "_i" from 1 to 4 do {_unit addItemToVest "SmokeShellBlue";};
			for "_i" from 1 to 2 do {_unit addItemToVest "SmokeShell";};
			for "_i" from 1 to 2 do {_unit addItemToVest "SmokeShellPurple";};
			for "_i" from 1 to 2 do {_unit addItemToVest "30Rnd_556x45_Stanag_red";};
					
			_unit addWeapon "caf_C8A3_e";
			_unit addPrimaryWeaponItem "acc_pointer_IR";
			_unit addPrimaryWeaponItem "optic_elcan";
			_unit addWeapon "Laserdesignator_01_khk_F";
			_unit addWeapon "caf_BHP";	
			_unit linkItem "tf_anprc152";
			_unit linkItem "ItemAndroid";
			
			switch (_type) do {
				
				case "HEDP" : {
					_unit addBackpack "B_caf_AssaultPack_TW";
					for "_i" from 1 to 2 do {_unit addItemToBackpack "FFV441_HEDP";};
				};
				case "HEAT" : {
					_unit addBackpack "B_caf_AssaultPack_TW";
					for "_i" from 1 to 2 do {_unit addItemToBackpack "FFV551_HEAT";};
				};
				case "BOTH" : {
					_unit addBackpack "B_caf_AssaultPack_TW";
					_unit addItemToBackpack "FFV551_HEAT";
					_unit addItemToBackpack "FFV441_HEDP";
				};
				case "C6" : {
					_unit addBackpack "B_caf_AssaultPack_TW";
					for "_i" from 1 to 2 do {_unit addItemToBackpack "220Rnd_762x51_Box";};
				};
			};
		};
		
		case "84Gnr" : {
			_unit addVest "V_CAF_rifleman_TW";
			for "_i" from 1 to 10 do {_unit addItemToVest "30Rnd_556x45_Stanag_red";};
			for "_i" from 1 to 4 do {_unit addItemToVest "SmokeShellBlue";};
			for "_i" from 1 to 2 do {_unit addItemToVest "SmokeShell";};
			for "_i" from 1 to 2 do {_unit addItemToVest "SmokeShellPurple";};
						
			_unit addWeapon "caf_C7A2_e";
			_unit addPrimaryWeaponItem "acc_pointer_IR";
			_unit addPrimaryWeaponItem "optic_elcan";
			_unit addWeapon "CAF_M3CG";
			_unit linkItem "tf_rf7800str";	
			
			switch (_type) do {
				
				case "HEDP" : {
					_unit addBackpack "B_caf_AssaultPack_TW";
					for "_i" from 1 to 2 do {_unit addItemToBackpack "FFV441_HEDP";};
				};
				case "HEAT" : {
					_unit addBackpack "B_caf_AssaultPack_TW";
					for "_i" from 1 to 2 do {_unit addItemToBackpack "FFV551_HEAT";};
				};
				case "BOTH" : {
					_unit addBackpack "B_caf_AssaultPack_TW";
					_unit addItemToBackpack "FFV551_HEAT";
					_unit addItemToBackpack "FFV441_HEDP";
				};
			};
		};
		
		case "84Ldr" : {
			_unit addVest "V_CAF_rifleman_TW";
			for "_i" from 1 to 10 do {_unit addItemToVest "30Rnd_556x45_Stanag_red";};
			for "_i" from 1 to 4 do {_unit addItemToVest "SmokeShellBlue";};
			for "_i" from 1 to 2 do {_unit addItemToVest "SmokeShell";};
			for "_i" from 1 to 2 do {_unit addItemToVest "SmokeShellPurple";};
						
			_unit addWeapon "caf_C7A2_e";
			_unit addPrimaryWeaponItem "acc_pointer_IR";
			_unit addPrimaryWeaponItem "optic_elcan";
			_unit linkItem "tf_rf7800str";	
			
			switch (_type) do {
				
				case "HEDP" : {
					_unit addBackpack "B_caf_AssaultPack_TW";
					for "_i" from 1 to 2 do {_unit addItemToBackpack "FFV441_HEDP";};
				};
				case "HEAT" : {
					_unit addBackpack "B_caf_AssaultPack_TW";
					for "_i" from 1 to 2 do {_unit addItemToBackpack "FFV551_HEAT";};
				};
				case "BOTH" : {
					_unit addBackpack "B_caf_AssaultPack_TW";
					_unit addItemToBackpack "FFV551_HEAT";
					_unit addItemToBackpack "FFV441_HEDP";
				};
			};
		};
		
		case "fooFac" : {

			_unit addVest "V_CAF_officer_TW";
			for "_i" from 1 to 4 do {_unit addItemToVest "CAF_C13";};
			for "_i" from 1 to 2 do {_unit addItemToVest "SmokeShell";};
			for "_i" from 1 to 8 do {_unit addItemToVest "30Rnd_556x45_Stanag_red";};
			for "_i" from 1 to 2 do {_unit addItemToVest "SmokeShellGreen";};
			for "_i" from 1 to 2 do {_unit addItemToVest "SmokeShellBlue";};
			for "_i" from 1 to 2 do {_unit addItemToVest "SmokeShellOrange";};

			_unit addWeapon "caf_C8A3_e";
			_unit addPrimaryWeaponItem "acc_pointer_IR";
			_unit addPrimaryWeaponItem "optic_elcan";
			_unit addWeapon "Laserdesignator_01_khk_F";
			_unit linkItem "tf_anprc152_2";
			_unit linkItem "ItemcTab";
			_unit linkItem "caf_MNVG";
			_unit addItemToVest "Laserbatteries";

			
			switch (_type) do {
				
				case "24" : {
					_unit addBackpack "B_caf_falconIII";
					for "_i" from 1 to 2 do {_unit addItemToBackpack "SmokeShellYellow";};
					for "_i" from 1 to 3 do {_unit addItemToBackpack "SmokeShellRed";};
					for "_i" from 1 to 3 do {_unit addItemToBackpack "SmokeShellPurple";};
				};
				case "48" : {
					_unit addBackpack "B_caf_falconIII";
					for "_i" from 1 to 2 do {_unit addItemToBackpack "SmokeShellYellow";};
					for "_i" from 1 to 3 do {_unit addItemToBackpack "SmokeShellRed";};
					for "_i" from 1 to 3 do {_unit addItemToBackpack "SmokeShellPurple";};

				};
			};
		};

		case "Marksman" : {

			_unit addVest "V_CAF_riflemanLeg_TW";
			for "_i" from 1 to 2 do {_unit addItemToVest "ACE_CableTie";};
			for "_i" from 1 to 2 do {_unit addItemToVest "CAF_C13";};
			for "_i" from 1 to 2 do {_unit addItemToVest "SmokeShell";};
			for "_i" from 1 to 7 do {_unit addItemToVest "ACE_20Rnd_762x51_M118LR_Mag";};

			_unit addItemToUniform "ACE_Kestrel4500";
			_unit addItemToUniform "ACE_RangeCard";
			_unit addItemToVest "ACE_20Rnd_762x51_Mag_Tracer";
			

			_unit addWeapon "caf_m110_F";
			_unit addPrimaryWeaponItem "acc_pointer_IR";
			_unit addPrimaryWeaponItem "optic_AMS";
			_unit addPrimaryWeaponItem "bipod_01_F_blk";

			_unit addWeapon "Rangefinder";
			_unit linkItem "tf_rf7800str_1";
			_unit linkItem "ItemAndroid";
			_unit linkItem "caf_MNVG";


			
			switch (_type) do {
				
				case "24" : {
					
				};
				case "48" : {
					
				};
			};
		};

		/////RECCE/////
		case "PCom" : {
			_unit removeItem "H_CAF_Boonie_TW";
			_unit addVest "V_CAF_OfficerLeg_TW";
			for "_i" from 1 to 2 do {_unit addItemToVest "CAF_C13";};
			for "_i" from 1 to 5 do {_unit addItemToVest "30Rnd_556x45_Stanag_red";};
			for "_i" from 1 to 2 do {_unit addItemToVest "SmokeShell";};
			for "_i" from 1 to 9 do {_unit addItemToVest "1Rnd_HE_Grenade_shell";};
			_unit addItemToVest "ACE_RangeCard";
			_unit addItemToVest "ACE_IR_Strobe_Item";

			_unit addHeadgear "H_CAF_Boonie_hs_TW";

			_unit setVariable ["ace_medical_medicClass",2,true];
			_unit setUnitTrait ["Medic",true];

			_unit addWeapon "caf_c8a3_M203";
			_unit addPrimaryWeaponItem "muzzle_snds_M";
			_unit addPrimaryWeaponItem "acc_pointer_IR";
			_unit addPrimaryWeaponItem "optic_Elcan";
			_unit addWeapon "caf_BHP";
			_unit addWeapon "Laserdesignator_01_khk_F";
			_unit addItemToVest "Laserbatteries";
			_unit linkItem "ACE_Altimeter";
			_unit linkItem "tf_anprc152_2";
			_unit linkItem "ItemAndroid";
			_unit linkItem "caf_MNVG";

			switch (_type) do {
				
				case "24" : {
					_unit addBackpack "tf_rt1523g_CAF";
					_unit addItemToBackpack "ACE_surgicalKit";
					for "_i" from 1 to 3 do {_unitthis addItemToBackpack "ACE_salineIV_500";};
					for "_i" from 1 to 2 do {_unit addItemToBackpack "ACE_epinephrine";};
					for "_i" from 1 to 2 do {_unit addItemToBackpack "ACE_morphine";};
					for "_i" from 1 to 5 do {_unit addItemToBackpack "ACE_packingBandage";};
					for "_i" from 1 to 6 do {_unit addItemToBackpack "SmokeShellBlue";};
					for "_i" from 1 to 4 do {_unit addItemToBackpack "SmokeShellRed";};
					for "_i" from 1 to 4 do {_unit addItemToBackpack "SmokeShellPurple";};
					for "_i" from 1 to 5 do {_unit addItemToBackpack "30Rnd_556x45_Stanag_red";};
				};
				case "48" : {
					_unit addBackpack "tf_rt1523g_CAF";
					_unit addItemToBackpack "ACE_surgicalKit";
					for "_i" from 1 to 3 do {_unit addItemToBackpack "ACE_salineIV_500";};
					for "_i" from 1 to 2 do {_unit addItemToBackpack "ACE_epinephrine";};
					for "_i" from 1 to 2 do {_unit addItemToBackpack "ACE_morphine";};
					for "_i" from 1 to 5 do {_unit addItemToBackpack "ACE_packingBandage";};
					for "_i" from 1 to 6 do {_unit addItemToBackpack "SmokeShellBlue";};
					for "_i" from 1 to 4 do {_unit addItemToBackpack "SmokeShellRed";};
					for "_i" from 1 to 4 do {_unit addItemToBackpack "SmokeShellPurple";};
					for "_i" from 1 to 5 do {_unit addItemToBackpack "30Rnd_556x45_Stanag_red";};
				};
			};
		};

		case "Pfinder" : {
			_unit removeItem "H_CAF_Boonie_TW";
			_unit addVest "V_CAF_riflemanLeg_TW";
			for "_i" from 1 to 2 do {_unit addItemToVest "CAF_C13";};
			_unit addItemToVest "13Rnd_9x19_BHP";
			for "_i" from 1 to 6 do {_unit addItemToVest "30Rnd_556x45_Stanag_red";};
			for "_i" from 1 to 2 do {_unit addItemToVest "SmokeShell";};
			for "_i" from 1 to 10 do {_unit addItemToVest "1Rnd_HE_Grenade_shell";};

			_unit addItemToVest "ACE_RangeCard";
			_unit addItemToVest "ACE_IR_Strobe_Item";

			_unit addHeadgear "H_CAF_Boonie_hs_TW";
			_unit setVariable ["ace_medical_medicClass",2,true];
			_unit setUnitTrait ["Medic",true];

			_unit addWeapon "caf_c8a3_M203";
			_unit addPrimaryWeaponItem "muzzle_snds_M";
			_unit addPrimaryWeaponItem "acc_pointer_IR";
			_unit addPrimaryWeaponItem "optic_Elcan";
			_unit addWeapon "caf_BHP";
			_unit addWeapon "Laserdesignator_01_khk_F";
			_unit addItemToVest "Laserbatteries";
			_unit linkItem "ACE_Altimeter";
			_unit linkItem "tf_anprc152_2";
			_unit linkItem "ItemAndroid";
			_unit linkItem "caf_MNVG";

			switch (_type) do {
				
				case "24" : {
					_unit addBackpack "tf_rt1523g_CAF";
					_unit addItemToBackpack "ACE_surgicalKit";
					for "_i" from 1 to 3 do {_unit addItemToBackpack "ACE_salineIV_500";};
					for "_i" from 1 to 2 do {_unit addItemToBackpack "ACE_epinephrine";};
					for "_i" from 1 to 2 do {_unit addItemToBackpack "ACE_morphine";};
					for "_i" from 1 to 5 do {_unit addItemToBackpack "ACE_packingBandage";};
					for "_i" from 1 to 6 do {_unit addItemToBackpack "SmokeShellBlue";};
					for "_i" from 1 to 4 do {_unit addItemToBackpack "SmokeShellRed";};
					for "_i" from 1 to 4 do {_unit addItemToBackpack "SmokeShellPurple";};
					for "_i" from 1 to 5 do {_unit addItemToBackpack "30Rnd_556x45_Stanag_red";};
					for "_i" from 1 to 4 do {_unit addItemToBackpack "SmokeShellGreen";};
					_unit addItemToBackpack "CAF_Axe";

				};
				case "48" : {
					_unit addBackpack "tf_rt1523g_CAF";
					_unit addItemToBackpack "ACE_surgicalKit";
					for "_i" from 1 to 3 do {_unit addItemToBackpack "ACE_salineIV_500";};
					for "_i" from 1 to 2 do {_unit addItemToBackpack "ACE_epinephrine";};
					for "_i" from 1 to 2 do {_unit addItemToBackpack "ACE_morphine";};
					for "_i" from 1 to 5 do {_unit addItemToBackpack "ACE_packingBandage";};
					for "_i" from 1 to 6 do {_unit addItemToBackpack "SmokeShellBlue";};
					for "_i" from 1 to 4 do {_unit addItemToBackpack "SmokeShellRed";};
					for "_i" from 1 to 4 do {_unit addItemToBackpack "SmokeShellPurple";};
					for "_i" from 1 to 5 do {_unit addItemToBackpack "30Rnd_556x45_Stanag_red";};
					for "_i" from 1 to 4 do {_unit addItemToBackpack "SmokeShellGreen";};
					_unit addItemToBackpack "CAF_Axe";
				};
			};
		};
		case "UAVOp" : {
			_unit removeItem "H_CAF_Boonie_TW";
			_unit addVest "V_CAF_riflemanLeg_TW";
			for "_i" from 1 to 2 do {_unit addItemToVest "CAF_C13";};
			_unit addItemToVest "13Rnd_9x19_BHP";
			for "_i" from 1 to 6 do {_unit addItemToVest "ACE_20Rnd_762x51_M118LR_Mag";};
			for "_i" from 1 to 2 do {_unit addItemToVest "SmokeShell";};

			_unit addItemToVest "ACE_RangeCard";
			_unit addItemToVest "ACE_IR_Strobe_Item";
			_unit addItemToVest "ItemAndroid";
			_unit addHeadgear "H_CAF_Boonie_hs_TW";

			_unit setVariable ["ace_medical_medicClass",2,true];
			_unit setUnitTrait ["Medic",true];

			_unit addWeapon "caf_m110_G_F";
			_unit addPrimaryWeaponItem "muzzle_snds_B";

			_unit addPrimaryWeaponItem "acc_pointer_IR";
			_unit addPrimaryWeaponItem "optic_AMS";
			_unit addPrimaryWeaponItem "bipod_01_F_blk";
			_unit addWeapon "caf_BHP";
			_unit addWeapon "Laserdesignator_01_khk_F";
			_unit addItemToVest "Laserbatteries";
			_unit linkItem "ACE_Altimeter";
			_unit linkItem "tf_anprc152_2";
			_unit linkItem "B_UavTerminal";
			_unit linkItem "caf_MNVG";

			switch (_type) do {
				
				case "24" : {
					_unit addBackpack "B_UAV_01_backpack_F";

				};
				case "48" : {
					_unit addBackpack "B_UAV_01_backpack_F";
				};
			};
		};

		case "C9Op" : {
			_unit removeItem "H_CAF_Boonie_TW";
			_unit addVest "V_CAF_riflemanLeg_TW";
			_unit addItemToVest "ACE_surgicalKit";
			_unit addItemToVest "ACE_salineIV_500";
			for "_i" from 1 to 5 do {_unit addItemToVest "ACE_packingBandage";};
			for "_i" from 1 to 2 do {_unit addItemToVest "ACE_morphine";};
			for "_i" from 1 to 2 do {_unit addItemToVest "CAF_C13";};
			_unit addItemToVest "13Rnd_9x19_BHP";
			for "_i" from 1 to 2 do {_unit addItemToVest "SmokeShell";};
			for "_i" from 1 to 10 do {_unit addItemToVest "1Rnd_HE_Grenade_shell";};

			_unit addItemToVest "ACE_RangeCard";
			_unit addItemToVest "ACE_IR_Strobe_Item";
			_unit addHeadgear "H_CAF_Boonie_hs_TW";

			_unit addWeapon "caf_c9a2";
			_unit addPrimaryWeaponItem "acc_pointer_IR";
			_unit addPrimaryWeaponItem "optic_Elcan";
			_unit addWeapon "caf_BHP";
			_unit addWeapon "Laserdesignator_01_khk_F";
			_unit addItemToVest "Laserbatteries";
			_unit addItemToVest "ACE_surgicalKit";
			_unit setVariable ["ace_medical_medicClass",2,true];
			_unit setUnitTrait ["Medic",true];

			_unit linkItem "ACE_Altimeter";
			_unit linkItem "tf_anprc152_2";
			_unit linkItem "ItemAndroid";
			_unit linkItem "caf_MNVG";

			switch (_type) do {
				
				case "24" : {
					_unit addBackpack "B_CAF_Rucksack";
					for "_i" from 1 to 6 do {_unit addItemToBackpack "ACE_quikclot";};
					for "_i" from 1 to 6 do {_unit addItemToBackpack "ACE_packingBandage";};
					for "_i" from 1 to 2 do {_unit addItemToBackpack "ACE_salineIV_500";};
					_unit addItemToBackpack "ACE_UAVBattery";
					_unit addItemToBackpack "CAF_Axe";
					for "_i" from 1 to 6 do {_unit addItemToBackpack "200Rnd_556x45_Box_Red_F";};
					for "_i" from 1 to 6 do {_unit addItemToBackpack "CUP_20Rnd_762x51_B_M110";};
					for "_i" from 1 to 2 do {_unit addItemToBackpack "Laserbatteries";};
					for "_i" from 1 to 6 do {_unit addItemToBackpack "30Rnd_556x45_Stanag_red";};
				};
				case "48" : {
					_unit addBackpack "B_CAF_Rucksack";
					for "_i" from 1 to 6 do {_unit addItemToBackpack "ACE_quikclot";};
					for "_i" from 1 to 6 do {_unit addItemToBackpack "ACE_packingBandage";};
					for "_i" from 1 to 2 do {_unit addItemToBackpack "ACE_salineIV_500";};
					_unit addItemToBackpack "ACE_UAVBattery";
					_unit addItemToBackpack "CAF_Axe";
					for "_i" from 1 to 6 do {_unit addItemToBackpack "200Rnd_556x45_Box_Red_F";};
					for "_i" from 1 to 6 do {_unit addItemToBackpack "CUP_20Rnd_762x51_B_M110";};
					for "_i" from 1 to 2 do {_unit addItemToBackpack "Laserbatteries";};
					for "_i" from 1 to 6 do {_unit addItemToBackpack "30Rnd_556x45_Stanag_red";};
				};
			};
		};

		case "SnipOp" : {
			_unit removeItem "H_CAF_Boonie_hs_TW";
			_unit addVest "V_CAF_riflemanLeg_TW";
			_unit addItemToVest "ACE_surgicalKit";
			_unit addItemToVest "ACE_salineIV_500";
			for "_i" from 1 to 5 do {_unit addItemToVest "ACE_packingBandage";};
			for "_i" from 1 to 2 do {_unit addItemToVest "ACE_morphine";};
			for "_i" from 1 to 2 do {_unit addItemToVest "CAF_C13";};
			for "_i" from 1 to 2 do {_unit addItemToVest "SmokeShell";};
			for "_i" from 1 to 9 do {_unit addItemToVest "1Rnd_HE_Grenade_shell";};
			for "_i" from 1 to 3 do {_unit addItemToVest "30Rnd_556x45_Stanag_red";};
			_unit addItemToVest "ACE_RangeCard";
			_unit addItemToVest "ACE_IR_Strobe_Item";


			_unit addHeadgear "H_HelmetB_light_snakeskin";

			_unit addWeapon "caf_c8a3_cqb";
			_unit addPrimaryWeaponItem "muzzle_snds_M";
			_unit addPrimaryWeaponItem "acc_pointer_IR";
			_unit addPrimaryWeaponItem "optic_Elcan";
			_unit addWeapon "caf_BHP";
			_unit addWeapon "Laserdesignator_01_khk_F";



			_unit linkItem "ACE_Altimeter";
			_unit linkItem "tf_anprc152_2";
			_unit linkItem "ItemAndroid";
			_unit linkItem "caf_MNVG";

			switch (_type) do {
				
				case "24" : {
					_unit addBackpack "ace_gunbag_Tan";
				};
				case "48" : {
					_unit addBackpack "ace_gunbag_Tan";
				};
			};
		};

		case "SpotOp" : {
			_unit removeItem "H_CAF_Boonie_hs_TW";
			_unit addVest "V_CAF_riflemanLeg_TW";
			_unit addItemToVest "ACE_surgicalKit";
			_unit addItemToVest "ACE_salineIV_500";
			_unit addItemToVest "ACE_Kestrel4500";
			for "_i" from 1 to 2 do {_unit addItemToVest "CUP_HandGrenade_M67";};
			for "_i" from 1 to 5 do {_unit addItemToVest "30Rnd_556x45_Stanag_red";};
			for "_i" from 1 to 2 do {_unit addItemToVest "SmokeShell";};
			for "_i" from 1 to 9 do {_unit addItemToVest "1Rnd_HE_Grenade_shell";};


			_unit addItemToVest "ACE_RangeCard";
			_unit addItemToVest "ACE_IR_Strobe_Item";

			_unit addHeadgear "H_HelmetB_light_snakeskin";

			_unit addWeapon "caf_c8a3_M203";
			_unit addPrimaryWeaponItem "muzzle_snds_M";
			_unit addPrimaryWeaponItem "acc_pointer_IR";
			_unit addPrimaryWeaponItem "optic_DMS";
			_unit addWeapon "caf_BHP";
			_unit addWeapon "Laserdesignator_01_khk_F";




			_unit linkItem "ACE_Altimeter";
			_unit linkItem "tf_anprc152_2";
			_unit linkItem "ItemAndroid";
			_unit linkItem "caf_MNVG";

			switch (_type) do {
				
				case "24" : {
					_unit addBackpack "B_CAF_Rucksack";
					for "_i" from 1 to 3 do {_unit addItemToBackpack "ACE_salineIV_500";};
					for "_i" from 1 to 2 do {_unit addItemToBackpack "ACE_epinephrine";};
					for "_i" from 1 to 2 do {_unit addItemToBackpack "ACE_morphine";};
					for "_i" from 1 to 5 do {_unit addItemToBackpack "ACE_packingBandage";};
					for "_i" from 1 to 6 do {_unit addItemToBackpack "SmokeShellBlue";};
					for "_i" from 1 to 4 do {_unit addItemToBackpack "SmokeShellRed";};
					for "_i" from 1 to 4 do {_unit addItemToBackpack "SmokeShellPurple";};
					for "_i" from 1 to 5 do {_unit addItemToBackpack "30Rnd_556x45_Stanag_red";};
					_unit addItemToBackpack "CAF_Axe";

				};
				case "48" : {
					_unit addBackpack "B_CAF_Rucksack";
					for "_i" from 1 to 3 do {_unit addItemToBackpack "ACE_salineIV_500";};
					for "_i" from 1 to 2 do {_unit addItemToBackpack "ACE_epinephrine";};
					for "_i" from 1 to 2 do {_unit addItemToBackpack "ACE_morphine";};
					for "_i" from 1 to 5 do {_unit addItemToBackpack "ACE_packingBandage";};
					for "_i" from 1 to 6 do {_unit addItemToBackpack "SmokeShellBlue";};
					for "_i" from 1 to 4 do {_unit addItemToBackpack "SmokeShellRed";};
					for "_i" from 1 to 4 do {_unit addItemToBackpack "SmokeShellPurple";};
					for "_i" from 1 to 5 do {_unit addItemToBackpack "30Rnd_556x45_Stanag_red";};
					_unit addItemToBackpack "CAF_Axe";

				};
			};
		};
	};
	
if !(currentMuzzle _unit in (_unit getVariable ["ace_safemode_safedWeapons",[]])) then {
[_unit, currentWeapon _unit, currentMuzzle _unit] call ace_safemode_fnc_lockSafety;
};

//[_unit] call CAF_v_fnc_setVestRank;