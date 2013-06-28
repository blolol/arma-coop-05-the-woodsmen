/**
 * Spawns a civilian in the specified village.
**/

private ["_civilianClasses", "_civilianGroup", "_village"];

_village = _this select 0;
_civilianGroup = _this select 1;

_civilianClasses = [
	"Villager1", "Villager2", "Villager3", "Villager4", "Worker1", "Worker2", "Worker3", "Worker4",
	"Farmwife1", "Farmwife2", "Farmwife3", "Farmwife4", "Farmwife5"
];

_unitClass = _civilianClasses call BIS_fnc_selectRandom;
_unitPosRadius = ((size _village) call BIS_fnc_arithmeticMean) / 3;
_unitPos = [(position _village), [0, _unitPosRadius], [0, 360], true, [1, _unitPosRadius]] call SHK_pos;
_unit = _civilianGroup createUnit [_unitClass, _unitPos, [], 0, "NONE"];

_unit setVariable ["blol_woodsmen_village", _village];

_unit addEventHandler ["killed", {
	private ["_unit", "_village"];
	_unit = _this select 0;
	_village = _unit getVariable "blol_woodsmen_village";
	[_village, (group _unit)] call BLOL_fnc_scenarios_vwc_spawnCivilian;
}];

_unit allowFleeing 0;
{ _unit disableAI _x } forEach ["AUTOTARGET", "MOVE"];
_unit setBehaviour "CARELESS";
_unit stop true;
