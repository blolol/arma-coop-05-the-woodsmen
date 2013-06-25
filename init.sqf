if (isServer) then {
	execVM "server\init.sqf";
};

if (hasInterface)  then {
	execVM "client\init.sqf";
};
