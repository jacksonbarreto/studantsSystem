#ifndef __STRUCTS__
	#define __STRUCTS__
	
	typedef struct _person
	{
		char name[NAMESIZE];
		char surname[SURNAMESIZE];
		char email[EMAILSIZE];
		unsigned long int reg;		
	}PERSON;

	typedef struct _student
	{
		char name[NAMESIZE];
		char surname[SURNAMESIZE];
		char email[EMAILSIZE];
		unsigned long int reg;
		unsigned short int degreeId;
		unsigned short int courseId;
		unsigned short int currentClass;
		unsigned short int startYear;	
		unsigned short int academicYear;			
	}STUDENT;
	
		typedef struct _professor
	{
		char name[NAMESIZE];
		char surname[SURNAMESIZE];
		char email[EMAILSIZE];
		unsigned long int reg;					
	}PROFESSOR;
	
	typedef struct _degree
	{
		unsigned short int id;
		char degreeName[DEGREENAMESIZE];
		
	}DEGREE;
	
	typedef struct _course
	{
		char courseName[COURSENAMESIZE];
		unsigned short int id;		
		unsigned short int durationYears;
		unsigned short int degree;		
	}COURSE;
	
	typedef struct _discipline
	{
		char disciplineName[DISCIPLINENAMESIZE];
		unsigned short int id;
		unsigned short int ects;
		unsigned short int year;
		unsigned short int semester;		
		unsigned short int theoryProfessor;
		unsigned short int onlyTheoretical;
		unsigned short int practiceProfessor;
		unsigned short int classSize;
	}DISCIPLINE;
	
	typedef struct _schoolclass
	{
		unsigned short int id;		
		unsigned short int students;		
	}SCHOOLCLASS;
	
#endif
