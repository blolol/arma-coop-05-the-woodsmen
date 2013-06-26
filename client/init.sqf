// Strip the player of his default gear
removeAllItems player;
removeAllWeapons player;

// Set the player's initial money balance
player setVariable ["money", 20];

// Listen for available mission updates
"bl_shared_availableMissions" addPublicVariableEventHandler {
	_missions = _this select 1;
	_missions call BL_fnc_clientUpdateAvailableMissions;
};

// Add an action to Oleg to ask about missions
oleg addAction ["Ask Oleg about missions", "functions\client\fn_clientOpenMissionsUi.sqf"];
