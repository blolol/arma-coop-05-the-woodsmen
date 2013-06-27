class CfgFunctions {
	class BL {
		class client {
			class clientOnMissionSelected {
				description = "Updates the mission dialog details for the selected mission.";
			};

			class clientOpenMissionsUi {
				description = "Open the missions dialog on the local client.";
			};

			class clientUpdateAvailableMissions {
				description = "Update the client's local copy of available missions.";
			};

			class clientUpdateVitalsHud {
				description = "Update the client's vitals HUD.";
			};
		};

		class server {
			class serverCreateMission {
				description = "Register a new mission on the server and broadcast it to clients.";
			};
		};

		class shared {
			class findAvailableMissionById {
				description = "Find an available mission by its mission ID.";
			};
		};
	};
};
