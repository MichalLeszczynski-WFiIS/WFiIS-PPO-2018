#include "MapDistance.h"


MapDistance::MapDistance()
{
    _latitude_diff = 0;
    _longitude_diff = 0;
}

 MapDistance::MapDistance(double latitude, double longitude)
 {
 	this->_latitude_diff = latitude;
 	this->_longitude_diff = longitude;
 }

void MapDistance::print() const
{
    std::cout<<"Distance: ("<<_latitude_diff<<", "<<_longitude_diff<<") "<<std::endl;
}
double MapDistance::get_lati() const
{
    return _latitude_diff;
}
double MapDistance::get_longi() const
{
    return _longitude_diff;
}