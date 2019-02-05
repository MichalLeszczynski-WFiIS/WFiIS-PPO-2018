#include "Point2D.h"


std::ostream& operator<<(std::ostream &out, const Point2D &point)
{
    
    out << "Point(" << point._x << ", " << point._y << ")";
    return out; 
}

Point2D operator+(Point2D p1, Point2D p2)
{
	return Point2D(p1._x+p2._x, p1._y+p2._y);
}