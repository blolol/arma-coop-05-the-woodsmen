/*
 * Disable CBA caching.
 *
 * See: <https://dev-heaven.net/issues/23841#note-1>
 */

class CfgSettings {
	class CBA {
		class Caching {
			compile = 0;
			xeh = 0;
			functions = 0;
		};
	};
};
