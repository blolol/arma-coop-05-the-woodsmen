/**
 * Disables CBA caching in debug mode, as per <https://dev-heaven.net/issues/23841#note-1>.
**/

#ifdef __DEBUG
	class CBA {
		class Caching {
			compile = 0;
			xeh = 0;
			functions = 0;
		};
	};
#endif
