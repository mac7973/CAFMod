_action0 = ["kitMenu","Select Loadout","","",{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions"], _action0] call ace_interact_menu_fnc_addActionToObject;

_action0W = ["kitMenuW","Select Winter Loadout","","",{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions"], _action0W] call ace_interact_menu_fnc_addActionToObject;

_M72A6 = ["M72A6","Grab M72","",{
	_this select 1 removeWeapon (secondaryWeapon _this select 1);
	_this select 1 addWeapon "CAF_M72A6";
	_this select 1 addMagazine "1Rnd_M72a6";
	},{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu"], _M72A6] call ace_interact_menu_fnc_addActionToObject;

if (isMultiplayer) then {

_PCom = ["kitpltcom2","Pathfinder Commander","",{[_this select 1,"PCom","24"] call CAF_fl_fnc_preLoadOut},{(squadParams (_this select 1) select 0 select 1 == 'Recce Det')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu"], _PCom] call ace_interact_menu_fnc_addActionToObject;

_Pfind = ["kitpltPfind","Pathfinder","",{[_this select 1,"Pfinder","24"] call CAF_fl_fnc_preLoadOut},{(squadParams (_this select 1) select 0 select 1 == 'Recce Det')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu"], _Pfind] call ace_interact_menu_fnc_addActionToObject;

_PUAV = ["kitpltUAV","UAV Operator","",{[_this select 1,"UAVOp","24"] call CAF_fl_fnc_preLoadOut},{(squadParams (_this select 1) select 0 select 1 == 'Recce Det')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu"], _PUAV] call ace_interact_menu_fnc_addActionToObject;

_PC9 = ["kitpltC9op","C9 Operator","",{[_this select 1,"C9Op","24"] call CAF_fl_fnc_preLoadOut},{(squadParams (_this select 1) select 0 select 1 == 'Recce Det')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu"], _PC9] call ace_interact_menu_fnc_addActionToObject;

_PSnip = ["kitpltSnip","Sniper","",{[_this select 1,"SnipOp","24"] call CAF_fl_fnc_preLoadOut},{(squadParams (_this select 1) select 0 select 1 == 'Recce Det')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu"], _PSnip] call ace_interact_menu_fnc_addActionToObject;

_PSpot = ["kitpltSpot","Spotter","",{[_this select 1,"SpotOp","24"] call CAF_fl_fnc_preLoadOut},{(squadParams (_this select 1) select 0 select 1 == 'Recce Det')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu"], _PSpot] call ace_interact_menu_fnc_addActionToObject;

////////////WINTER////////////////
_PComW = ["kitpltcom2W","Pathfinder Commander","",{[_this select 1,"PCom","24"] call CAF_fl_fnc_preLoadOutW},{(squadParams (_this select 1) select 0 select 1 == 'Recce Det')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenuW"], _PComW] call ace_interact_menu_fnc_addActionToObject;

_PfindW = ["kitpltPfindW","Pathfinder","",{[_this select 1,"Pfinder","24"] call CAF_fl_fnc_preLoadOutW},{(squadParams (_this select 1) select 0 select 1 == 'Recce Det')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenuW"], _PfindW] call ace_interact_menu_fnc_addActionToObject;

_PUAVW = ["kitpltUAVW","UAV Operator","",{[_this select 1,"UAVOp","24"] call CAF_fl_fnc_preLoadOutW},{(squadParams (_this select 1) select 0 select 1 == 'Recce Det')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenuW"], _PUAVW] call ace_interact_menu_fnc_addActionToObject;

_PC9W = ["kitpltC9opW","C9 Operator","",{[_this select 1,"C9Op","24"] call CAF_fl_fnc_preLoadOutW},{(squadParams (_this select 1) select 0 select 1 == 'Recce Det')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenuW"], _PC9W] call ace_interact_menu_fnc_addActionToObject;

_PSnipW = ["kitpltSnipW","Sniper","",{[_this select 1,"SnipOp","24"] call CAF_fl_fnc_preLoadOutW},{(squadParams (_this select 1) select 0 select 1 == 'Recce Det')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenuW"], _PSnipW] call ace_interact_menu_fnc_addActionToObject;

_PSpotW = ["kitpltSpotW","Spotter","",{[_this select 1,"SpotOp","24"] call CAF_fl_fnc_preLoadOutW},{(squadParams (_this select 1) select 0 select 1 == 'Recce Det')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenuW"], _PSpotW] call ace_interact_menu_fnc_addActionToObject;

} else {

_PCom = ["kitpltcom2","Pathfinder Commander","",{[_this select 1,"PCom","24"] call CAF_fl_fnc_preLoadOut},{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu"], _PCom] call ace_interact_menu_fnc_addActionToObject;

_Pfind = ["kitpltPfind","Pathfinder","",{[_this select 1,"Pfinder","24"] call CAF_fl_fnc_preLoadOut},{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu"], _Pfind] call ace_interact_menu_fnc_addActionToObject;

_PUAV = ["kitpltUAV","UAV Operator","",{[_this select 1,"UAVOp","24"] call CAF_fl_fnc_preLoadOut},{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu"], _PUAV] call ace_interact_menu_fnc_addActionToObject;

_PC9 = ["kitpltC9op","C9 Operator","",{[_this select 1,"C9Op","24"] call CAF_fl_fnc_preLoadOut},{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu"], _PC9] call ace_interact_menu_fnc_addActionToObject;

_PSnip = ["kitpltSnip","Sniper","",{[_this select 1,"SnipOp","24"] call CAF_fl_fnc_preLoadOut},{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu"], _PSnip] call ace_interact_menu_fnc_addActionToObject;

_PSpot = ["kitpltSpot","Spotter","",{[_this select 1,"SpotOp","24"] call CAF_fl_fnc_preLoadOut},{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu"], _PSpot] call ace_interact_menu_fnc_addActionToObject;

};