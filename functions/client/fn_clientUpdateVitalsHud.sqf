disableSerialization;

_hud = uiNamespace getVariable "BL_UI_VitalsHud";

if (!(isNil "_hud")) then {
	_money = player getVariable "bl_money";
	_moneyControl = _hud displayCtrl 1;

	_moneyControl ctrlSetText (format ["$%1", _money]);
};
