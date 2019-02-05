#pragma once
#include <iostream>
#include "Odtwarzacz.h"

//Klasa przedstawiajaca komputer. Dziedziczy po odtwarzaczu. 
class Komputer : public  Odtwarzacz {
public:
	//konstruktor wywolujacy konstruktor klasy bazowej i nadajacy nazwe komputerowi
 Komputer(char znak): Odtwarzacz(znak), _name("Komputer") {}
 //metoda zwracajaca nazwe komputera
 	const char* get_name(){return _name;}
private:
	//nazwa komputera	
	const char* _name;
};
