#pragma once

#include <iostream>

	
class Grade{
public:
	static int NextFreeId;
	Grade(){}
	Grade(double grade);
	void print() const;
private: 
	double _grade;
	int _id;
	


};