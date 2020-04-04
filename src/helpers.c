#include "../inc/helpers.h"

char * getString(const char *question,const unsigned short int responseSize, char *answer)
{
	char inputFilter[12];
	
	sprintf(inputFilter," \%%%hu[^\n]s",responseSize);	
	printf(question);
	scanf(inputFilter,answer);
	clearBuffer();
	
	return answer;
}

unsigned short int getShortInteger(const char *question)
{
	unsigned short int integer;
	
	printf(question);
	scanf(" %hu",&integer);
	
	return integer;
}

void clearBuffer(void)
{
	char garbage;
	while((garbage=getchar()) != '\n' && garbage != EOF);	
}
