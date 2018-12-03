#include "MapDistance.h"


MapPoint *inTheMiddle(MapPoint *location1, MapPoint *location2, std::string name)
{
	return construct(name, (location1->lati + location2->lati )/2, (location1->longi + location2->longi )/2);
}

void movePoint(MapPoint *location, double latiShift, double longiShift)
{
location->lati += latiShift;
location->longi += longiShift;
}