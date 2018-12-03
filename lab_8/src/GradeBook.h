#pragma once
#include "Grade.h"
#include <iostream>


class GradeBook{
public:
	GradeBook();
	~GradeBook();
	void insert(Grade *grade);
	void insert(const Grade *grade);
	void addGrade(double value);
	void print() const;

private:
	int _gradesCount;
	int _cgradesCount;
	Grade **_grades;
	const Grade **_cgrades;
};