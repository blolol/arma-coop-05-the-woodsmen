disableSerialization;

private ["_hud"];
_hud = uiNamespace getVariable "BLOL_UI_VitalsHud";

if (!(isNil "_hud")) then {
	private ["_money", "_moneyControl"];
	_money = player getVariable "blol_woodsmen_money";
	_moneyControl = _hud displayCtrl 1;

	_moneyControl ctrlSetText (format ["$%1", _money]);
};
