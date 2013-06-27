private ["_desc", "_id", "_mission", "_name"];
_id = ++blol_woodsmen_missionIdCounter;
_name = _this select 0;
_desc = _this select 1;
_mission = [[["id", _id], ["name", _name], ["desc", _desc]]] call CBA_fnc_hashCreate;

[blol_woodsmen_availableMissions, _id, _mission] call CBA_fnc_hashSet;

publicVariable "blol_woodsmen_availableMissions";
call BLOL_fnc_ui_missionsDialog_redrawMissionsList;
