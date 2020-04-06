#ifndef __CONFIG__
	#define __CONFIG__
	
	#include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>
	#include <string.h>
	

	
	/*Size settings*/
	#define NAMESIZE 50
	#define SURNAMESIZE 50
	#define EMAILSIZE 50
	#define COURSENAMESIZE 50
	#define DEGREENAMESIZE 50
	#define DISCIPLINENAMESIZE 50
	
	/*control constants*/
		/*sorting control*/
		#define INCREASING 1
		#define DECREASING 2
		#define INTEGER 1
		#define STRING 0
		#define CHANGED 1
		#define DONTCHANGED 0
		/*crud control*/
		#define COURSEDB "bd/courses.dat"
		#define COURSETYPE 1
		/*generic controls*/
		#define EXIT 0
		#define SUCCESS 1
		#define FAILURE 0
	
	/*Menu options*/
		/*administrative menu*/
			/*manage students*/
			#define CREATESTUDENT 11
			#define READSTUDENT 0
			#define UPDATESTUDENT 0
			#define DELETESTUDENT 0
			/*manage courses*/
			#define CREATECOURSE 22
			#define READCOURSE 0
			#define UPDATECOURSE 0
			#define DELETECOURSE 0
			/*manage degrees*/
			#define CREATEDEGREE 0
			#define READDEGREE 0
			#define UPDATEDEGREE 0
			#define DELETEDEGREE 0
			/*setup menu*/
				/*sorting methods*/
				#define BUBBLESORT 0
				#define SELECTIONSORT 0
				#define INSERTIONSORT 0
				#define QUICKSORT 0
				/*search methods*/
				#define BINARYRESEARCH 0
				#define SEQUENTIALSEARCH 0
	
	
	
	#include "structs.h"
		
	/*global variables*/
	int ORDINATION_METHOD;
	int SEARCH_METHOD;
	DEGREE *LIST_OF_DEGREES;
	COURSE *LIST_OF_COURSES;

#endif

/*Dependency control*/

#ifdef __BUBBLESORT__
	
	
#endif

#ifdef __WORKSPACE__
	#include "helpers.h"
#endif

#ifdef __MAIN__
	#include "sort.h"
	#include "crud.h"
	#include "helpers.h"
	#include "error.h"
	#include "tester.h"
	#include "search.h"
	#include "boot.h"
	#include "workspace.h"
#endif

#ifdef _WIN32
	#include <windows.h>
#endif
