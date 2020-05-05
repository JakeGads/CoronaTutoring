// Joseph Traglia
// Ch 9/12 Programming Challenge – Adaption of numbers 6 and 7 in Ch 9 p. 656 
// This program requires the user to enter a name, then searches for the name in the array

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

    
    cout << "The names in alphabetical order are as follows." << endl;
    cout << "***********************************************" << endl;

    selectionSort(names, SIZE);
    for (int i = 0; i < SIZE; i++) {
        cout << i << ": " << names[i] << " " << lowerCase(names[i]) << "  UPPERCASE: " << binarySearch(names, SIZE, names[i])
            << " lowercase: " << binarySearch(names, SIZE, lowerCase(names[i])) << endl;
        //cout << i << "\t" << names[i] << "\t" << lowerCase(names[i]) << "\t" << lowerCase("Taylor, Tyrone").compare(lowerCase(names[i])) << endl;
    }
    // display(names, SIZE);
    /*
    cout << "***********************************************" << endl;

    cout << "Please enter the name (last name, first name) you would like to search for: " << endl;
    getline(cin, choice);

    cout << choice << " can be found at location " << binarySearch(names, SIZE, choice) + 1 << " in the array." << endl;
    */
    
    return 0;
   
} // End main function

/**************************************************************
 *                     selectionSort                          *
 * This function performs a selection sort on a string array  *
 **************************************************************/
void selectionSort(string names[], int size)
{
    int i;
    int j;
    int min_idx;
  
    // One by one move boundary of unsorted subarray  
    for (i = 0; i < size - 1; i++)  
    {  
        // Find the minimum element in unsorted array  
        min_idx = i;  

        for (j = i + 1; j < size; j++)
        {
            if (names[j].compare(names[min_idx]) < 0)
            {
                min_idx = j;
            }
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
int binarySearch(string names[], const int size, string value) 
{
    int first = 0;          // First array element
    int last = size - 1;    // Last array element
    int middle;             // Midpoint of search
    int position = -1;      // Position of search value
    bool found = false;     // Flag to indicate if the value was found

    string one = (lowerCase(value));
    string two;

    while (!found && first <= last)
    {
        middle = (first + last) / 2; // this line

        two = lowerCase(names[middle]);
        
        if (one.compare(two) == 0)
        {
            found = true;
            position = middle;
        }
       
         if (one.compare(two) < 0)
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

/**************************************************************
 *                        lowerCase                           *
 * This function allows the user to enter lower case letters  *
 * even when they are supposed to be upper case               *
 **************************************************************/
string lowerCase(string initial)
{
    string value = "";

    for (int i = 0; i < initial.size(); i++)
    {
        value += tolower(initial.at(i));
    }
    return value;
}

/**************************************************************
 *                         findMin                            *
 * This function locates the smallest value in the array      *
 **************************************************************/
int findMin(string names[], int size, int start)
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
void swap(string arr[], int one, int two)
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
void display(string names[], int size)
{
    for (int count = 0; count < size; count++)
    {
        cout << count + 1 << ": " << names[count] << endl;
    }
}

/*

for(int i = 0; i < SIZE; i++){
    cout << i << ": " << names[i] << "UPPERCASE: " << binarySearch(names, SIZE, names[i]) 
    << " lowercase: " <<  binarySearch(names, SIZE, lowerCase(names[i])) << endl;
}

0: Allison, Jeff                                UPPERCASE: 2 lowercase: -1
1: Collins, Bill                                UPPERCASE: 3 lowercase: -1
2: Conroy, Pat                                  UPPERCASE: 4 lowercase: -1
3: Griffin, Jim                                 UPPERCASE: 5 lowercase: -1
4: Harrison, Rose                               UPPERCASE: 6 lowercase: -1
5: Holland, Beth                                UPPERCASE: 7 lowercase: -1
6: Johnson, Jill                                UPPERCASE: 8 lowercase: -1
7: Kelly, Sean                                  UPPERCASE: 9 lowercase: -1
8: Michalski, Joe                               UPPERCASE: 10 lowercase: 10
9: Moreno, Juan                                 UPPERCASE: 9 lowercase: 9
10: Moretti, Bella                              UPPERCASE: 10 lowercase: 10
11: Patel, Renee                                UPPERCASE: 11 lowercase: 11
12: Rubin, Sarah                                UPPERCASE: 12 lowercase: 12
13: Sanchez, Manny                              UPPERCASE: 13 lowercase: 13
14: Smith, Bart                                 UPPERCASE: 14 lowercase: 14
15: Smith, Cathy                                UPPERCASE: 15 lowercase: 15
16: Taylor, Tyrone                              UPPERCASE: 16 lowercase: 16
17: Whitman, Jean                               UPPERCASE: 17 lowercase: 17
18: Wolfe, Bill                                 UPPERCASE: 18 lowercase: 18
19: Wu, Eric                                    UPPERCASE: 19 lowercase: 19
*/