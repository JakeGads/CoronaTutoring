// Joseph Traglia
// Ch 9/12 Programming Challenge – Adaption of numbers 6 and 7 in Ch 9 p. 656 
// This program

#include<iostream>
#include<string>
using namespace std;

// function prototypes
void selectionSort(string[], int);
int binarySearch(string[], const int, string);
string lowerCase(string);
int findMin(string[], int, int);
void swap(string[], int, int);
void display(string[], int);

int main()
{
	const int SIZE = 20;
   
    // Set up the array using the names below
	
	string names[SIZE] = { "Collins, Bill",  "Smith, Bart",  "Michalski, Joe", "Griffin, Jim",
			"Sanchez, Manny", "Rubin, Sarah", "Taylor, Tyrone", "Johnson, Jill",
			"Allison, Jeff",  "Moreno, Juan", "Wolfe, Bill",    "Whitman, Jean",
			"Moretti, Bella", "Wu, Eric",     "Patel, Renee",   "Harrison, Rose",
			"Smith, Cathy",   "Conroy, Pat",  "Kelly, Sean",    "Holland, Beth" };
    string choice;

    cout << "Enter a name (last name, first name): " << endl;
    getline(cin, choice);
    
    selectionSort(names, SIZE);
    display(names, SIZE);
    cout << "We found " << choice << " at location " << binarySearch(names, SIZE, choice);

	return 0;
   
} // End main function

/**************************************************************
 *                     selectionSort                          *
 * This function performs a selection sort on a string array  *
 **************************************************************/
void selectionSort(string names[], int size)
{
    // int seek;         // array position currently being put in order
    // int minPosition;  // location of smallest value found
    // int minValue;     // holds the smallest value found
    // int start = 0;

    // for (int i = 0; i < (size - 1); i++)  
    // {
    //     minPosition = findMin(names, size, start);
    //     start++;
    //     // Swap the value of the current value at position i and the value at minPosition.
    //     swap(names[i], names[minPosition]);
    //     display(names, size);
    // }

    int i, j, min_idx;  
  
    // One by one move boundary of unsorted subarray  
    for (i = 0; i < size-1; i++)  
    {  
        // Find the minimum element in unsorted array  
        min_idx = i;  
        for (j = i+1; j < size; j++)  
            if (names[j].compare(names[min_idx]) < 0){
                min_idx = j;  
            }
        // Swap the found minimum element with the first element  
        swap(names, i, min_idx);
    }
}

/**************************************************************
 *                      binarySearch                          *
 * This function is used to find the spot in the array of     *
 * the word entered into the function parameter.              *
 **************************************************************/
int binarySearch(string names[], const int size, string value) //V
{
    int first = 0;          // First array element
    int last = size - 1;    // Last array element
    int middle;             // Midpoint of search
    int position = -1;      // Position of search value
    bool found = false;     // Flag to indicate if the value was found

    while (!found && first <= last)
    {
        middle = (first + last) / 2;
        if (lowerCase(names[middle]).compare(lowerCase(value)) == 0)
        {
            found = true;
            position = middle;
        }
        if (names[middle].compare(value) > 0)
        {
            last = middle - 1;
        }
        else
        {
            first = middle + 1;
        }
    }

    return position;
}

string lowerCase(string initial)
{
    string value = "";
    for(int i = 0; i < initial.size(); i++){
        value += tolower(initial.at(i));
    }
    return value;
}

/**************************************************************
 *                         findMin                            *
 * This function locates the smallest value in the array      *
 **************************************************************/
int findMin(string names[], int size, int start) // V
{
    // need to stringify
    int minPosition = start;

    for (int i = start; i < size; i++)
    {
        if (names[minPosition] > names[i])
        {
            minPosition = i;
        }
    }

    return minPosition;
}

/**************************************************************
 *                           swap                             *
 * This function swaps two values                             *
 **************************************************************/
void swap(string arr[], int one, int two) // V
{
    // need to stringify
	string temp = arr[one];
    arr[one] = arr[two];
    arr[two] = temp;
}

/**************************************************************
 *                         display                            *
 * This function displays the array                           *
 **************************************************************/
void display(string names[], int size) // V
{
    for (int count = 0; count < size; count++)
    {
        cout << names[count] << "  ";
    }
    cout << endl;
}