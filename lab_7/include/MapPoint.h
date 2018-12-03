#pragma once

#include <iostream>
#include "MapDistance.h"


/// \class Klasa MapPoint - przedstawia punkt na mapie 
///(jego długość i szerokość geograficzną.)
///oraz pozwala na operacje na nim.
class MapPoint{

private: 

	///_latitude - szerokość geograficzna typu double
    double _latitude;

    ///_longitude - długość geograficzna typu double
    double _longitude;

public: 

	///set_latitude - przyjmuje argument typu double - ustawia _latitude na dany argument - zwraca void
    void set_latitude(double latitude);
    
    ///set_longitude - przyjmuje argument typu double - ustawia _longitude na dany argument - zwraca void
    void set_longitude(double longitude);
    
    ///set_coordinates - przyjmuje dwa argumenty typu double - ustawia _latitude i _longitude na odpowiednie wartości - zwraca void
    void set_coordinates(double latitude, double longitude);
    
    ///print - nic nie przyjmuje - wyświetla na ekranie koordynaty punktu - zwraca void
    void print() const;

    ///distance - przyjmuje jako argument inne miasto - liczy odległość od tego miaste - zwraca MapDistance
    MapDistance distance(MapPoint &city)const;

    ///farthest - przyjmuje jako argumenty dwa inne miasta - liczy, odległość do którego miasta jest większa - zwraca miasto (MapPoint), do którego odległość jest większa
    MapPoint &farthest(MapPoint &cityA, MapPoint &cityB)const;
};