/**
 * Main mission entry point.
**/

waituntil { !(isnil "bis_fnc_init") };

call compile preprocessfile "vendor\shk_pos\shk_pos_init.sqf";

if (isNil "blol_woodsmen_availableMissions") then {
	blol_woodsmen_availableMissions = [] call CBA_fnc_hashCreate;
};

if (isServer) then {
	execVM "server\init.sqf";
};

if (hasInterface)  then {
	execVM "client\init.sqf";
};
