// Joseph Traglia
// Chapter 10 Programming Challenge - Median Function
// This program finds the median of a user entered array

#include <iostream>
#include <iomanip>

using namespace std;

//main driver program

double findMedian(int*, int);

int main()
{
	int* numbers = nullptr; // pointer to array
	
	int SIZE;				// size of the array

	// Dynamically allocate scores to an array of numbers
	cout << "How many numbers in the array? " << endl;
	cin >> SIZE;

	int* tempArray = new int[SIZE];
	numbers = tempArray;

	// Test for a null pointer after dynamic memory requested
	if (numbers == nullptr || SIZE < 1)
	{
		cout << "Error allocating memory!\n";
		return 1;
	}

	// Store each new number into the number array
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter a number: " << endl;
		cin >> *(numbers + i);
	}

	cout << fixed << setprecision(1);
    for (int i = 0; i < SIZE; i++)
	{
        cout << *(numbers + i) << " ";
    }
	cout << endl << "The median is " << findMedian(numbers, SIZE);

	// Free memory
	delete[] numbers;
	numbers = nullptr;

	return 0;
}

/**************************************************************
*                        findMedian                           *
* This function finds the median of the array                 *
**************************************************************/
double findMedian(int* nums, int size)
{
	double median; 

	// 1 2 3 4 8 8 
	// 0 1 2 3 4 5

	size -= 1;
	

	if (1 == size % 2)
	{
		size /= 2;
		//median = nums[size / 2] + nums[size / 2 + 1] / 2.0;
		median = *(nums + size) + *(nums + (size  + 1)) / 2.0;
	}
	else
	{
		median = 555;
		//nums[(size / 2)];
	}

	return median;
}