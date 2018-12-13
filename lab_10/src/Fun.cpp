#include "Fun.h"


	
int Fun::averageCount = 0;
float Fun::averageSum = 0;

Rational Fun::Add(const Rational &a,const  Rational &b)
{
	int li = a._li * b._mi + b._li * a._mi;
	int mi = a._mi * b._mi;
	return Rational(li,mi);
}
Rational Fun::Multiply(const Rational &a,const  Rational &b) 
{
	return Rational(a._li * b._li, a._mi * b._mi);
}
Rational Fun::Divide(const Rational &a, const Rational &b) 
{
	return Rational(a._li * b._mi,a._mi * b._li);
}
void Fun::Average(const Rational &a) 
{
	averageCount++;
	float addant = (float)a._li/(float)a._mi;
	averageSum = averageSum + addant;
}
float Fun::Average()
{
	return averageSum/averageCount;
}