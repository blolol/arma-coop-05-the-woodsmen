class CfgFunctions {
	class BL {
		class client {
			class clientUpdateAvailableMissions {
				description = "Update the client's local copy of available missions.";
			};

			class clientOpenMissionsUi {
				description = "Open the missions dialog on the local client.";
			};
		};

		class server {
			class serverCreateMission {
				description = "Register a new mission on the server and broadcast it to clients.";
			};
		};
	};
};
