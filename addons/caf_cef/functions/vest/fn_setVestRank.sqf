//fn_setVestRank.sqf
//if (isDedicated) exitWith {};
_unit = _this select 0;
if !(local _unit) exitWith {};
_name = toArray name _unit;   
_name resize 3;  
_ranksNCM = ["Tpr","LCp","Cpl","Sgt","SSg","WO3","WO2"];
_ranksOfficer = ["Lt ","2Lt","Cap","Maj"];
if ((toString _name == "Rct") || (!(toString _name in _ranksNCM) && !(toString _name in _ranksOfficer)) || (vest _unit == "")) exitWith {};
if (toString _name == "lt ") then {
	_name resize 2;
};
  
_rank = toString _name;
_vestType = vest _unit; 
_newVest = _vestType + "_" + _rank; 
_newItems = vestItems _unit; 
_newMags = vestMagazines _unit; 
 
removeVest _unit; 
_unit addVest _newVest; 
 
{_unit addItemToVest _x;} forEach _newItems + _newMags; 


