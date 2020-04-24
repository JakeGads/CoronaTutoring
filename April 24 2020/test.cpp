// //Write a short program that defines a character array containing 10 characters. 
// //The user should be prompted to enter their last name using no more than 9 characters. 
// //The program must then read the name into the array and echo print the name back to the screen.

// // Joseph Traglia 

// #include <iostream>
// #include <cctype>
// #include <cstring>

// using namespace std;

// void echoPrint(char*, int);

// int main()
// {
// 	char* lastName = new char[10];

// 	cout << "Enter your last name using no more than 9 characters: " << endl;
// 	cin.getline(lastName, 10);

// 	echoPrint(lastName, 10);

// 	cout << lastName;

// 	delete[] lastName;
// 	lastName = nullptr;

// 	return 0;
// }

// void echoPrint(char* name, int size)
// {
// 	for (int i = 0; i < size; i++)
// 	{
// 		cout << name[i] << " ";
// 	}

// 	cout << endl;
// }


#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

// Joseph Traglia

const int MAXNAME = 20;  //The file is set up so that any
                         //student's has at most 20 characters.
   
int main()
{
    ifstream inData;
    inData.open("grades.txt");
    char name[MAXNAME + 1];  // holds student name plus one for the null character
    float average;           // holds student average


    while (inData)
    {
		string temp;
        inData.get(name, MAXNAME + 1); //store all 20 characters into name

        //TASK: GET THE AVERAGE
        inData >> average;
		getline(cin, temp);
        //TASK: PRINT the name/average out 
        //according to the desired output shown in the lab.
        
        cout <<  name << setw(MAXNAME + 1) << left << average;

        //TASK:  Ignore the end of line character.
    }

    return 0;
}
