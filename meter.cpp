#include "meter.h"
#include <iostream>

using namespace std;

//construx:
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
