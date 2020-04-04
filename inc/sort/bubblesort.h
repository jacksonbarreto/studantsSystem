#ifndef __BUBBLESORT__
	#define __BUBBLESORT__
	#include "../config.h"
	
	void bubbleSort(STUDENT *schoolClass, int sizeClass, int sortType, int dataType);
	static void switchPosition(STUDENT *schoolClass, int index);
	static int sortIncreasingString(STUDENT *schoolClass, int index);
	static int sortIncreasingInteger(STUDENT *schoolClass, int index);
	static int sortDecreasingString(STUDENT *schoolClass, int index);
	static int sortDecreasingInteger(STUDENT *schoolClass, int index);


#endif

	
