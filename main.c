#define __MAIN__
#include "inc/config.h"

int main(void) {
		
	STUDENT schoolClass[4]={{"Carlos P�reira", "Mota","cp@ipvc.pt",345},
	{"Marcelo Gomes", "Souza","mgs@ipvc.pt",743},
	{"Nuno Souza","Gamb�o","nunogamba@ipvc.pt",123},
	{"Fernando Braz�o", "Luza","fernandobr@ipvc.pt",945}};
	
	int choice=CREATECOURSE;
	STUDENT temporaryStudent;
	COURSE temporaryCourse,temporaryCourse2,temporaryCourse3={"�centua��o",1,3,4};
	char testString[]="m�tios �centua��o";
	setlocale(LC_ALL,"");
	
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
				 printf("[2] - Vari�vel 1 Fica no Main: SEM acentua��o \nCurso: %s \nDura��o: %d\n",temporaryCourse.courseName,temporaryCourse.durationYears);
				 printf("[3] - Vari�vel 3 inicializada no cod. Fica no Main: SEM acentua��o \nCurso: %s \nDura��o: %d\n",temporaryCourse.courseName,temporaryCourse.durationYears);
				 createData(&temporaryCourse,COURSETYPE);
				 readData(&temporaryCourse2,COURSETYPE);
				 printf("[4] - vari�vel carregada do arquivo\nCurso: %s \nDura��o: %d\n",temporaryCourse2.courseName,temporaryCourse2.durationYears);
				 printf("[5]v�riavel string inicializada no main : FICA ACENTUADA!\n Conteudo: %s \n ", testString);
				break;
		}
		choice =0; //delete
	}while(choice != EXIT);
	
	
	
	system("pause");
	return 0;
}
