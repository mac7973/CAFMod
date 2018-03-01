if !((squadParams (player) select 0 select 1 == 'Recce Det')) then {
	waituntil {!(isNull findDisplay 602)};
	closeDialog 0;
	hint "Access denied";
};