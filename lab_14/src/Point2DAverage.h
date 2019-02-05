#pragma once
#include <iostream>
#include "Point2D.h"
class Point2DAverage {
public:
Point2DAverage(): _ax(0), _ay(0), _count(0) {}
Point2D operator()(const Point2D point) 
{
	_ax += point._x;
	_ay += point._y;
	_count +=1;
	return Point2D(_ax/(double)_count, _ay/(double)_count);
}
void Reset(){_ax =0; _ay=0; _count =0;}


private:
double _ax;
double _ay;
int _count;

};
