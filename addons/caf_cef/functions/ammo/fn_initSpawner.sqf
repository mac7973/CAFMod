
_this select 0 setVariable ["ace_cargo_size", -1];

_loadpallet = ["LoadingPallet","Create Pallet","",{[_this select 0,"CAF_load_pallet"] call caf_cs_fnc_spawn},{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions"], _loadpallet] call ace_interact_menu_fnc_addActionToObject;


_mainmenu = ["MainMenu","Supplies","","",{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions"], _mainmenu] call ace_interact_menu_fnc_addActionToObject;

	//Ammunition Menu
	_submenu1 = ["Ammo","Spawn Ammo","","",{true}] call ace_interact_menu_fnc_createAction;
	[_this select 0, 0, ["ACE_MainActions","MainMenu"], _submenu1] call ace_interact_menu_fnc_addActionToObject;
	
		_crate1 = ["Ammo1","5.56 Magazines","",{[_this select 0,"CAF_556_Magazines_Box"] call caf_cs_fnc_spawn},{true}] call ace_interact_menu_fnc_createAction;
		[_this select 0, 0, ["ACE_MainActions","MainMenu","Ammo"], _crate1] call ace_interact_menu_fnc_addActionToObject;

		_crate10 = ["Ammo10","5.56 Belts","",{[_this select 0,"CAF_556_Belts_Box"] call caf_cs_fnc_spawn},{true}] call ace_interact_menu_fnc_createAction;
		[_this select 0, 0, ["ACE_MainActions","MainMenu","Ammo"], _crate2] call ace_interact_menu_fnc_addActionToObject;

		_crate2 = ["Ammo2","7.62 Belts","",{[_this select 0,"CAF_762_Belts_Box"] call caf_cs_fnc_spawn},{true}] call ace_interact_menu_fnc_createAction;
		[_this select 0, 0, ["ACE_MainActions","MainMenu","Ammo"], _crate2] call ace_interact_menu_fnc_addActionToObject;
		
		_crate3 = ["Ammo3","9mm Magazine","",{[_this select 0,"CAF_BHP_Magazines_Box"] call caf_cs_fnc_spawn},{true}] call ace_interact_menu_fnc_createAction;
		[_this select 0, 0, ["ACE_MainActions","MainMenu","Ammo"], _crate3] call ace_interact_menu_fnc_addActionToObject;
	
		_crate4 = ["Ammo4","40mm Grenades (HE)","",{[_this select 0,"CAF_40mm_HEDP_Box"] call caf_cs_fnc_spawn},{true}] call ace_interact_menu_fnc_createAction;
		[_this select 0, 0, ["ACE_MainActions","MainMenu","Ammo"], _crate4] call ace_interact_menu_fnc_addActionToObject;
	
		_crate11 = ["Ammo11","Frag Grenades","",{[_this select 0,"CAF_M67_Box"] call caf_cs_fnc_spawn},{true}] call ace_interact_menu_fnc_createAction;
		[_this select 0, 0, ["ACE_MainActions","MainMenu","Ammo"], _crate11] call ace_interact_menu_fnc_addActionToObject;
		
		_crate16 = ["Ammo12","Smoke Grenades","",{[_this select 0,"CAF_Smoke_Box"] call caf_cs_fnc_spawn},{true}] call ace_interact_menu_fnc_createAction;
		[_this select 0, 0, ["ACE_MainActions","MainMenu","Ammo"], _crate16] call ace_interact_menu_fnc_addActionToObject;
		
		_crate5 = ["Ammo5","C4 Blocks","",{[_this select 0,"CAF_C4_Box"] call caf_cs_fnc_spawn},{true}] call ace_interact_menu_fnc_createAction;
		[_this select 0, 0, ["ACE_MainActions","MainMenu","Ammo"], _crate5] call ace_interact_menu_fnc_addActionToObject;
	
		_crate6a = ["Ammo6","84mm 551","",{[_this select 0,"CAF_551_Box"] call caf_cs_fnc_spawn},{true}] call ace_interact_menu_fnc_createAction;
		[_this select 0, 0, ["ACE_MainActions","MainMenu","Ammo"], _crate6a] call ace_interact_menu_fnc_addActionToObject;
		
		_crate6b = ["Ammo7","84mm 441","",{[_this select 0,"CAF_441_Box"] call caf_cs_fnc_spawn},{true}] call ace_interact_menu_fnc_createAction;
		[_this select 0, 0, ["ACE_MainActions","MainMenu","Ammo"], _crate6b] call ace_interact_menu_fnc_addActionToObject;

		
		
		
		
	//Weapons Menu
	_submenu2 = ["Weapons","Spawn Weapons","","",{true}] call ace_interact_menu_fnc_createAction;
	[_this select 0, 0, ["ACE_MainActions","MainMenu"], _submenu2] call ace_interact_menu_fnc_addActionToObject;
	
		_crate8 = ["Weapons1","M72A6 Crate","",{[_this select 0,"CAF_M72A6_Box"] call caf_cs_fnc_spawn},{true}] call ace_interact_menu_fnc_createAction;
		[_this select 0, 0, ["ACE_MainActions","MainMenu","Weapons"], _crate8] call ace_interact_menu_fnc_addActionToObject;
	
		_crate9 = ["Weapons2","84mm MAAWS Crate","",{[_this select 0,"CAF_84mm_Box"] call caf_cs_fnc_spawn},{true}] call ace_interact_menu_fnc_createAction;
		[_this select 0, 0, ["ACE_MainActions","MainMenu","Weapons"], _crate9] call ace_interact_menu_fnc_addActionToObject;
		
		
	//Equipment Menu
	_submenu3 = ["Equipment","Spawn Equipment","","",{true}] call ace_interact_menu_fnc_createAction;
	[_this select 0, 0, ["ACE_MainActions","MainMenu"], _submenu3] call ace_interact_menu_fnc_addActionToObject;
	
		_crate12 = ["Equipment1","Bandage Box","",{[_this select 0,"CAF_Bandage_Box"] call caf_cs_fnc_spawn},{true}] call ace_interact_menu_fnc_createAction;
		[_this select 0, 0, ["ACE_MainActions","MainMenu","Equipment"], _crate12] call ace_interact_menu_fnc_addActionToObject;
		
		_crate13 = ["Equipment2","Medical Supplies","",{[_this select 0,"CAF_MedSupplies_Box"] call caf_cs_fnc_spawn},{true}] call ace_interact_menu_fnc_createAction;
		[_this select 0, 0, ["ACE_MainActions","MainMenu","Equipment"], _crate13] call ace_interact_menu_fnc_addActionToObject;
		
		_crate14 = ["Equipment3","Chemlights","",{[_this select 0,"CAF_chemlight_Box"] call caf_cs_fnc_spawn},{true}] call ace_interact_menu_fnc_createAction;
		[_this select 0, 0, ["ACE_MainActions","MainMenu","Equipment"], _crate14] call ace_interact_menu_fnc_addActionToObject;
		
		_crate15 = ["Equipment4","E-Tools","",{[_this select 0,"CAF_Etool_Box"] call caf_cs_fnc_spawn},{true}] call ace_interact_menu_fnc_createAction;
		[_this select 0, 0, ["ACE_MainActions","MainMenu","Equipment"], _crate15] call ace_interact_menu_fnc_addActionToObject;
		
		