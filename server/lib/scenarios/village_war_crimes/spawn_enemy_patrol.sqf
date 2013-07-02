/**
 * Spawns an enemy patrol around the village.
**/

private ["_village"];
_village = _this select 0;

// Determine rough position
private ["_distance", "_distances", "_position"];
_distance = (size _village) call BIS_fnc_arithmeticMean;
_distances = [(_distance * 0.75), (_distance * 1.25)];
_position = [(position _village), _distances, [0, 360], false, [1, _distance]] call SHK_pos;

// Spawn the group
private ["_group", "_unitCount"];
_unitCount = [3, 6] call BIS_fnc_randomInt;
_group = [_position, east, _unitCount] call BIS_fnc_spawnGroup;

// Garbage collect dead units
{
	_x addEventHandler ["killed", {
		[(_this select 0)] call BLOL_fnc_gc_mark;
	}];
} forEach (units _group);

// Set patrol waypoints
private ["_behaviourMode", "_combatMode", "_formation", "_speed",
	"_waypointCount", "_waypointExec", "_waypointTimeout", "_waypointType"];

_behaviourMode = "AWARE";
_combatMode = ["WHITE", "YELLOW"] call BIS_fnc_selectRandom;
_formation = ["COLUMN", "LINE", "STAG COLUMN", "WEDGE"] call BIS_fnc_selectRandom;
_speed = "LIMITED";
_waypointCount = [3, 8] call BIS_fnc_randomInt;
_waypointExec = nil;
_waypointTimeout = [3, 6, 9]; // Min, med, max
_waypointType = "MOVE";

[_group, _position, _distance, _waypointCount, _waypointType,
	_behaviourMode, _combatMode, _speed] call CBA_fnc_taskPatrol;

// Return the group
_group;
