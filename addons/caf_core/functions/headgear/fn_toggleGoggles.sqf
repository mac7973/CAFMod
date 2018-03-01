_unit = _this select 0;
_task = _this select 1;

_headgear = headgear _unit;

if (_task == 0) then {
	//TW
	if (_headgear == "H_CAF_CG634_TW_G_U") then {
		_unit addHeadgear "H_CAF_CG634_TW_G_D";
		_unit linkItem "H_CAF_CG634_TW_G_D";
		};
	if (_headgear == "H_CAF_CG634_NET_TW_G_U") then {
		_unit addHeadgear "H_CAF_CG634_NET_TW_G_D";
		_unit linkItem "H_CAF_CG634_NET_TW_G_D";
		};
	if (_headgear == "H_CAF_CG634_SCRIM_TW_G_U") then {
	_unit addHeadgear "H_CAF_CG634_SCRIM_TW_G_D";
	_unit linkItem "H_CAF_CG634_SCRIM_TW_G_D";
	};
	//AR
	if (_headgear == "H_CAF_CG634_AR_G_U") then {
		_unit addHeadgear "H_CAF_CG634_TW_G_D";
		_unit linkItem "H_CAF_CG634_TW_G_D";
		};
	if (_headgear == "H_CAF_CG634_NET_AR_G_U") then {
		_unit addHeadgear "H_CAF_CG634_NET_AR_G_D";
		_unit linkItem "H_CAF_CG634_NET_AR_G_D";
		};
	if (_headgear == "H_CAF_CG634_SCRIM_AR_G_U") then {
	_unit addHeadgear "H_CAF_CG634_SCRIM_AR_G_D";
	_unit linkItem "H_CAF_CG634_SCRIM_AR_G_D";
	};
	//AC
	if (_headgear == "H_CAF_CG634_AC_G_U") then {
		_unit addHeadgear "H_CAF_CG634_AC_G_D";
		_unit linkItem "H_CAF_CG634_AC_G_D";
		};
	if (_headgear == "H_CAF_CG634_NET_AC_G_U") then {
		_unit addHeadgear "H_CAF_CG634_NET_AC_G_D";
		_unit linkItem "H_CAF_CG634_NET_AC_G_D";
		};
	if (_headgear == "H_CAF_CG634_SCRIM_AC_G_U") then {
	_unit addHeadgear "H_CAF_CG634_SCRIM_AC_G_D";
	_unit linkItem "H_CAF_CG634_SCRIM_AC_G_D";
	};
};

if (_task == 1) then {
	//TW
	if (_headgear == "H_CAF_CG634_TW_G_D") then {
		_unit addHeadgear "H_CAF_CG634_TW_G_U";
		_unit linkItem "H_CAF_CG634_TW_G_U";
		};
	if (_headgear == "H_CAF_CG634_NET_TW_G_D") then {
		_unit addHeadgear "H_CAF_CG634_NET_TW_G_U";
		_unit linkItem "H_CAF_CG634_NET_TW_G_U";
		};
	if (_headgear == "H_CAF_CG634_SCRIM_TW_G_D") then {
	_unit addHeadgear "H_CAF_CG634_SCRIM_TW_G_U";
	_unit linkItem "H_CAF_CG634_SCRIM_TW_G_U";
	};
	//AR
	if (_headgear == "H_CAF_CG634_AR_G_D") then {
		_unit addHeadgear "H_CAF_CG634_TW_G_U";
		_unit linkItem "H_CAF_CG634_TW_G_U";
		};
	if (_headgear == "H_CAF_CG634_NET_AR_G_D") then {
		_unit addHeadgear "H_CAF_CG634_NET_AR_G_U";
		_unit linkItem "H_CAF_CG634_NET_AR_G_U";
		};
	if (_headgear == "H_CAF_CG634_SCRIM_AR_G_D") then {
	_unit addHeadgear "H_CAF_CG634_SCRIM_AR_G_U";
	_unit linkItem "H_CAF_CG634_SCRIM_AR_G_U";
	};
	//AC
	if (_headgear == "H_CAF_CG634_AC_G_D") then {
		_unit addHeadgear "H_CAF_CG634_AC_G_U";
		_unit linkItem "H_CAF_CG634_AC_G_U";
		};
	if (_headgear == "H_CAF_CG634_NET_AC_G_D") then {
		_unit addHeadgear "H_CAF_CG634_NET_AC_G_U";
		_unit linkItem "H_CAF_CG634_NET_AC_G_U";
		};
	if (_headgear == "H_CAF_CG634_SCRIM_AC_G_D") then {
	_unit addHeadgear "H_CAF_CG634_SCRIM_AC_G_U";
	_unit linkItem "H_CAF_CG634_SCRIM_AC_G_U";
	};
};