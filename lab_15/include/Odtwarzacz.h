#pragma once
#include <iostream>

//klasa abstrakcyjna przechowująca znak
class Odtwarzacz {
public:
	//Konstruktor incjalizujący znak
	Odtwarzacz(char znak): _znak(znak) {}
	//metoda zwracająca znak
	char get_znak() const {return _znak;}
	//metoda wirtualna zwracająca imie odtwazacza (zdefiniowane w klasach pochodnych)
	virtual const char* get_name() =0;
protected:
	//znak do odtwarzania
	char _znak;

};
