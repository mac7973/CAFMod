

_caller = _this select 0;

_caller removeItem "CAF_itemMineFlag"; 
_flag = "FlagSmall_F" createVehicle [getpos _caller select 0, (getpos _caller select 1) + 0.5, 0];
_flag attachTo [_caller,[0,0.5,0]];
detach _flag;