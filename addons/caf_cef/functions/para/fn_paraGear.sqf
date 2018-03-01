_unit = _this select 0;

if (backpack _unit != "") then {
	[_unit] call zade_boc_fnc_actionOnChest;
};

_unit addBackpackGlobal "CAF_parachute";

