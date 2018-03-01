_tree = _this select 0;
_unit = _this select 1;
if (_unit distance2D _tree > 6) exitWith {};

_check = nearestTerrainObjects [_unit, ["BUILDING", "HOUSE", "FOREST BORDER", "FOREST TRIANGLE", "FOREST SQUARE", "CHURCH", "CHAPEL", "CROSS", "BUNKER", "FORTRESS", "FOUNTAIN", "VIEW-TOWER", "LIGHTHOUSE", "QUAY", "FUELSTATION", "HOSPITAL", "FENCE", "WALL", "HIDE", "BUSSTOP", "ROAD", "FOREST", "TRANSMITTER", "STACK", "RUIN", "TOURISM", "WATERTOWER", "TRACK", "MAIN ROAD", "ROCK", "ROCKS", "POWER LINES", "RAILWAY", "POWERSOLAR", "POWERWAVE", "POWERWIND", "SHIPWRECK", "TRAIL"], 22];

if !(_tree in _check) then {
	_tree setDamage 1;
	sleep 2;
	_tree hideObjectGlobal true; 
};