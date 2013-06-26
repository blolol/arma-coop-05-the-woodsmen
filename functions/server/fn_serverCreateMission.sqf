_id = ++bl_missionIdCounter;
_name = _this select 0;
_desc = _this select 1;
_mission = [[["id", _id], ["name", _name], ["desc", _desc]]] call CBA_fnc_hashCreate;

// Add new mission to hash of available missions
[bl_shared_availableMissions, _id, _mission] call CBA_fnc_hashSet;

// Broadcast new value to remote clients
publicVariable "bl_shared_availableMissions";

// Broadcast new value locally, in case we're a listen server
bl_shared_availableMissions call BL_fnc_clientUpdateAvailableMissions;
