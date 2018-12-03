#include "MapPoint.h"

MapPoint *construct(std::string name, double lati, double longi)
{
	MapPoint *location = (MapPoint*)malloc(sizeof(MapPoint));
	location->name = name;
	location->lati = lati;
	location->longi = longi;
	return location;
}



void print(MapPoint *location)
{
std::cout<<"Position of "<<location->name<<". Latitude: "<<location->lati<<". Longitude: "<< location->longi<<std::endl;
}
void clear(MapPoint* location)
{
	free(location);
}
