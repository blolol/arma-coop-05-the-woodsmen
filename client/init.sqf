/**
 * Main client entry point.
**/

removeAllItems player;
removeAllWeapons player;

private ["_money"];
_money = ["money_initialBalance", "number", 0] call BLOL_fnc_config_get;
player setVariable ["blol_woodsmen_money", _money];

"blol_woodsmen_availableMissions" addPublicVariableEventHandler {
	call BLOL_fnc_ui_missionsDialog_redrawMissionsList;
};

oleg addAction ["Ask Oleg about missions", "client\lib\functions\ui\missions_dialog\open.sqf"];

call BLOL_fnc_ui_vitalsHud_open;
