_action0 = ["kitMenu","Select Loadout","","",{true}] call ace_interact_menu_fnc_createAction;
_actionW = ["kitMenuW","Select Winter Loadout","","",{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions"], _action0] call ace_interact_menu_fnc_addActionToObject;
[_this select 0, 0, ["ACE_MainActions"], _actionW] call ace_interact_menu_fnc_addActionToObject;
_M72A6 = ["M72A6","Grab M72","",{
	_this select 1 removeWeapon (secondaryWeapon _this select 1);
	_this select 1 addWeapon "CAF_M72A6";
	_this select 1 addMagazine "1Rnd_M72a6";
	},{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu"], _M72A6] call ace_interact_menu_fnc_addActionToObject;

if (isMultiplayer) then {

_subMenu1 = ["menuLight","Light","","",{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu"], _subMenu1] call ace_interact_menu_fnc_addActionToObject;

_subMenu2 = ["menuHeavy","Heavy","","",{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu"], _subMenu2] call ace_interact_menu_fnc_addActionToObject;

_subMenu3 = ["menuSpecial","Special","","",{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu"], _subMenu3] call ace_interact_menu_fnc_addActionToObject;

////WINTER
_subMenu1W = ["menuLightW","Light","","",{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenuW"], _subMenu1W] call ace_interact_menu_fnc_addActionToObject;

_subMenu2W = ["menuHeavyW","Heavy","","",{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenuW"], _subMenu2W] call ace_interact_menu_fnc_addActionToObject;

_subMenu3W = ["menuSpecialW","Special","","",{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenuW"], _subMenu3W] call ace_interact_menu_fnc_addActionToObject;



///Light///
_rifleman1 = ["kitRifleman","Rifleman","",{[_this select 1,"Rifleman","24"] call caf_fl_fnc_preLoadOut},{(squadParams (_this select 1) select 0 select 5 == 'Canadian Expeditionary Forces')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu","menuLight"], _rifleman1] call ace_interact_menu_fnc_addActionToObject;

_grenadier1 = ["kitGrenadier2","Grenadier","",{[_this select 1,"Grenadier","24"] call caf_fl_fnc_preLoadOut},{(squadParams (_this select 1) select 0 select 5 == 'Canadian Expeditionary Forces')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu","menuLight"], _grenadier1] call ace_interact_menu_fnc_addActionToObject;

_c9 = ["kitgpmg","C9Gunner","",{[_this select 1,"C9Gunner","24"] call caf_fl_fnc_preLoadOut},{(squadParams (_this select 1) select 0 select 5 == 'Canadian Expeditionary Forces')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu","menuLight"], _c9] call ace_interact_menu_fnc_addActionToObject;

_sectionic1 = ["kitsectionic2","Section Commander","",{[_this select 1,"SectIC","24"] call caf_fl_fnc_preLoadOut},{(squadParams (_this select 1) select 0 select 5 == 'Canadian Expeditionary Forces')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu","menuLight"], _sectionic1] call ace_interact_menu_fnc_addActionToObject;

_section2ic1 = ["kitsection2ic2","Section 2IC","",{[_this select 1,"Sect2IC","24"] call caf_fl_fnc_preLoadOut},{(squadParams (_this select 1) select 0 select 5 == 'Canadian Expeditionary Forces')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu","menuLight"], _section2ic1] call ace_interact_menu_fnc_addActionToObject;

////WEP DET SPECIAL MENU///
_subMenu4 = ["menuWep84","84mm Det Loader","","",{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","menuSpecial"], _subMenu4] call ace_interact_menu_fnc_addActionToObject;

_subMenu5 = ["menuWepComm","Wep Det Commander","","",{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","menuSpecial"], _subMenu5] call ace_interact_menu_fnc_addActionToObject;


///HEAVY///
//84//
_kits84he = ["kits84he","84mm HEAT Ammo Kit","",{[_this select 1,"84Gnr","HEAT"] call caf_fl_fnc_preLoadOut},{(squadParams (_this select 1) select 0 select 1 == 'Weapons Det')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu","menuWep84"], _kits84he] call ace_interact_menu_fnc_addActionToObject;

_kits84hedp = ["kits84hedp","84mm HEDP Ammo Kit","",{[_this select 1,"84Gnr","HEDP"] call caf_fl_fnc_preLoadOut},{(squadParams (_this select 1) select 0 select 1 == 'Weapons Det')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu","menuWep84"], _kits84hedp] call ace_interact_menu_fnc_addActionToObject;

_kits84heBT = ["kits84heBT","84mm 1&1 Ammo Kit","",{[_this select 1,"84Gnr","BOTH"] call caf_fl_fnc_preLoadOut},{(squadParams (_this select 1) select 0 select 1 == 'Weapons Det')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu","menuWep84"], _kits84heBT] call ace_interact_menu_fnc_addActionToObject;

//Comm//
_kitsWComm1 = ["kitsCommhe","84mm HEAT Ammo Kit","",{[_this select 1,"WDCdr","HEAT"] call caf_fl_fnc_preLoadOut},{(squadParams (_this select 1) select 0 select 1 == 'Weapons Det')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu","menuWepComm"], _kitsWComm1] call ace_interact_menu_fnc_addActionToObject;

_kitsWComm2 = ["kitsCommhedp","84mm HEDP Ammo Kit","",{[_this select 1,"WDCdr","HEDP"] call caf_fl_fnc_preLoadOut},{(squadParams (_this select 1) select 0 select 1 == 'Weapons Det')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu","menuWepComm"], _kitsWComm2] call ace_interact_menu_fnc_addActionToObject;

_kitsWComm3 = ["kitsCommbt","84mm 1&1 Ammo Kit","",{[_this select 1,"WDCdr","BOTH"] call caf_fl_fnc_preLoadOut},{(squadParams (_this select 1) select 0 select 1 == 'Weapons Det')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu","menuWepComm"], _kitsWComm3] call ace_interact_menu_fnc_addActionToObject;

_kitsWComm4 = ["kitsCommc6","C6 Ammo Kit","",{[_this select 1,"WDCdr","C6"] call caf_fl_fnc_preLoadOut},{(squadParams (_this select 1) select 0 select 1 == 'Weapons Det')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu","menuWepComm"], _kitsWComm4] call ace_interact_menu_fnc_addActionToObject;

_sw6 = ["sw6","84mm Det Loader","",{[_this select 1,"84Ldr","24"] call caf_fl_fnc_preLoadOut},{(squadParams (_this select 1) select 0 select 1 == 'Weapons Det')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu","menuHeavy"], _sw6] call ace_interact_menu_fnc_addActionToObject;

_gpmg1 = ["kitgpmg","GPMG","",{[_this select 1,"GPMG","24"] call caf_fl_fnc_preLoadOut},{(squadParams (_this select 1) select 0 select 1 == 'Weapons Det')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu","menuHeavy"], _gpmg1] call ace_interact_menu_fnc_addActionToObject;


///SPECIAL///
_pltcom1 = ["kitpltcom2","Platoon Commander","",{[_this select 1,"TrpLdr","24"] call caf_fl_fnc_preLoadOut},{(([(squadParams (_this select 1) select 1 select 1), 0, 2] call BIS_fnc_trimString) in ["Lt ","2Lt","Cap","Maj"])}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu","menuSpecial"], _pltcom1] call ace_interact_menu_fnc_addActionToObject;

_pltcom2IC = ["kitplt2ic","Platoon Warrant","",{[_this select 1,"Trp2IC","24"] call caf_fl_fnc_preLoadOut},{(([(squadParams (_this select 1) select 1 select 1), 0, 2] call BIS_fnc_trimString) in ["Sgt","WO ","WO3","WO2"])}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu","menuSpecial"], _pltcom2IC] call ace_interact_menu_fnc_addActionToObject;

_pltmed1 = ["kitpltmed1","Troop Medic","",{[_this select 1,"Medic","48"] call caf_fl_fnc_preLoadOut},{(squadParams (_this select 1) select 1 select 5 == 'Platoon Medic')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu","menuSpecial"], _pltmed1] call ace_interact_menu_fnc_addActionToObject;

_pltfoo = ["kitfoo","FAC","",{[_this select 1,"fooFac","24"] spawn caf_fl_fnc_preLoadOut},{(squadParams (_this select 1) select 1 select 5 == 'FAC')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu","menuSpecial"], _pltfoo] call ace_interact_menu_fnc_addActionToObject;

_pltMark = ["kitmark","Marksman","",{[_this select 1,"Marksman","24"] spawn caf_fl_fnc_preLoadOut},{(squadParams (_this select 1) select 1 select 5 == 'Marksman')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu","menuSpecial"], _pltMark] call ace_interact_menu_fnc_addActionToObject;








///////////
//////////WINTER
//////////
///Light///
_rifleman1W = ["kitRiflemanW","Rifleman","",{[_this select 1,"Rifleman","24"] call caf_fl_fnc_preLoadOutW},{(squadParams (_this select 1) select 0 select 5 == 'Canadian Expeditionary Forces')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenuW","menuLightW"], _rifleman1W] call ace_interact_menu_fnc_addActionToObject;

_grenadier1W = ["kitGrenadier2W","Grenadier","",{[_this select 1,"Grenadier","24"] call caf_fl_fnc_preLoadOutW},{(squadParams (_this select 1) select 0 select 5 == 'Canadian Expeditionary Forces')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenuW","menuLightW"], _grenadier1W] call ace_interact_menu_fnc_addActionToObject;

_c9W = ["kitgpmgW","C9Gunner","",{[_this select 1,"C9Gunner","24"] call caf_fl_fnc_preLoadOutW},{(squadParams (_this select 1) select 0 select 5 == 'Canadian Expeditionary Forces')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenuW","menuLightW"], _c9W] call ace_interact_menu_fnc_addActionToObject;

_sectionic1W = ["kitsectionic2W","Section Commander","",{[_this select 1,"SectIC","24"] call caf_fl_fnc_preLoadOutW},{(squadParams (_this select 1) select 0 select 5 == 'Canadian Expeditionary Forces')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenuW","menuLightW"], _sectionic1W] call ace_interact_menu_fnc_addActionToObject;

_section2ic1W = ["kitsection2ic2W","Section 2IC","",{[_this select 1,"Sect2IC","24"] call caf_fl_fnc_preLoadOutW},{(squadParams (_this select 1) select 0 select 5 == 'Canadian Expeditionary Forces')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenuW","menuLightW"], _section2ic1W] call ace_interact_menu_fnc_addActionToObject;

////WEP DET SPECIAL MENU///
_subMenu4W = ["menuWep84W","84mm Det Loader","","",{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","menuSpecialW"], _subMenu4W] call ace_interact_menu_fnc_addActionToObject;

_subMenu5W = ["menuWepCommW","Wep Det Commander","","",{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","menuSpecialW"], _subMenu5W] call ace_interact_menu_fnc_addActionToObject;


///HEAVY///
//84//
_kits84heW = ["kits84heW","84mm HEAT Ammo Kit","",{[_this select 1,"84Gnr","HEAT"] call caf_fl_fnc_preLoadOutW},{(squadParams (_this select 1) select 0 select 1 == 'Weapons Det')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenuW","menuWep84W"], _kits84heW] call ace_interact_menu_fnc_addActionToObject;

_kits84hedpW = ["kits84hedpW","84mm HEDP Ammo Kit","",{[_this select 1,"84Gnr","HEDP"] call caf_fl_fnc_preLoadOutW},{(squadParams (_this select 1) select 0 select 1 == 'Weapons Det')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenuW","menuWep84W"], _kits84hedpW] call ace_interact_menu_fnc_addActionToObject;

_kits84heBTW = ["kits84heBTW","84mm 1&1 Ammo Kit","",{[_this select 1,"84Gnr","BOTH"] call caf_fl_fnc_preLoadOutW},{(squadParams (_this select 1) select 0 select 1 == 'Weapons Det')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenuW","menuWep84W"], _kits84heBTW] call ace_interact_menu_fnc_addActionToObject;

//Comm//
_kitsWComm1W = ["kitsCommheW","84mm HEAT Ammo Kit","",{[_this select 1,"WDCdr","HEAT"] call caf_fl_fnc_preLoadOutW},{(squadParams (_this select 1) select 0 select 1 == 'Weapons Det')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenuW","menuWepCommW"], _kitsWComm1W] call ace_interact_menu_fnc_addActionToObject;

_kitsWComm2W = ["kitsCommhedpW","84mm HEDP Ammo Kit","",{[_this select 1,"WDCdr","HEDP"] call caf_fl_fnc_preLoadOutW},{(squadParams (_this select 1) select 0 select 1 == 'Weapons Det')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenuW","menuWepCommW"], _kitsWComm2W] call ace_interact_menu_fnc_addActionToObject;

_kitsWComm3W = ["kitsCommbtW","84mm 1&1 Ammo Kit","",{[_this select 1,"WDCdr","BOTH"] call caf_fl_fnc_preLoadOutW},{(squadParams (_this select 1) select 0 select 1 == 'Weapons Det')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenuW","menuWepCommW"], _kitsWComm3W] call ace_interact_menu_fnc_addActionToObject;

_kitsWComm4W = ["kitsCommc6W","C6 Ammo Kit","",{[_this select 1,"WDCdr","C6"] call caf_fl_fnc_preLoadOutW},{(squadParams (_this select 1) select 0 select 1 == 'Weapons Det')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenuW","menuWepCommW"], _kitsWComm4W] call ace_interact_menu_fnc_addActionToObject;


_sw6W = ["sw6W","84mm Det Loader","",{[_this select 1,"84Ldr","24"] call caf_fl_fnc_preLoadOutW},{(squadParams (_this select 1) select 0 select 1 == 'Weapons Det')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenuW","menuHeavyW"], _sw6W] call ace_interact_menu_fnc_addActionToObject;

_gpmg1W = ["kitgpmgW","GPMG","",{[_this select 1,"GPMG","24"] call caf_fl_fnc_preLoadOutW},{(squadParams (_this select 1) select 0 select 1 == 'Weapons Det')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenuW","menuHeavyW"], _gpmg1W] call ace_interact_menu_fnc_addActionToObject;


///SPECIAL///
_pltcom1W = ["kitpltcom2W","Platoon Commander","",{[_this select 1,"TrpLdr","24"] call caf_fl_fnc_preLoadOutW},{(([(squadParams (_this select 1) select 1 select 1), 0, 2] call BIS_fnc_trimString) in ["Lt ","2Lt","Cap","Maj"])}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenuW","menuSpecialW"], _pltcom1W] call ace_interact_menu_fnc_addActionToObject;

_pltcom2ICW = ["kitplt2icW","Platoon Warrant","",{[_this select 1,"Trp2IC","24"] call caf_fl_fnc_preLoadOutW},{(([(squadParams (_this select 1) select 1 select 1), 0, 2] call BIS_fnc_trimString) in ["Sgt","WO ","WO3","WO2"])}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenuW","menuSpecialW"], _pltcom2ICW] call ace_interact_menu_fnc_addActionToObject;

_pltmed1W = ["kitpltmed1W","Troop Medic","",{[_this select 1,"Medic","48"] call caf_fl_fnc_preLoadOutW},{(squadParams (_this select 1) select 1 select 5 == 'Platoon Medic')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenuW","menuSpecialW"], _pltmed1W] call ace_interact_menu_fnc_addActionToObject;

_pltfooW = ["kitfooW","FAC","",{[_this select 1,"fooFac","24"] spawn caf_fl_fnc_preLoadOutW},{(squadParams (_this select 1) select 1 select 5 == 'FAC')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenuW","menuSpecialW"], _pltfooW] call ace_interact_menu_fnc_addActionToObject;

_pltMarkW = ["kitmarkW","Marksman","",{[_this select 1,"Marksman","24"] spawn caf_fl_fnc_preLoadOutW},{(squadParams (_this select 1) select 1 select 5 == 'Marksman')}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenuW","menuSpecialW"], _pltMarkW] call ace_interact_menu_fnc_addActionToObject;


} else {




_subMenu1 = ["menuLight","Light","","",{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu"], _subMenu1] call ace_interact_menu_fnc_addActionToObject;

////WEP DET SPECIAL MENU///
_subMenu4 = ["menuWep84","84mm Det Loader","","",{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","menuLight"], _subMenu4] call ace_interact_menu_fnc_addActionToObject;

_subMenu5 = ["menuWepComm","Wep Det Commander","","",{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","menuLight"], _subMenu5] call ace_interact_menu_fnc_addActionToObject;


_rifleman1 = ["kitRifleman","Rifleman","",{[_this select 1,"Rifleman","24"] call caf_fl_fnc_preLoadOut},{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu","menuLight"], _rifleman1] call ace_interact_menu_fnc_addActionToObject;

_grenadier1 = ["kitGrenadier2","Grenadier","",{[_this select 1,"Grenadier","24"] call caf_fl_fnc_preLoadOut},{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu","menuLight"], _grenadier1] call ace_interact_menu_fnc_addActionToObject;

_gpmg1 = ["kitgpmg2","GPMG","",{[_this select 1,"GPMG","24"] call caf_fl_fnc_preLoadOut},{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu","menuLight"], _gpmg1] call ace_interact_menu_fnc_addActionToObject;

_c9 = ["kitgpmg","C9Gunner","",{[_this select 1,"C9Gunner","24"] call caf_fl_fnc_preLoadOut},{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu","menuLight"], _c9] call ace_interact_menu_fnc_addActionToObject;

_sectionic1 = ["kitsectionic2","Section Commander","",{[_this select 1,"SectIC","24"] call caf_fl_fnc_preLoadOut},{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu","menuLight"], _sectionic1] call ace_interact_menu_fnc_addActionToObject;

_section2ic1 = ["kitsection2ic2","Section 2IC","",{[_this select 1,"Sect2IC","24"] call caf_fl_fnc_preLoadOut},{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu","menuLight"], _section2ic1] call ace_interact_menu_fnc_addActionToObject;

_pltcom1 = ["kitpltcom2","Troop Leader","",{[_this select 1,"TrpLdr","24"] call caf_fl_fnc_preLoadOut},{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu","menuLight"], _pltcom1] call ace_interact_menu_fnc_addActionToObject;

_pltcom2IC = ["kitplt2ic","Troop 2IC","",{[_this select 1,"Trp2IC","24"] call caf_fl_fnc_preLoadOut},{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu","menuLight"], _pltcom2IC] call ace_interact_menu_fnc_addActionToObject;

_kits84he = ["kits84he","84mm HEAT Ammo Kit","",{[_this select 1,"84Gnr","HEAT"] call caf_fl_fnc_preLoadOut},{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu","menuWep84"], _kits84he] call ace_interact_menu_fnc_addActionToObject;

_kits84hedp = ["kits84hedp","84mm HEDP Ammo Kit","",{[_this select 1,"84Gnr","HEDP"] call caf_fl_fnc_preLoadOut},{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu","menuWep84"], _kits84hedp] call ace_interact_menu_fnc_addActionToObject;

_kits84heBT = ["kits84heBT","84mm 1&1 Ammo Kit","",{[_this select 1,"84Gnr","BOTH"] call caf_fl_fnc_preLoadOut},{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu","menuWep84"], _kits84heBT] call ace_interact_menu_fnc_addActionToObject;

//Comm//
_kitsWComm1 = ["kitsCommhe","84mm HEAT Ammo Kit","",{[_this select 1,"WDCdr","HEAT"] call caf_fl_fnc_preLoadOut},{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu","menuWepComm"], _kitsWComm1] call ace_interact_menu_fnc_addActionToObject;

_kitsWComm2 = ["kitsCommhedp","84mm HEDP Ammo Kit","",{[_this select 1,"WDCdr","HEDP"] call caf_fl_fnc_preLoadOut},{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu","menuWepComm"], _kitsWComm2] call ace_interact_menu_fnc_addActionToObject;

_kitsWComm3 = ["kitsCommbt","84mm 1&1 Ammo Kit","",{[_this select 1,"WDCdr","BOTH"] call caf_fl_fnc_preLoadOut},{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu","menuWepComm"], _kitsWComm3] call ace_interact_menu_fnc_addActionToObject;

_kitsWComm4 = ["kitsCommc6","C6 Ammo Kit","",{[_this select 1,"WDCdr","C6"] call caf_fl_fnc_preLoadOut},{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu","menuWepComm"], _kitsWComm4] call ace_interact_menu_fnc_addActionToObject;

_pltmed1 = ["kitpltmed1","Medic","",{[_this select 1,"Medic","48"] call caf_fl_fnc_preLoadOut},{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu","menuLight"], _pltmed1] call ace_interact_menu_fnc_addActionToObject;

_pltfoo = ["kitfoo","FAC","",{[_this select 1,"fooFac","24"] spawn caf_fl_fnc_preLoadOut},{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu","menuLight"], _pltfoo] call ace_interact_menu_fnc_addActionToObject;

_pltMark = ["kitmark","Marksman","",{[_this select 1,"Marksman","24"] spawn caf_fl_fnc_preLoadOut},{true}] call ace_interact_menu_fnc_createAction;
[_this select 0, 0, ["ACE_MainActions","kitMenu","menuLight"], _pltMark] call ace_interact_menu_fnc_addActionToObject;



};