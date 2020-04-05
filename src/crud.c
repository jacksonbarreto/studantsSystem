#include "../inc/crud.h"

int createData(void * data, int dataType)
{
	FILE * file;
	
	switch(dataType)
	{
		case COURSETYPE:
			file = fopen(COURSEDB,"a+b");
			if(fwrite(data,sizeof(COURSE),1,file) == 1)
			{
				fclose(file);
				return SUCCESS;
			}				
			break;
	}
	return FAILURE;
}

int readData(void * data, int dataType)
{
	FILE * file;
	
	switch(dataType)
	{
		case COURSETYPE:
			if((file = fopen(COURSEDB,"rb")) == NULL)
				return FAILURE;
						
			if((fread(data,sizeof(COURSE),1,file)) != 1)
				return FAILURE;
					
			fclose(file);
			return SUCCESS;				
	}
	return FAILURE;
}
