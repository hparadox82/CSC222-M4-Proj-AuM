#include "ticketPark.h"
#include "parkedCar.h"
#include "police.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//constructor
ticketPark::ticketPark(const parkedCar& illegparkedCar, const Police& issueOfficer, int minsOver)
{
	//copying car info:
	carMake = illegparkedCar.getMake();
	carModel = illegparkedCar.getModel();
	carColor = illegparkedCar.getColor();
	carLicensePlate = illegparkedCar.getLicense();

	//copying officer info:
	name = issueOfficer.getName();
	badgeNum = issueOfficer.getBadgeNum();

	minsIllegPark = minsOver;
	fineAmt = calcfineAmt(minsIllegPark);
}
//helper:
double ticketPark::calcfineAmt(int minsOver)
{
	//no fine if not exceeded
	if (minsOver <= 0)
	{
		return 0.0;
	}
	//otherwise...
	const double baseFine = 25.0;
	const double addhrFine = 12.0;

	//calculate:
	double hoursOver = ceil(static_cast<double>(minsOver) / 60.0);
	return baseFine + (hoursOver * addhrFine);
}

//print ticket function
void ticketPark::printTicket() const
{
	//FORMATTING:
	const int LBW = 25;
	cout << "\n\n========| VIOLATION NOTICE ISSUED: |========" << endl;
	cout << left << setw(LBW) << "REPORTING OFFICER: " << name << "/BADGE NO." << badgeNum << "\n============================================" << endl;
	cout << left << setw(LBW) << "VEHICLE: " << carMake << " " << carModel << ";" << " COLOR: " << carColor << endl;
	cout << left << setw(LBW) << "VEHICLE LICENSE PLATE: " << carLicensePlate << "\n============================================" << endl;
	cout << left << setw(LBW) << "MINUTES OVER: " << minsIllegPark << "\n\n" << endl;
	cout << left << setw(LBW) << "FINE AMOUNT: $" << fineAmt << "\nFines may be paid with the attendant at the parking booth.\nFailure to pay may result in towing and administrative fees or legal action." << endl;




}