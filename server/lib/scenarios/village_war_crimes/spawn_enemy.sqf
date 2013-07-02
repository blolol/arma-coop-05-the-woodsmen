/**
 * Spawns an enemy that will fire on nearby civilians.
**/

private ["_class", "_group", "_position"];

_group = _this select 0;
_position = _this select 1;

_class = [
	"RU_Soldier", "RU_Soldier_AR", "RU_Soldier_MG", "RU_Soldier_SL", "RU_Soldier_TL"
] call BIS_fnc_selectRandom;

_unit = _group createUnit [_class, _position, [], 10, "NONE"];

_unit addEventHandler ["killed", {
	private ["_killer", "_unit"];
	_unit = _this select 0;
	_killer = _this select 1;

	if ((group _killer) == (group _unit)) then {
		// Respawn the unit if he is killed by friendly fire
		[(group _unit), (position _unit)] call BLOL_fnc_scenarios_vwc_spawnEnemy;

		// Instantly garbage collect the dead unit
		_unit spawn {
			sleep ([15, 30] call BIS_fnc_randomInt);
			deleteVehicle _this;
		}
	} else {
		// Eventually garbage collect units killed by players
		[_unit] call BLOL_fnc_gc_mark;
	};
}];

// Give unit unlimited ammo
_unit addEventHandler ["fired", { (_this select 0) setVehicleAmmo 1; }];

// Force unit into combat mode
_unit setBehaviour "COMBAT";

// Force unit to remaining standing while firing
_unit setUnitPos "UP";

// Prevent unit from moving too far from spawn position
doStop _unit;

// Return the unit
_unit;
