#pragma once
#include <iostream>
#include "Odtwarzacz.h"
//Klasa abstrakcyjna orzedstawiająca urządzenie potrafiące wyświetlić zadany input w odpowiedni sposób
class Wyswietlacz {
public:
	//Konstruktor zadający wartość szerokości i długości
	Wyswietlacz(int szerokosc, int wysokosc): _szerokosc(szerokosc), _wysokosc(wysokosc) {}
	//metoda czysto wirtualna wyświetlająca zadany input
	virtual void Wyswietl(Odtwarzacz* odtwarzacz) const = 0;
protected:
	//szerokosc outputu
	int _szerokosc;
	//wysokosc outputu
	int _wysokosc;


};
