#pragma once
#include <iostream>
#include <stdlib.h>
#include <string.h>

//klasa realizująca funkcje na napisach
class MyString {
public:
	//zwykły konstruktor
	MyString(const char* napis): _napis(const_cast<char*>(napis)) {}

//funkcja wypisująca napis
void Print() const
{
	std::cout<<_napis<<std::endl;

}
//funkcja zwracająca napis
const char* get_napis(){return _napis;}

//operator porównania napisów
bool operator==(const MyString &napis2) const
{
	return !strcmp(this->_napis, napis2._napis);
}

//operator konkatynacji
MyString operator+(const MyString &napis2) const
{
	char * newtab  = new char[strlen(this->_napis) + strlen(napis2._napis)];
	strcpy(newtab, this->_napis);
	strcpy(newtab+strlen(this->_napis), napis2._napis);
	return newtab;
}




private:
//przechwoywany napis
char* _napis;
};

//globalny operator powielenia wyrazu
MyString operator*(int n, MyString napis)
{
	char * newtab  = new char[n*strlen(napis.get_napis())];
	for(int i=0;i<n;i++)
	{
		strcpy(newtab+strlen(newtab), napis.get_napis());
	}
	return newtab;
}
//alternatywna forma globalnego operatora powielenia wyrazu
MyString operator*(MyString napis,int n)
{
	return n*napis;
}