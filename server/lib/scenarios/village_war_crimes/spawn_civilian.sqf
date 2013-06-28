/**
 * Spawns a frightened civilian.
**/

private ["_classes", "_group", "_position", "_spawnRadius"];

_group = _this select 0;
_position = _this select 1;
_spawnRadius = _this select 2;

_classes = [
	"Villager1", "Villager2", "Villager3", "Villager4", "Worker1", "Worker2", "Worker3", "Worker4",
	"Farmwife1", "Farmwife2", "Farmwife3", "Farmwife4", "Farmwife5"
];

private ["_class", "_unit"];
_class = _classes call BIS_fnc_selectRandom;
_unit = _group createUnit [_class, _position, [], _spawnRadius, "NONE"];

_unit addEventHandler ["killed", {
	private ["_unit"];
	_unit = _this select 0;

	// Spawn a replacement unit
	[(group _unit), (position _unit), 5] call BLOL_fnc_scenarios_vwc_spawnCivilian;

	// Garbage collect the dead unit
	_unit spawn {
		sleep ([15, 30] call BIS_fnc_randomInt);
		deleteVehicle _this;
	}
}];

_unit allowFleeing 0;
{ _unit disableAI _x } forEach ["AUTOTARGET", "FSM", "MOVE"];
_unit setBehaviour "CARELESS";
_unit stop true;

// Return the unit
_unit;
