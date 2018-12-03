#pragma once

#include <iostream>

class Student{
public:
static int nextFreeId;
Student(std::string name, std::string surname) : _name(name), _surname(surname), _id(nextFreeId++), _next(nullptr) {}
Student *&get_next() {return _next;}

void Print();

private:
std::string _name;
std::string _surname;
int _id;
Student* _next;
};