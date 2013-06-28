/**
 * Initializes a war crime mission in a small, off-the-grid village.
 *
 * In the village, there will be a small guerrilla or foreign military presence, along with some
 * frightened villagers. The enemy will be attempting to kill the civilians.
 *
 * The Woodsmen must neutralize the enemy presence. Harming civilians will lower the Woodsmen's
 * reputation.
**/

if (isNil "BLOL_fnc_scenarios_vwc_spawnCivilian") then {
	BLOL_fnc_scenarios_vwc_spawnCivilian = compile (preprocessFileLineNumbers
		"server\lib\scenarios\village_war_crimes\spawn_civilian.sqf");
};

if (isNil "BLOL_fnc_scenarios_vwc_spawnEnemy") then {
	BLOL_fnc_scenarios_vwc_spawnEnemy = compile (preprocessFileLineNumbers
		"server\lib\scenarios\village_war_crimes\spawn_enemy.sqf");
};

// Choose a village near the Woodsmen's camp
// TODO Base radius on Woodsmen's reputation, so greater reputation means more distant villages
private ["_village", "_villagePos", "_villages"];
_villages = nearestLocations [(getMarkerPos "woodcamp"), ["NameVillage"], 1500];
_village = _villages call BIS_fnc_selectRandom;
_villagePos = position _village;

[format ["Initializing war crime in %1...", (text _village)], "village_war_crimes"] call CBA_fnc_debug;

// Associate civilians with WEST, so that enemies attack them
private ["_civilianCount", "_civilianGroup"];
_civilianGroup = westDummyGroup;
_civilianCount = [7, 18] call BIS_fnc_randomInt;

// Choose a few points for civilians to congregate around by spawning two or three "seed" units with
// a larger random placement radius. This is meant to simulate the civilians having been rounded
// up into groups by the enemy.
private ["_civilianSeedCount", "_civilianSeeds", "_civilianSeedSpawnRadius"];
_civilianSeedCount = [2, 3] call BIS_fnc_randomInt;
_civilianSeedSpawnRadius = (size _village) call BIS_fnc_arithmeticMean;
_civilianSeeds = [];

for "_i" from 1 to _civilianSeedCount do {
	private ["_unit"];
	_unit = [_civilianGroup, _villagePos, _civilianSeedSpawnRadius] call BLOL_fnc_scenarios_vwc_spawnCivilian;
	[_civilianSeeds, _unit] call BIS_fnc_arrayPush;
};

// Spawn the rest of the civilians around the "seed" units
for "_i" from 1 to (_civilianCount - _civilianSeedCount) do {
	private ["_position"];
	_position = position (_civilianSeeds call BIS_fnc_selectRandom);
	[_civilianGroup, _position, 5] call BLOL_fnc_scenarios_vwc_spawnCivilian;
};

private ["_enemyGroup"];
_enemyGroup = eastDummyGroup;

// Spawn enemies near each of the civilian groups
{
	private ["_enemyCount", "_position"];
	_enemyCount = [2, 4] call BIS_fnc_randomInt;
	_position = position _x;

	for "_i" from 1 to _enemyCount do {
		[_enemyGroup, _position] call BLOL_fnc_scenarios_vwc_spawnEnemy;
	};
} forEach _civilianSeeds;
