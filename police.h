#pragma once
#ifndef POLICE_H
#define POLICE_H
#include <string>
#include <iostream>

//fwd declaration of car/meter/parking ticket to avoid circular include:
class parkedCar;
class parkMeter;
class ticketPark;

class Police
{
private:
	std::string name;
	std::string badgeNum;

public:
	//constructor:
	Police(std::string n, std::string badge);
	//get:
	std::string getName() const;
	std::string getBadgeNum() const;

	//"input" validation / police logic using ticketPark:
	bool insp(const parkedCar& car, const parkMeter& meter);

};

#endif

/*//----POLICE OFFICER CLASS: ----\\

//construx:*/