#include "../inc/workspace.h"

STUDENT registerStudent()
{
	STUDENT student;
	PERSON person;
	
	person = getPerson();
	strcpy(student.name, person.name);
	strcpy(student.surname, person.surname);
	strcpy(student.email, person.email);
	student.startYear = getShortInteger("Ano de Ingresso: ");
	//falta gerar matricula
	
	return student;
}

PROFESSOR registerProfessor()
{
	PROFESSOR professor;
	PERSON person;
	
	person = getPerson();
	strcpy(professor.name, person.name);
	strcpy(professor.surname, person.surname);
	strcpy(professor.email, person.email);
	//falta gerar matricula
	
	return professor;
}

DEGREE registerDegree()
{
	DEGREE degree;
	
	getString("Grau: ", DEGREENAMESIZE, degree.degreeName);
	//falta gerar id
	
	return degree;
}

COURSE registerCourse()
{
	COURSE course;
	
	getString("Nome do Curso: ", COURSENAMESIZE, course.courseName);
	//falta gerar id
	
	return course;
}

DISCIPLINE registerDiscipline()
{
	DISCIPLINE discipline;
	
	getString("Nome da Disciplina: ", DISCIPLINENAMESIZE, discipline.disciplineName);
	discipline.ects = getShortInteger("ETCS: ");
	discipline.year = getShortInteger("Ano Curricular: ");
	discipline.semester = getShortInteger("Semestre de enquadramento: ");
	discipline.classSize = getShortInteger("Tamanho da Turma: "); //pode ser automatico pela config
	// falta gerar id
	// falta associar professor de prática e teórica
	// falta questionar se a disciplina é apenas teórica ou tem prática para ai sim registrar prof de prática.
	
	return discipline;
}

static PERSON getPerson()
{
	PERSON person;
	
	getString("Nome:",NAMESIZE,person.name);
	getString("Sobrenome: ",SURNAMESIZE,person.surname);
	getString("E-mail: ", EMAILSIZE, person.email);	
	
	return person;
}
