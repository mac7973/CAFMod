_container = _this select 0;
_box = _this select 1;

_crate = _box createVehicle [0,0,0];

_crate allowDamage false;

if (_crate isKindOf "CAF_load_pallet") then {
_crate attachTo [_container,[-5,0,0]];
detach _crate;
} else {
_crate attachTo [_container,[-8,0,0]];
detach _crate;
};