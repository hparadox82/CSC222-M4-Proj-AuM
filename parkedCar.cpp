#include "parkedCar.h"
#include <iostream>
#include <string>

using namespace std;

parkedCar::parkedCar(std::string mk, std::string mod, std::string col, std::string lic, int mins)
//cosntrux:
{
	make = mk;
	model = mod;
	color = col;
	licensePlate = lic;
	minsParked = mins;
}
//default construx:
parkedCar::parkedCar()
{
	make = "";
	model = "";
	color = "";
	licensePlate = "";
	minsParked = 0;
}
//getters:
string parkedCar::getMake() const
{
	return make;
}
string parkedCar::getModel() const
{
	return model;
}
string parkedCar::getColor() const
{
	return color;
}
string parkedCar::getLicense() const
{
	return licensePlate;
}
int parkedCar::getMinsParked() const
{
	return minsParked;
}