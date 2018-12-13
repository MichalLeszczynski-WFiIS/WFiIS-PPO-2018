#pragma once
#include <iostream>

class Fun;
//Klasa umożliwiająca operacje na liczbach wymiernych w postaci ułamkowej
//zawiera pola: _li - licznik - liczba całkowita
//_mi - mianownik - liczba - liczba całkowita
class Rational{
	friend class Fun;
public:
//Konstruktor podstawowy przypisuje argumenty do pól klasy
Rational(int li, int mi): _li(li), _mi(mi) {}
//konstruktor konwertujący liczbę typu int na odpowiadajy ułamek typu Rational
Rational(int a): _li(a), _mi(1) {}
//konwerter obiektu typu Rational na odpowiadającą liczbe float
operator float(){return ((float)_li)/((float)_mi);}
//metoda wypisująca liczbę w postaci ułamkowej
void Print() const;

private:
//patametr opisujący licznik liczby wymiernej
int _li;
//parametr opisująct mianownik liczby wymiernej
int _mi;


};