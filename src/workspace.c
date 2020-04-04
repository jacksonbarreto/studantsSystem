#include "../inc/workspace.h"

STUDENT registerStudent()
{
	STUDENT student;
	
	getString("Nome:",NAMESIZE,student.name);
	getString("Sobrenome: ",SURNAMESIZE,student.surname);
	getString("E-mail: ", EMAILSIZE, student.email);
	student.reg = getShortInteger("Matrícula: ");
	student.startYear = getShortInteger("Ano de Ingresso: ");
	
	return student;
}
