#ifndef _BSD_GAMES_H_
#define _BSD_GAMES_H_

#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64)
	#ifndef _WIN32
		#define _WIN32
		typedef int gid_t;
	#endif
#endif

#endif


