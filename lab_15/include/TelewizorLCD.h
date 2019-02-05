#pragma once
#include <iostream>
#include "Wyswietlacz.h"
//klasa wyswietlajaca input na ekranie. dziedziczy po klasie Wyswietlacz
class TelewizorLCD : public Wyswietlacz{
public:
	//konstruktor inicjalizujący wartosci szerokosci i dlugosci elementow do wyswietlenia
	TelewizorLCD(int a, int b): Wyswietlacz(a, b) {}
	//metoda wyswietlajaca okreslony input
	void Wyswietl(Odtwarzacz* odtwarzacz) const;
	
	

};
