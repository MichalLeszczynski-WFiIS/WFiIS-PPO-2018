// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na końcu tego
// pliku.

// Prosze napisac klase MapPoint, ktora reprezentuje punkt na
// mapie skladajacy sie z dlugosci (longitude) i szerokosci
// (latitude) geograficznej bez oznaczania polkol.

// Prosze napisac klase MapDististance reprezentuje odleglosc pomiedzy dwoma
// punktami. Odleglosc wzdloz poludnikow lub rownoleznikow nalezy
// obliczyc po prostu odejmujac od siebie wspolrzedne punktow
// poczatkowego i koncowego.

// Metody 
// - set_latitude(x)
// - set_longitude(y)
// - set_coordinates(x,y)
// klas MapPoint oraz MapDististance ustawiaja 
// dlugosc i szerokosc geogreficzna punktu na podstawie 
// zadanych argumentów, ktore przyjmują. W przypadku MapDististance, przekazane
// argumenty określają odleglosc miedzy punktami.

// Metoda print klasy MapPoint wypisuje na ekran, ze jest to punkt i
// podaje jego wspolrzedne w nawiasach okraglych.

// Metoda print klasy MapDististance wypisuje na ekran, informacje o odleglosci
// (przechowaywanej w zmiennych badacych skladowymi tej klasy)
// miedzy dwoma punktami w nawiasach okraglych.

// Metoda farthest klasy MapPoint, zwraca punkt bedacy najdalej punktu na rzecz
// ktorego zostala wywolana metoda. Odleglosc pomiedzy punktami nalezy
// obliczyc jako pierwiastek sumy kwadratow roznic, czyli
// r = sqrt(delta_dlugosc*delta_dlugosc + delta_szerokosc*delta_szerokosc)
// Funkcja obliczajaca pierwiastek nazywa sie: 
// sqrt(double) i znajduje sie w bibliotece "cmath".

// Pliku Main.cpp, nie wolno modyfikowac.

// Ostateczny program powinien byc przyjazny dla programisty (miec
// czytelny i dobrze napisany kod). 

// Makefile (lub CMakeLists.txt) dolaczony do rozwiazania powinien tworzyc plik wykonywalny
// o nazwie Mapa. Program nalezy kompilowac z flagami -Wall -g.

// Przy wykonaniu zadania nie wolno korzystac z internetu, notatek,
// ani zadnych innych materialow (w tym własnych wczesniej
// przygotowanych plikow oprócz Makefile lub CMakeLists.txt)

// Kody zrodlowe musza znajdowac sie w katalogu do ktorego nikt oprocz
// wlasciciela nie ma praw dostepu.


#include <iostream>
#include "MapPoint.h"

int main() {
  using std::cout;

  cout<<"========== KRK ========================\n";
  MapPoint krk;
  krk.set_latitude(19.938333);
  krk.set_longitude(50.061389);
  krk.print();

  cout<<"========== NYC ========================\n";
  const double nyc_latitude = 40.7127;
  const double nyc_longitude = -74.0059;
  MapPoint nyc;
  nyc.set_coordinates(nyc_latitude, nyc_longitude);
  nyc.print();

  cout<<"========== PORTO & IRKUTSK ============\n";
  MapPoint porto;
  porto.set_coordinates(41.162142, -8.621953);
  porto.print();
  MapPoint irkutsk;
  irkutsk.set_coordinates(52.283333, 104.283333);
  irkutsk.print();

  cout<<"========== DISTANCE ===================\n";
  MapDistance nyc_porto;
  nyc_porto.print();
  nyc_porto = nyc.distance(porto);
  nyc_porto.print();

  cout<<"========== FARTHEST ===================\n";
  krk.farthest(porto, irkutsk).print();

  return 0;
}

/** Wynik dzialania programu:
brachwal@vbox:[build]$ ./Mapa 
========== KRK ========================
Point: (19.9383, 50.0614)
========== NYC ========================
Point: (40.7127, -74.0059)
========== PORTO & IRKUTSK ============
Point: (41.1621, -8.62195)
Point: (52.2833, 104.283)
========== DISTANCE ===================
Distance : (0, 0)
Distance : (0.449444, 65.3839)
========== FARTHEST ===================
Point: (52.2833, 104.283)

*/