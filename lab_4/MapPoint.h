#pragma once
#define MAPCALC
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
typedef struct MapPoint{
	std::string name;
	double lati;
	double longi;
}MapPoint;

/**
 * @brief      { function_description }
 *
 * @param[in]  name   The name
 * @param[in]  lati   The lati
 * @param[in]  lengi  The lengi
 *
 * @return     { description_of_the_return_value }
 */
MapPoint *construct(std::string name, double lati, double lengi);
void print(MapPoint*);
void clear(MapPoint*);