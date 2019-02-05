#pragma once
#include <iostream>
#include "Point2D.h"

class Point2DSmartPtr {
public:
	Point2DSmartPtr():_ptr(nullptr) {}
	Point2DSmartPtr(Point2D *ptr):_ptr(ptr) {}
	~Point2DSmartPtr(){delete _ptr;}
	Point2D operator*(){return *_ptr;}
private:
	Point2D *_ptr;


};
