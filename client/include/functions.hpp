/**
 * Functions used by multiplayer clients.
**/

class Client {
	class ui_missionsDialog_redrawMissionDetails {
		file = "client\lib\functions\ui\missions_dialog\redraw_mission_details.sqf";
		description = "Redraws the missions dialog mission details after the player selects a mission.";
	};

	class ui_missionsDialog_redrawMissionsList {
		file = "client\lib\functions\ui\missions_dialog\redraw_missions_list.sqf";
		description = "Redraws the missions dialog missions list after the client receives a list of available missions.";
	};

	class ui_missionsDialog_open {
		file = "client\lib\functions\ui\missions_dialog\open.sqf";
		description = "Opens the missions dialog.";
	};

	class ui_vitalsHud_open {
		file = "client\lib\functions\ui\vitals_hud\open.sqf";
		description = "Opens the vitals HUD.";
	};

	class ui_vitalsHud_redraw {
		file = "client\lib\functions\ui\vitals_hud\redraw.sqf";
		description = "Redraws the vitals HUD.";
	};
};
