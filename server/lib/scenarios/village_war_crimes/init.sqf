/**
 * Initializes a war crime mission in a small, off-the-grid village.
 *
 * In the village, there will be a small guerrilla or foreign military presence, along with some
 * frightened villagers. The enemy will be attempting to kill the civilians.
 *
 * The Woodsmen must neutralize the enemy presence. Harming civilians will lower the Woodsmen's
 * reputation.
**/

private ["_civilianCount", "_civilianGroup", "_village", "_villages"];

if (isNil "BLOL_VWC_fnc_spawnCivilian") then {
	BLOL_VWC_fnc_spawnCivilian = compile (preprocessFileLineNumbers "server\lib\missions\village_war_crimes\spawn_civilian.sqf");
};

// Choose a village near the Woodsmen's camp
// TODO Base radius on Woodsmen's reputation, so greater reputation means more distant villages
_villages = nearestLocations [(getMarkerPos "woodcamp"), ["NameVillage"], 1500];
_village = _villages call BIS_fnc_selectRandom;

[format ["Initializing war crime in %1...", (text _village)], "village_war_crimes"] call CBA_fnc_debug;

// Associate civilians with WEST, so that enemies attack them
_civilianGroup = createGroup ([west] call CBA_fnc_createCenter);
_civilianCount = [7, 18] call BIS_fnc_randomInt;

for "_i" from 1 to _civilianCount do {
	[_village, _civilianGroup] call BLOL_VWC_fnc_spawnCivilian;
};
