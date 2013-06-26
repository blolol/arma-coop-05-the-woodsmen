waituntil { !(isnil "bis_fnc_init") };

if (isNil "bl_shared_availableMissions") then {
	bl_shared_availableMissions = [] call CBA_fnc_hashCreate;
};

if (isServer) then {
	execVM "server\init.sqf";
};

if (hasInterface)  then {
	execVM "client\init.sqf";
};
