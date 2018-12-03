#pragma once

#include <iostream>
// class Student;
#include "Student.h"
class StudentsList{
public:

StudentsList(std::string name) : _name(name), _length(0) {}
StudentsList(const StudentsList &list);
~StudentsList(){}
void PrintInfo();
void AddStudent(Student *student);
void PrintAll();
void Clear();
std::string get_name() const {return _name;}

private:
std::string _name;
Student* _head;
int _length;

};