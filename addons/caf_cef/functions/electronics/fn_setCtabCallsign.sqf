//fn_setCtabCallsign

_callSign = _this select 0;

_available = missionNameSpace getVariable ["cafInUse",[]];

if !(_callsign in _available) then {

	_oldID = (group _unit);
	(group _unit) setGroupIdGlobal [_callsign];
	_inUseList = _available + [_callSign] - _oldID;
	missionNameSpace setVariable ["cafInUse",_inUseList];
	
} else {

	systemChat "Selected Value is Unavailable";
	
};