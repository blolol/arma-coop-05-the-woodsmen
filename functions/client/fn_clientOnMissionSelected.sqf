_index = _this;
_dialog = uiNamespace getVariable "BL_UI_MissionsDialog";

if (!(isNil "_dialog")) then {
	_missionsListControl = _dialog displayCtrl 1;
	_missionNameControl = _dialog displayCtrl 4;
	_missionDescControl = _dialog displayCtrl 5;

	_missionId = _missionsListControl lbValue _index;
	_mission = _missionId call BL_fnc_findAvailableMissionById;

	_missionNameControl ctrlSetText ([_mission, "name"] call CBA_fnc_hashGet);
	_missionDescControl ctrlSetText ([_mission, "desc"] call CBA_fnc_hashGet);
};
