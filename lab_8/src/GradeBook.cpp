#include "GradeBook.h"
GradeBook::GradeBook()
{
	_gradesCount = 0;
	_cgradesCount =0;
	_grades=NULL;
	_cgrades=NULL;
}

GradeBook::~GradeBook()
{
	for(int i=0;i<_gradesCount;i++)
	{
		delete _grades[i];
	}
	for(int i=0;i<_cgradesCount;i++)
	{
		delete _cgrades[i];
	}
	delete [] _grades;
	delete [] _cgrades;
}


void GradeBook::insert(Grade *grade)
{
	
	if(_gradesCount==0)
	{
		_grades = new Grade*[_gradesCount+1];
		_grades[_gradesCount] = grade;
	}
	else
	{
		Grade **oldGrades = new Grade*[_gradesCount];
		for(int i=0;i<_gradesCount;i++)
		{
			oldGrades[i] = _grades[i];
		}
		delete [] _grades;
		_grades = new Grade*[_gradesCount+1];
		for(int i=0;i<_gradesCount;i++)
		{
			_grades[i] = oldGrades[i];
		}
		delete[] oldGrades;
		_grades[_gradesCount] = grade; 
	}	
	_gradesCount+=1;
	
}


void GradeBook::insert(const Grade *grade)
{
	
	if(_cgradesCount==0)
	{
		_cgrades = new const Grade*[_cgradesCount+1];
		_cgrades[_cgradesCount] = grade;
	}
	else
	{
		const Grade **oldGrades = new const Grade*[_cgradesCount];
		for(int i=0;i<_cgradesCount;i++)
		{
			oldGrades[i] = _cgrades[i];
		}
		delete [] _cgrades;
		_cgrades = new const Grade*[_cgradesCount+1];
		for(int i=0;i<_cgradesCount;i++)
		{
			_cgrades[i] = oldGrades[i];
		}
		delete[] oldGrades;
		_cgrades[_gradesCount] = grade; 
	}	
	_cgradesCount+=1;
	
}



void GradeBook::addGrade(double value)
{
	Grade *grade = new Grade(value);
	insert(grade);
}


void GradeBook::print() const 
{
	std::cout<<"Grades in the book:"<<std::endl;
	for(int i=0;i<_gradesCount;i++)
	{
		_grades[i]->print();
	}
	for(int i=0;i<_cgradesCount;i++)
	{
		_cgrades[i]->print();
	}
}