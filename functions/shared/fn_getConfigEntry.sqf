_key = _this select 0;
_type = _this select 1;
_default = _this select 2;

[(missionConfigFile / "CfgWoodsmen" / _key), _type, _default] call CBA_fnc_getConfigEntry;
