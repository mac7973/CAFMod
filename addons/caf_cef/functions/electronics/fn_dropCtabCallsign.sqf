//fn_setCtabCallsign

_unit = _this select 0;

_available = missionNameSpace getVariable ["cafInUse",[]];



_oldID = groupId (group _unit);
(group _unit) setGroupIdGlobal ["Unassigned"];
_inUseList = _available - [_oldID];
missionNameSpace setVariable ["cafInUse",_inUseList];
systemChat "Callsign has been dropped";

