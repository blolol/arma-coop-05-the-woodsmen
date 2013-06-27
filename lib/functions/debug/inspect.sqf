private ["_label", "_object"];
_label = _this select 0;
_object = _this select 1;

[format ["%1 => %2", _label, _object], "BLOL_fnc_debug_inspect"] call CBA_fnc_debug;
