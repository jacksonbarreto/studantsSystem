#ifndef __HELPERS__
	#define __HELPERS__
	#include "config.h"
	
	void clearBuffer(void);
	char * getString(const char *question,const unsigned short int responseSize, char *answer);
	unsigned short int getShortInteger(const char *question);
	
#endif
