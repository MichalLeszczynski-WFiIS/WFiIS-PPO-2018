#pragma once
#include <iostream>
#include "Odtwarzacz.h"


//Klasa przedstawiajaca odtwarzacz dvd. Dziedziczy po odtwarzaczu. 
class OdtwarzaczDVD : public  Odtwarzacz{
public:
	//konstruktor wywolujacy konstruktor klasy bazowej i nadajacy nazwe odtwarzaczowi
OdtwarzaczDVD(char znak): Odtwarzacz(znak), _name("OdtwarzaczDVD") {}
//metoda zwracajaca nazwe odtwarzacza
 	const char* get_name(){return _name;} 
private:
	//nazwa odtwarzacza
	const char* _name;



};
