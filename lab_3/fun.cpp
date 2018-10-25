#include "lab03.h"

ciag InicjalizujCiagGeometryczny (rozmiarCiagu rozmiar,float iloraz)
{
	ciag geo = (float*)malloc(rozmiar*sizeof(float));
	alokacje[licznikAlokacji] = geo;
	licznikAlokacji++;
	geo[licznikAlokacji ] = 1;
	for(int i = 1;i<rozmiar;i++)
		{
			geo[i] = geo[i-1]*iloraz;
		}
	return geo;
}


void Wypisz(ciag geo,rozmiarCiagu rozmiar)
{
printf("(");

for(int i=0 ;i<rozmiar;i++)
	{
		std::cout<<geo[i];
		if(i<rozmiar-1)
		{
			printf(", ");
		}
	}

printf(")\n");

}



float Suma(ciag geo, rozmiarCiagu rozmiar)
{
float suma = 0;
for(int i=0;i<rozmiar;i++)
	{
		suma+=geo[i];
	}
return suma;
}

float Iloczyn(ciag geo, rozmiarCiagu rozmiar)
{
float iloczyn = 1;
for(int i=0;i<rozmiar;i++)
	{
		iloczyn*=geo[i];
	}
return iloczyn;
}

float Max(ciag geo, rozmiarCiagu rozmiar)
{
float max = geo[0];
for(int i=1;i<rozmiar;i++)
	{
		if(geo[i]<max)
		{
			max = geo[i];
		}
	}

return max;
}

float Min(ciag geo, rozmiarCiagu rozmiar)
{
float min = geo[0];
for(int i=1;i<rozmiar;i++)
	{
		if(geo[i]>min)
		{
			min = geo[i];
		}
	}

return min;
}


void WykonajIWypisz(operacja dzialanie, ciag geo, rozmiarCiagu rozmiar)
{
	if(dzialanie==Suma)
	{printf("suma: ");}
	else if(dzialanie==Iloczyn)
	{printf("iloczyn: ");	}
	else if(dzialanie==Max)
	{printf("maksimum:");	}
	else if(dzialanie==Min)
	{printf("minimum:");	}

printf("%d \n" ,(int)dzialanie(geo,rozmiar));
}

void UsunCiagi()
{
	for(int i=0;i<licznikAlokacji;i++)
	{
		free(alokacje[i]);
	}
}