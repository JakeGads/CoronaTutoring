#include "PAYROLL.h"

//Joseph Traglia

//Constructors
PayRoll::PayRoll()
{
	hourlyRate = 0;
	hoursWorked = 0;
}

PayRoll::PayRoll(double r, double w)
{
	hourlyRate = r;
	hoursWorked = w;
}

// setters
void PayRoll::setHourlyRate(double h)
{
	hourlyRate = h;
}
void PayRoll::setHoursWorked(double w)
{
	hoursWorked = w;
}

// getters

double PayRoll::getHourlyRate()
{
	return hourlyRate;
}

double PayRoll::getHoursWorked()
{
	return hoursWorked;
}

//Implementations of Class Methods

double PayRoll::calculatePay()
{
	double grossPay = hourlyRate * hoursWorked;
	return grossPay;
}

/*
PayRoll();
PayRoll(double, double);
//setters
void setHourlyRate(double);
void setHoursWorked(double);
//getters
double getHourlyRate();
double getHoursWorked();

double calculatePay();
*/