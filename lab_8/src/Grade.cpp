#include "Grade.h"

int Grade::NextFreeId =1;

Grade::Grade(double grade)
{
	this->_grade = grade;
	this->_id = NextFreeId++;
}


void Grade::print() const
{
	std::cout<<"Grade ID ="<<_id<<" value="<<_grade<<std::endl;
}