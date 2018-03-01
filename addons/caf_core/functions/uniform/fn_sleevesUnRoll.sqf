

_unit = _this select 0;
_task = _this select 1;

_uniform = uniform _unit;
_newItems = uniformItems _unit;
_newMags = uniformMagazines _unit;
_camo = (getObjectTextures _unit) select 0;

removeUniform _unit;

_unit forceAddUniform "U_CAF_uniform1_cadpatTW";

{_unit addItemToUniform _x} forEach _newItems + _newMags;


if !(isServer) exitWith {};
_unit setObjectTextureGlobal [0,_camo];



