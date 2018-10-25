/*
 * 0.    Prosze sprobowac skompilowac program 'manualnie' - bez uzycia programu make.
 * 1.    Prosze napisac podstawowy makefile, w ktorym jawnie beda wypisane cele i zaleznosci
 * 1.1   Prosze przypisac flage -O kompilatora do zmiennej CFLAGS
 * 1.1.1 Wykonać test z wykorzystaniem time -v ./program
 * 1.3   Prosze przypisac flage -E kompilatora do zmiennej CFLAGS, jake są tego efekty?
 * 1.4   Prosze przypisac flage -g kompilatora do zmiennej CFLAGS
 * 1.4.1 Jak jest roznica z kompilacja bez flagi -g? 
 * 1.4.2.Wykonać test z wykorzystaniem nm -a
 * 1.5.  Co spowoduje dodanie flagi -DNDEBUG do CFLAGS? Odkomentować linie assert(5==3);
 * 1.6.  Makefile generyczny
 * 
 */
#include<iostream>
#include"Suma2.h"
#include"PolozeniePoczatkowe.h"
#include"Czas.h"
#include"Przyspieszenie.h"
#include"Predkosc.h"

#include"assert.h"

int main ()
{
  using namespace std;
  
#ifndef NDEBUG
  cout<<"This is debug version!\n";
#endif

  //assert(5==3);

#ifdef WELCOME
  cout<<"Good day to you sir!\n";
#endif
  
  cout<<"a = "<<Przyspieszenie()<<"\n";
  cout<<"v = "<<Predkosc()<<"\n";
  cout<<"r_0 = "<<PolozeniePoczatkowe()<<"\n";
  cout<<"t = "<<Czas()<<"\n";

  cout<<"r = a*t^2/2 + v*t + r_0 = "<<Suma2()<<"\n";

  return 0;
}
