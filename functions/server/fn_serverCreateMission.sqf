_id = ++bl_missionIdCounter;
_name = _this select 0;
_desc = _this select 1;
_mission = [_id, _name, _desc];

// Append new mission to array of existing missions
bl_shared_availableMissions set [(count bl_shared_availableMissions), _mission];

// Broadcast new value to remote clients
publicVariable "bl_shared_availableMissions";

// Broadcast new value locally, in case we're a listen server
bl_shared_availableMissions call BL_fnc_clientUpdateAvailableMissions;
