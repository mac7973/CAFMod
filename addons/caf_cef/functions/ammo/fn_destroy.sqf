_crate = _this select 0;

_action2 = ["DESTROY_CRATE", "DESTROY CRATE", "", {deleteVehicle _target;}, {true}] call ace_interact_menu_fnc_createAction; 
[_crate, 0, ["ACE_MainActions"], _action2] call ace_interact_menu_fnc_addActionToObject;
