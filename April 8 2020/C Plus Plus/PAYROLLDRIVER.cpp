// Joseph Traglia
// Chapter 8 Programming Challenge � Pay Roll Calculator
// This program calculates the Pay Roll for seven employees.

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include "PAYROLL.h"
using namespace std;

//main driver program

const int SIZE = 7;

int main()
{
	PayRoll employee[SIZE];

	double hw, hr;

	//1) Create an input file stream
	ifstream inputFile;

	//2) Open a file and link it to the file stream object
	inputFile.open("payroll.dat");

	if (inputFile.is_open())
	{
		for (int i = 0; i < SIZE; i++)
		{
			inputFile >> hw >> hr;
			employee[i].setHoursWorked(hw);
			employee[i].setHourlyRate(hr);
			cout << fixed << setprecision(2);
			cout << "Employee #" << i + 1 << "$" << employee[i].calculatePay() << endl;
		}

		// int i = 0
		// while (inputFile >> hw >> hr) //Keeps going until the end of the file.
		// {
		// 	employee[i].setHoursWorked(hw);
		// 	employee[i].setHourlyRate(hr);
		// 	cout << fixed << setprecision(2);
		// 	cout << "Employee #" << i + 1 << "$" << employee[i].calculatePay()
		// 	i++;
		// }

		inputFile.close();
	}
	else
	{
		cout << "The file did not open";
	}

	return 0;
}