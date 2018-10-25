#include <stdlib.h>
#include <stdio.h>
#include <iostream>
typedef int rozmiarCiagu;
typedef float* ciag; 
typedef float(*operacja)(ciag,rozmiarCiagu);

float* alokacje[15];
int licznikAlokacji = 0;

ciag InicjalizujCiagGeometryczny (rozmiarCiagu,float);
void Wypisz(ciag, rozmiarCiagu);
float Suma(ciag, rozmiarCiagu);
float Iloczyn(ciag , rozmiarCiagu );
float Max(ciag , rozmiarCiagu );
float Min(ciag , rozmiarCiagu );
void WykonajIWypisz(operacja, ciag, rozmiarCiagu);
void UsunCiagi();
