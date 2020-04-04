#include "../../inc/sort/bubblesort.h"

void bubbleSort(STUDENT *schoolClass, int sizeClass, int sortType, int dataType)
{
	int i, j, exchangeStatus;
	int (*sortingMethod) (STUDENT *schoolClass, int index);
	
	if(sortType == DECREASING)
	{
		if(dataType == STRING)
			sortingMethod = sortDecreasingString;
		else
			sortingMethod = sortDecreasingInteger;	
	}
	else
	{
		if(dataType == STRING)
			sortingMethod = sortIncreasingString;
		else
			sortingMethod = sortIncreasingInteger;
	}
			
	for(i=0;i<sizeClass-1;i++)
	{
		for(j=0;j<sizeClass-1-i;j++)
			exchangeStatus = (*sortingMethod)(schoolClass,j);
		if(exchangeStatus == DONTCHANGED)
			break;		
	}		
			
}

static void switchPosition(STUDENT *schoolClass, int index)
{
	STUDENT auxiliary;
	
	auxiliary = schoolClass[index];
	schoolClass[index] = schoolClass[index+1];
	schoolClass[index+1] = auxiliary;
}

static int sortIncreasingString(STUDENT *schoolClass, int index)
{	
	if(strcmp(schoolClass[index].name,schoolClass[index+1].name) > 0)
	{
		switchPosition(schoolClass, index);
		return CHANGED;
	}
	return DONTCHANGED;		
}
static int sortIncreasingInteger(STUDENT *schoolClass, int index)
{	
	if(schoolClass[index].reg > schoolClass[index+1].reg)
	{
		switchPosition(schoolClass, index);
		return CHANGED;
	}
	return DONTCHANGED;
}

static int sortDecreasingString(STUDENT *schoolClass, int index)
{	
	if(strcmp(schoolClass[index].name,schoolClass[index+1].name) < 0)
	{
		switchPosition(schoolClass, index);
		return CHANGED;
	}
	return DONTCHANGED;
}
static int sortDecreasingInteger(STUDENT *schoolClass, int index)
{	
	if(schoolClass[index].reg < schoolClass[index+1].reg){
		switchPosition(schoolClass, index);
		return CHANGED;
	}
	return DONTCHANGED;
}

