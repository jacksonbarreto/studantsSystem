#define __MAIN__
#include "inc/config.h"

int main(void) {
		
	STUDENT schoolClass[4]={{"Carlos Péreira", "Mota","cp@ipvc.pt",345},
	{"Marcelo Gomes", "Souza","mgs@ipvc.pt",743},
	{"Nuno Souza","Gambão","nunogamba@ipvc.pt",123},
	{"Fernando Brazão", "Luza","fernandobr@ipvc.pt",945}};
	
	int choice=CREATECOURSE;
	STUDENT temporaryStudent;
	COURSE temporaryCourse,temporaryCourse2;
	setlocale(LC_ALL,"portuguese");

	do
	{
		//menu();
		switch(choice)
		{
			case CREATESTUDENT:
				temporaryStudent = registerStudent();				
				break;
			case CREATECOURSE:
				 registerCourse(&temporaryCourse);
				 printf("[1]\nCurso: %s \nDuração: %d\n",temporaryCourse.courseName,temporaryCourse.durationYears);
				 createData(&temporaryCourse,COURSETYPE);
				 readData(&temporaryCourse2,COURSETYPE);
				 printf("[2]\nCurso: %s \nDuração: %d\n",temporaryCourse2.courseName,temporaryCourse2.durationYears);
				break;
		}
		choice =0; //delete
	}while(choice != EXIT);
	
	
	
	system("pause");
	return 0;
}
