#pragma once

#include <iostream>
#include <cmath>
#include "Rational.h"
//Klasa przedstawiająca liczby zespolone w postaci z = a + ib.
// Posiada niektóre operacje arytmetyczne na liczbach zespolonych, jak i podstawowy interfejs.
class Complex{
public:
	//Konstruktor przyjmujący wartość części rzeczywistej i urojonej liczby zespolonej
	Complex(const double &re, const double &im): _re(re), _im(im) {}
	//Konstruktor konwertujący liczbę typu Rational(ułamek) na liczbę zespoloną o zerowej części urojonej
	Complex(Rational re): _re(re), _im(0) {}

	//metoda wypisująca liczbę zespoloną w formacie a + ib
	void Print() const;

	//getter części urojonej liczby zespolonej
	double Im() const {return _im;}


	//metoda konwertująca liczbę zespoloną 
	operator double(){return _re;}

	//przeładowanie operatora + dla liczb zespolonych. Dodaje je we właściwiy algebraicznie sposób
	Complex operator+(const Complex &s)const {return Complex(_re+s._re, _im + s._im);}
	//przeładowanie operatora + dla liczb zespolonej i całkowitej. Dodaje je we właściwiy algebraicznie sposób
	// (liczba całkowita to liczba zespolona o zerowej części urojonej)
	Complex operator+(const int &a)const {return Complex(_re+a, _im);}
	//przeładowanie operatora * dla liczb zespolonych. Mnoży je we właściwiy algebraicznie sposób	
	Complex operator*(const Complex &s)const {return Complex(_re*s._re - _im * s._im, _re * s._im + _im * s._re);}

	//metoda zwracająca moduł liczby zespolonej 
	static double Modulo(const Complex &a){return sqrt(a._re*a._re + a._im*a._im);}

private:
	//parametr określający część rzeczywistą liczby zespolonej
	double _re;
	//parametr określająct część urojoną liczby zespolonej
	double _im;

};

/*
 error: passing ‘const Rational’ as ‘this’ argument discards qualifiers [-fpermissive]
  Complex(const Rational &re): _re(re), _im(0) {}
*/