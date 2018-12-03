#include "StudentList.h"



StudentsList::StudentsList(const StudentsList &list) : _name(list.get_name()), _length(0) 
{
	Student *tmp = list._head;
	while(tmp)
	{
		AddStudent(tmp);
		tmp=tmp->get_next();
	}
}

void StudentsList::PrintInfo()
{
	std::cout<< "Students list: "<<_name<<std::endl;
}
void StudentsList::AddStudent(Student *student)
{

	if(_length == 0)
	{
		_head = student;
		_head->get_next() = nullptr;
	}
	else
	{
		Student* tmp = _head;
		while(tmp->get_next())
		{
		tmp=tmp->get_next();
		}
		tmp->get_next() = student;
	}

}
void StudentsList::PrintAll()
{
Student *tmp = _head;
	while(tmp)
	{
		tmp->Print();
		tmp=tmp->get_next();
	}
}
void StudentsList::Clear()
{
	Student *tmp = _head;
	Student *tmp2;
	while(tmp)
	{
		tmp2=tmp;
		tmp=tmp->get_next();
		delete tmp2;
	}
}