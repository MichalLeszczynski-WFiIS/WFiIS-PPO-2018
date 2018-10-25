#pragma once

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;
typedef struct MapPoint{
	string name;
	double lati;
	double longi;
}MapPoint;

MapPoint *construct(string name, double lati, double lengi);
void print(MapPoint*);
void clear(MapPoint*);