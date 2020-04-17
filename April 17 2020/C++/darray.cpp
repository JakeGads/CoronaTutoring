// This program demonstrates the use of dynamic arrays

// Joseph Traglia

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{

    /* TASK: INITIALIZE monthSales TO A NULLPTR*/
    float* monthSales;		// a pointer used to point to an array  
                            // holding monthly sales
    float  total = 0;		// total of all sales
    float  average;			// average of monthly sales
    int    numOfSales;		// number of sales to be processed
    int    count;			// loop counter

    cout << fixed << showpoint << setprecision(2);

    cout << "How many monthly sales will be processed? ";
    cin >> numOfSales;

    // TASK: Fill in the code to allocate memory for an array of floats
    // that will be pointed to by monthSales.
    monthSales = new float[numOfSales];


    //TASK: It is possible that the memory has not been allocated correctly. So for example, 
    // perhaps enough memory is not available to allocate space for monthlySales.  
    // If everything went smoothly, the pointer (here monthSales) will not be null anymore.  
    // Otherwise, the pointer will still equal nullptr.  Complete the code
    // below so that if memory has not been allocated correctly, an error message 
    //prints out and we return "1" from main.  ("1" indicates an error has occurred.)

    if (monthSales == nullptr)
    {
        cout << "Error allocating memory!\n";
        return 1;
    }

    cout << "Enter the sales below\n";

    for (count = 0; count < numOfSales; count++)
    {
        cout << "Sales for Month number "
            << (count + 1)   // TASK: Fill in code to show the number of the month 
            << ":";

        // TASK: Fill in code to bring sales into an element of the array
        cin >> monthSales[count];
    }

    for (count = 0; count < numOfSales; count++)
    {
        // TASK: Change the code below so that it uses pointer notation
        // instead of bracket notation.  (THis is just for practice).
        //total = total + monthSales[count]; //Comment this out.
        total = total + *(monthSales + count);
    }

   // TASK: Fill in code to find the average
   average =  total / numOfSales;

    cout << "Average Monthly sale  is $" << average << endl;
    
    // TASK:  Fill in the code to free/de-allocate the memory assigned to the array.
    delete [] monthSales;
    monthSales = nullptr;

    return 0;
}