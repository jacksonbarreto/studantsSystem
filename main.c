#define __MAIN__
#include "inc/config.h"

int main(void) {
		
	STUDENT schoolClass[4]={{"Carlos Péreira", "Mota","cp@ipvc.pt",345},
	{"Marcelo Gomes", "Souza","mgs@ipvc.pt",743},
	{"Nuno Souza","Gambão","nunogamba@ipvc.pt",123},
	{"Fernando Brazão", "Luza","fernandobr@ipvc.pt",945}};
	
	int choice=CREATESTUDENT;
	STUDENT temporaryStudent;

	setlocale(LC_ALL,"portuguese");

	do
	{
		//menu();
		switch(choice)
		{
			case CREATESTUDENT:
				temporaryStudent = registerStudent();				
				choice =0; //delete
				break;
		}
		
	}while(choice != EXIT);
	
	printf("\n Nome: %s Sobrenome: %s \n Email: %s  Matricula: %d \n ANO de Ingresso: %d\n\n",temporaryStudent.name,temporaryStudent.surname,temporaryStudent.email,temporaryStudent.reg,temporaryStudent.startYear);
	
	system("pause");
	return 0;
}
