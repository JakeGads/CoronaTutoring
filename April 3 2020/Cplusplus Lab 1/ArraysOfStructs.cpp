#include <iostream>
#include <iomanip>

using namespace std;


// This program demonstrates how to use an array of structures.
// Follow the comments to create a structure called taxPayer, 
// to get information from the user about the tacPayer's income
// and tax rate.  You'll also use this information to set the 
// each taxPayer's total taxes owed.

// PLACE YOUR NAME HERE

// TASK:  Fill in code to define a structure called taxPayer that has three 
// members:  taxRate, income, and taxes -- each of type float


int main()
{
   // TASK:  Fill in code to declare an array named citizen which holds
   // 5 taxPayers structures

	cout << fixed << showpoint << setprecision(2);

	cout << "Please enter the annual income and tax rate for 5 tax payers: ";
	cout << endl << endl << endl;

	// TASK:  Fill in the ??? below.
	for(int count = 0;count < 5;count++)
	{

		cout << "Enter this year's income for tax payer " << (count + 1);
		cout << ": ";
		
		// TASK:  Fill in code to read in the income to the appropriate place

		cout << "Enter the tax rate for tax payer # " << (count + 1);
		cout << ": ";
		
		// TASK:  Fill in code to read in the tax rate to the appropriate place

		// TASK:  Fill in code to compute the taxes for the citizen and store it
		// in the appropriate place

	   
		cout << endl;
	}

	cout << "Taxes due for this year: " << endl << endl;

	// TASK:  Fill in code for the first line of a loop that will output the 
	// tax information
	{
		//TASK:  Fill in the ????'s to print out the taxes of the i-th citizen here.
		cout << "Tax Payer # " << (index + 1) << ": " << "$ "
			 << "????" << endl;
	}

	return 0;
}
