#pragma once

#ifndef TICKETPARK_H
#define TICKETPARK_H

#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
//includes parkedcar to draw references for ticket
#include "parkedcar.h"

//fwd declaration 
class Police;

class ticketPark
{
private:
	//copied from car and officer 
	std::string carMake;
	std::string carModel;
	std::string carColor;
	std::string carLicensePlate;
	std::string name;
	std::string badgeNum;

	//number for how many minutes parked over and calculated fine:
	int minsIllegPark;
	double fineAmt;
	//calculates fine
	double calcfineAmt(int minsOver);

public:
	//constructor
	ticketPark(const parkedCar& illegparkedCar, const Police& issueOfficer, int minsOver);

	//print ticket function
	void printTicket() const;

};

#endif