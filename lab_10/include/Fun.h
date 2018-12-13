#pragma once
#include "Rational.h"


//Klasa realizująca operacje na elementach typu Rational
class Fun{
public: 
	//metoda dodająca dwie liczby typu Rational
	static Rational Add(const Rational &a,const  Rational &b);
	//metoda mnożąca dwie liczby typu Rational
	static Rational Multiply(const Rational &a,const  Rational &b);
	//metoda dzieląca dwie liczby typu Rational
	static Rational Divide(const Rational &a,const  Rational &b);
	//metoda dodająca liczbę typu Rational do sumy globalnej dla zakresu Fun
	static void Average(const Rational &a);
	//metoda licząca średnią z wcześniej zapisanych obiektów
	static float Average(); 
	//licznik elementów wchodzących w skład średniej
	static int averageCount;
	//suma elementów wchodzących w skład średniej
	static float averageSum;


};