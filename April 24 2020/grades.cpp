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
        inData.get(name, MAXNAME + 1); //store all 20 characters into name

        //TASK: GET THE AVERAGE
        inData >> average;

        //TASK: PRINT the name/average out 
        //according to the desired output shown in the lab.
        
        cout << left << name << average;

        //TASK:  Ignore the end of line character.
    }

    return 0;
}

/*
Adara Starryeyedkidd 94
David Starr          91
Sophia Starr         94
Maria Starr          91
Danielle DeFino      94
Dominic DeFino       98
McKenna DeFino       92
Taylor McIntire      99
Torrie McIntire      91
Emily Garrett        97
Lauren Garrett       92
Marlene Starr        83
Donald DeFino        73
*/