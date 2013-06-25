// Strip the player of his default gear
removeAllItems player;
removeAllWeapons player;

// Set the player's initial money balance
player setVariable ["money", 20];

// Open a dialog
_dialog = createDialog "BL_UI_MissionsDialog";
