private ["_index", "_dialog"];
_index = _this;
_dialog = uiNamespace getVariable "BLOL_UI_MissionsDialog";

if (!(isNil "_dialog")) then {
	private ["_missionDescControl", "_missionsListControl", "_missionNameControl"];
	_missionsListControl = _dialog displayCtrl 1;
	_missionNameControl = _dialog displayCtrl 4;
	_missionDescControl = _dialog displayCtrl 5;

	private ["_mission", "_missionId"];
	_missionId = _missionsListControl lbValue _index;
	_mission = _missionId call BLOL_fnc_missions_find;

	_missionNameControl ctrlSetText ([_mission, "name"] call CBA_fnc_hashGet);
	_missionDescControl ctrlSetText ([_mission, "desc"] call CBA_fnc_hashGet);
};
