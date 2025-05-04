#include "police.h"
#include "parkedCar.h"
#include "meter.h"
#include "ticketPark.h"
#include <iostream>

using namespace std;

Police::Police(std::string n, std::string badge)
{
	name = n;
	badgeNum = badge;
}

//get:
string Police::getName() const
{
	return name;
}

string Police::getBadgeNum() const
{
	return badgeNum;
}

//"input" validation / police logic using ticketPark:
bool Police::insp(const parkedCar& car, const parkMeter& meter)
{
	//calling inspector gadget:
	cout << "Officer " << name << ", Badge No. " << badgeNum << endl;
	cout << "INSPECTING VEHICLE LICENSE PLATE: " << car.getLicense() << endl;

	//gets minutes bought and parked:
	int minsParked = car.getMinsParked();
	int minsBuy = meter.getMinsBuy();

	cout << "Minutes parked: " << minsParked << endl;
	cout << "Minutes bought: " << minsBuy << endl;

	//checking if car parking is within purchased window:
	if (minsParked > minsBuy)
	{
		int minsDiff = minsParked - minsBuy;
		cout << "CAR PARKED " << minsDiff << " MINUTES OVER TIME BOUGHT.\nISSUE VIOLATION." << endl;

		//makes ticket:
		ticketPark* ticket = new ticketPark(car, *this, minsDiff);
		ticket->printTicket();

		//memory mgmt:
		delete ticket;
		ticket = nullptr;

		return true;
	}
	else
	{
		cout << "Car is within bought parking time. No ticket issued." << endl;
		return false;
	}

}