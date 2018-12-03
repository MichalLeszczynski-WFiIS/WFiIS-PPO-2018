#include "Student.h"

int Student::nextFreeId =0;

void Student::Print()
{
	std::cout << "Student " << _id << ": "<< _name << ", "<< _surname << std::endl;
}