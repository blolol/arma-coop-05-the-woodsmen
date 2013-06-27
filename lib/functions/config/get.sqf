private ["_config", "_default", "_key", "_type"];
_key = _this select 0;
_type = _this select 1;
_default = _this select 2;
_config = missionConfigFile / "CfgSettings" / "Mission" / _key;

[_config, _type, _default] call CBA_fnc_getConfigEntry;
