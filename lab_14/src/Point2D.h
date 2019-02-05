#pragma once


#include <iostream>

class Point2D {
 friend std::ostream& operator<<(std::ostream &out, const Point2D &point);
 friend Point2D operator+(Point2D p1, Point2D p2);
 friend class Point2DAverage;
public:
	Point2D(double x, double y): _x(x), _y(y) {}
	Point2D(double num): _x(num), _y(num) {}
	Point2D(): _x(0), _y(0) {}
	Point2D operator++(int i)
	{

		Point2D temp(this->_x, this->_y);
 	          this->_x+=1;
  	         this->_y+=1;
  	         return temp ;
	}
	Point2D operator--()
	{
 	          this->_x-=1;
  	         this->_y-=1;
  	         return Point2D(this->_x, this->_y);
	}






private:
	double _x;
	double _y;


};
std::ostream& operator<<(std::ostream &out, const Point2D &point);
Point2D operator+(Point2D p1, Point2D p2);


