_missions = _this;
_dialog = uiNamespace getVariable "BL_UI_MissionsDialog";

if (!(isNil "_dialog")) then {
	_missionsListControl = _dialog displayCtrl 1;

	lbClear _missionsListControl;

	[_missions, {
		_id = _key;
		_name = [_value, "name"] call CBA_fnc_hashGet;
		_desc = [_value, "desc"] call CBA_fnc_hashGet;

		_row = _missionsListControl lbAdd _name;
		_missionsListControl lbSetValue [_row, _id];
	}] call CBA_fnc_hashEachPair;

	_missionsListControl lbSetCurSel 0;
};
