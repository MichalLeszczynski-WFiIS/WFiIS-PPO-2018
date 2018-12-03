#pragma once

#include <iostream>


/// \class Klasa MapDistance - określa dystans pomiędzy dwoma punktami.
class MapDistance{
private:

    /// \brief _latitude_diff - różnica w szerokości geograficznej miast
    double _latitude_diff;

    /// \brief _longitude_diff - różnica w długości geograficznej miast
    double _longitude_diff;
public:
    /// \brief Standrd c/s
    MapDistance();
    /// 
    /// \param latitude - różnica szerokości geograficznej
    /// \param longitude - różnica długości geograficznej
    ///  ustala atrybuty klasy na zadane wartości
    MapDistance(double latitude, double longitude);
    
    ///print - nie przyjmuje argumentóœ - wypisuje na ekranie różnice w koordynatach punktów
    void print() const;

    ///get_lati - nie przyjmuje argumentów -  pobiera wartość szerokości geograficznej
    double get_lati() const;
    ///get_longi - nie przyjmuje argumentów - pobiera wartość długości geograficznej
    double get_longi() const;

};
