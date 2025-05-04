#pragma once
#ifndef METER_H
#define METER_H

#include <iostream>

class parkMeter
{
private:
	int minsBuy;

public:
	//constructor:
	parkMeter(int mins);
	
	//default constructor:
	parkMeter();

	//getter:
	int getMinsBuy() const;

};

#endif

/*//----PARKING METER CLASS: ----\\

//construx
parkMeter::parkMeter(int mins)
{
	minsBuy = mins;
}
//default construx:
parkMeter::parkMeter()
{
	minsBuy = 0;
}
//getter:
int parkMeter::getMinsBuy() const
{
	return minsBuy;
}
//-----------------------------//
*/