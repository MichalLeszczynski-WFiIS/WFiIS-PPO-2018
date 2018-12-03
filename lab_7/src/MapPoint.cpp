    #include "MapPoint.h"
    #include <cmath>
 
    void MapPoint::set_latitude(double latitude)
    {
        _latitude = latitude;
    }
    void MapPoint::set_longitude(double longitude)
    {
        _longitude = longitude;
    }
    void MapPoint::set_coordinates(double latitude, double longitude)
    {
        set_latitude(latitude);
        set_longitude(longitude);
    }
  
    void MapPoint::print() const
    {
        std::cout<<"Point: ("<<_latitude<<", "<<_longitude<<")"<<std::endl;
    }
    MapDistance MapPoint::distance(MapPoint &city) const
    {
        double latitude_diff = city._latitude - this->_latitude;
        if(latitude_diff<0) latitude_diff = 0-latitude_diff;
        
        double longitude_diff = city._longitude - this->_longitude;
        if(longitude_diff<0) longitude_diff = 0-longitude_diff;

        MapDistance result_distance(latitude_diff, longitude_diff);
        return result_distance;
    }
    MapPoint &MapPoint::farthest(MapPoint &cityA, MapPoint &cityB) const
    {
        MapDistance distToA = this->distance(cityA);
        double distA = sqrt(distToA.get_lati() * distToA.get_lati() + distToA.get_longi() * distToA.get_longi());

          MapDistance distToB = this->distance(cityB);
        double distB = sqrt(distToB.get_lati() * distToB.get_lati() + distToB.get_longi()    * distToB.get_longi());
 

        if(distB < distA)
            return cityA;
        else
            return cityB;
        
    }