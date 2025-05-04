//CSC222 M4 Project - Au M. I spent hours writing this just to realize I never once made a repo. So after getting done with testing and subsequently
//finding out I never made a repo, I made one. I love my squirrel brain.
#include "parkedcar.h"
#include "meter.h"
#include "police.h"
//ticketPark.h handled by police.h!

#include <iostream>
#include <string>
using namespace std;

int main()
{
	//info:
	cout << "Welcome to Anycity Municipal Parking. Please purchase your required amount of time.\nAny overage will result in a base $25 fine plus $12 for every hour parked in violation.\n\n";
	//test 1:
	cout << "TEST 1: LEGAL PARKING" << endl;
	parkedCar car1("Mazda", "RX-7", "Silver", "Z31460", 30);
	parkMeter meter1(60);
	Police officer1("Arizona Ranger", "122021");
	officer1.insp(car1, meter1);
	cout << "\n\n";

	//test 2:
	cout << "TEST 2: ILLEGAL PARKING" << endl;
	parkedCar car2("Kia", "Soul", "Green", "SLODOWN", 95);
	parkMeter meter2(60);
	officer1.insp(car2, meter2);
	cout << "\n\n";

	//test 3:
	cout << "TEST 3: RIGHT AT THE LIMIT!" << endl;
	parkedCar car3("Corvega", "Atomic", "Blue", "GNR2077", 60);
	parkMeter meter3(60);
	Police officer2("Sarah Lyons", "BOSLP-002E");
	officer2.insp(car3, meter3);
	cout << "\n\n";

	//test 4:
	cout << "TEST 4: EXTREME OVERTIME" << endl;
	parkedCar car4("Fodge", "D-100", "Red", "J4M35M", 120);
	parkMeter meter4(60);
	officer1.insp(car4, meter4);
	cout << "\n\n";

	//test 5:
	cout << "TEST 5: USER INPUT" << endl;
	string userMake, userModel, userCarColor, userLicensePlate;
	int userParkMins = 0;
	cout << "Enter your vehicle details:" << endl;
	cout << "[MAKE, MODEL, COLOR, LICENSE PLATE, MINUTES PURCHASED]" << endl;
	cin >> userMake >> userModel >> userCarColor >> userLicensePlate >> userParkMins;
	parkedCar userCar(userMake, userModel, userCarColor, userLicensePlate, userParkMins);
	parkMeter meter5(60);
	officer2.insp(userCar, meter5);
	cout << "\n\n";

	return 0;
}
