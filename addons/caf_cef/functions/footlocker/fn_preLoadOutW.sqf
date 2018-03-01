_unit = _this select 0;
_role = _this select 1;
_type = _this select 2;
_goggles = goggles _unit;
_uniform = uniform _unit;

removeAllWeapons _unit;
removeAllItems _unit;
removeAllAssignedItems _unit;
removeVest _unit;
removeBackpack _unit;
removeHeadgear _unit;


//Verify the unit has a combat uniform

if !(_uniform in ["U_CAF_uniform1_cadpatAC","U_CAF_uniform2_cadpatAC"]) then {
	removeUniform _unit;
	_unit forceAddUniform "U_CAF_uniform1_cadpatAC";
	
	};
_unit addHeadgear "H_CAF_CG634_AC_G_U";

//Add Common Items
for "_i" from 1 to 10 do {_unit addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 10 do {_unit addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 6 do {_unit addItemToUniform "ACE_quikclot";};
for "_i" from 1 to 5 do {_unit addItemToUniform "ACE_packingBandage";};
_unit addItemToUniform "ACE_salineIV_500";
for "_i" from 1 to 2 do {_unit addItemToUniform "ACE_tourniquet";};
_unit addItemToUniform "ACE_MapTools";
_unit addItemToUniform "ACE_Flashlight_XL50";
_unit addItemToUniform "H_CAF_Boonie_TW";


_unit linkItem "ItemMap";
_unit linkItem "ItemGPS";
_unit linkItem "ItemCompass";
_unit linkItem "ItemWatch";
_unit linkItem "caf_MNVG";
	
/*
if (isMultiplayer) then {
		_name = toArray name _unit;  
		_name resize 3; 

		_ranksNCM = ["PteB","Pte","Cpl"];
		_ranksNCO = ["MCpl","Sgt","WO"];
		_ranksOfficer = ["Lt ","2Lt","Cap","Maj"];

		if ((toString _name == "PteR") || (!(toString _name in _ranksNCM) && !(toString _name in _ranksNCO) && !(toString _name in _ranksOfficer))) exitWith {};

		_subUnit = squadParams _unit select 0 select 5;
		
		switch (_subUnit) do {
			case "Canadian Expeditionary Forces" : {
				
					
			if (toString _name in _ranksNCM)  then 
			{
				_unit addItemToUniform "H_Beret_NCM";
				
			};
			if (toString _name in _ranksNCO)  then 
			{
				_unit addItemToUniform "H_Beret_NCM";
				for "_i" from 1 to 2 do {_unit addItemToUniform "ACE_morphine";};
			};
			if (toString _name in _ranksOfficer)  then 
			{
				_unit addItemToUniform "H_Beret_NCM";
				for "_i" from 1 to 2 do {_unit addItemToUniform "ACE_morphine";};
			};
		};
	};
};*/
_unit setVariable ["ace_medical_medicClass",1,true];
_unit setUnitTrait ["Medic",false];
_unit setUnitTrait ["explosiveSpecialist",true];
_unit setUnitTrait ["engineer",false];
[_unit,_role,_type] call caf_fl_fnc_loadoutUnit;
