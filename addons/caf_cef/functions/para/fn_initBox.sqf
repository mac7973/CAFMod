_action0 = ["kitMenu","Equip Parachute","",{[_this select 1] call CAF_para_fnc_paraGear},{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions"], _action0] call ace_interact_menu_fnc_addActionToObject;
