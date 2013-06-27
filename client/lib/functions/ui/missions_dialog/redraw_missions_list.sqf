private ["_dialog", "_missions"];
_missions = blol_woodsmen_availableMissions;
_dialog = uiNamespace getVariable "BLOL_UI_MissionsDialog";

if (!(isNil "_dialog")) then {
	private ["_missionsListControl"];
	_missionsListControl = _dialog displayCtrl 1;

	lbClear _missionsListControl;

	[_missions, {
		private ["_desc", "_id"];
		_id = _key;
		_name = [_value, "name"] call CBA_fnc_hashGet;
		_desc = [_value, "desc"] call CBA_fnc_hashGet;

		private ["_row"];
		_row = _missionsListControl lbAdd _name;
		_missionsListControl lbSetValue [_row, _id];
	}] call CBA_fnc_hashEachPair;

	_missionsListControl lbSetCurSel 0;
};
