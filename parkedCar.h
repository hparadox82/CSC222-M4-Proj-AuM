#pragma once

#ifndef PARKEDCAR_H
#define PARKEDCAR_H
#include <string>
#include <iostream>

class parkedCar
{
private:
	std::string make;
	std::string model;
	std::string color;
	std::string licensePlate;
	int minsParked;

public:
	//constructor:
	parkedCar(std::string mk, std::string mod, std::string col, std::string lic, int mins);

	//default constructor:
	parkedCar();
	//getters:
	std::string getMake() const;

	std::string getModel() const;

	std::string getColor() const;

	std::string getLicense() const;

	int getMinsParked() const;

};
#endif