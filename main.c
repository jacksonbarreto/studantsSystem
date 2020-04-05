#define __MAIN__
#include "inc/config.h"

int main(void) {
		
	STUDENT schoolClass[4]={{"Carlos Péreira", "Mota","cp@ipvc.pt",345},
	{"Marcelo Gomes", "Souza","mgs@ipvc.pt",743},
	{"Nuno Souza","Gambão","nunogamba@ipvc.pt",123},
	{"Fernando Brazão", "Luza","fernandobr@ipvc.pt",945}};
	
	int choice=CREATECOURSE;
	STUDENT temporaryStudent;
	COURSE temporaryCourse,temporaryCourse2,temporaryCourse3={"ácentuação",1,3,4};
	char testString[]="mútios ácentuação";
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
				 printf("[2] - Variável 1 Fica no Main: SEM acentuação \nCurso: %s \nDuração: %d\n",temporaryCourse.courseName,temporaryCourse.durationYears);
				 printf("[3] - Variável 3 inicializada no cod. Fica no Main: SEM acentuação \nCurso: %s \nDuração: %d\n",temporaryCourse.courseName,temporaryCourse.durationYears);
				 createData(&temporaryCourse,COURSETYPE);
				 readData(&temporaryCourse2,COURSETYPE);
				 printf("[4] - variável carregada do arquivo\nCurso: %s \nDuração: %d\n",temporaryCourse2.courseName,temporaryCourse2.durationYears);
				 printf("[5]váriavel string inicializada no main : FICA ACENTUADA!\n Conteudo: %s \n ", testString);
				break;
		}
		choice =0; //delete
	}while(choice != EXIT);
	
	
	
	system("pause");
	return 0;
}
