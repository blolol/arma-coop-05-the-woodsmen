/**
 * Functions used by both clients and the server.
**/

class Shared {
	class config_get {
		file = "lib\functions\config\get.sqf";
		description = "Returns a config entry from include\settings.hpp.";
	};

	class debug_inspect {
		file = "lib\functions\debug\inspect.sqf";
		description = "Formats an arbitrary object as a string and prints it to the log.";
	};

	class missions_find {
		file = "lib\functions\missions\find.sqf";
		description = "Returns a mission hash for the given mission ID.";
	};
};
