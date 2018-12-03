#include "StudentList.h"


void AddStudent(int* numberOfStudents, char*** namesList, char*** surnamesList, int** yearsList, const char* name, const char* secondName, const char* surname, int year)
{	
	int number = *numberOfStudents;
	if(number!=0)
	{
		char ***tempnamesList = new char*[number];
		tempnamesList = 

		char ***tempnamesList = new char*[number];
		*tempnamesList[number] = new char;

		char ***tempsurnamesList = new char*[number];
		*tempsurnamesList[number] = new char;


		char ***tempyearsList = new int[number];
		*tempyearsList[number] = year;
	}
*namesList = new char*[number];
*namesList[number] = new char;
strcpy(*namesList[number], name);


*surnamesList = new char*[number];
*surnamesList[number] = new char; 
strcpy(*surnamesList[number], surname);

*yearsList = new int[number];
//*yearsList[number] = new int;
*yearsList[number] = year;

	std::cout<<*namesList[number] <<std::endl;
	std::cout<<*surnamesList[number]<<std::endl;
	std::cout<<*yearsList[number]<<std::endl;

(*numberOfStudents)++;
}

void ClearStudents (int* numberOfStudents, char*** namesList, char*** surnamesList, int** yearsList)
{
	for(int i=0;i< *numberOfStudents;i++)
	{

		delete *namesList[i];
		delete *surnamesList[i];
	}
	delete [] *namesList;
	delete [] *surnamesList;
	delete [] *yearsList;
}