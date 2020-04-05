#ifndef __WORKSPACE__
	#define __WORKSPACE__
	#include "config.h"
	
	STUDENT registerStudent();
	PROFESSOR registerProfessor();
	DEGREE registerDegree();
	COURSE * registerCourse(COURSE * course);
	DISCIPLINE registerDiscipline();
	static PERSON getPerson();
#endif
