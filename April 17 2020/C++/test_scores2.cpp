// This program will read scores into a one dimensional array. 
// It will also report the max of the scores.
// It uses a dynamic array the size of which is given by the user(use of pointers)
// and it also demos using pointers to structs and the use of arrow notation.

// Joseph Traglia

#include <iostream>
using namespace std;

//TASK: Create a test struct here
//that has a string name and 
//a float called grade.
struct Test
{
    string name;
    float grade;
};

//TASK: Prototype from the new findMax function
//goes here after you complete the function.
Test* findMax(Test* scores, int size);

int main()
{
    //TASK: Update scores so that it is a pointer to an array of tests
    //instead of an array of floats
    Test* scores = nullptr; // pointer to array
    int   num_scores;       // size of the array

    //TASK:  Create a pointer to a Test called maxTest here.
    Test* maxTest = nullptr;  // highest test score

    cout << "Please input the number of scores" << endl;
    cin >> num_scores;

    //TASK:  Dynamically allocate scores to an array of Tests
    scores = new Test[num_scores];


    // TASK:  always test for a null pointer after dynamic memory requested
    if (scores == nullptr|| num_scores < 1)   
    {
        cout << "Error allocating memory!\n";
        return 1;
    }

    //TASK:  Store each new Test (name/grade pair) into the scores array
    for (int count = 0; count < num_scores; count++)
    {
        cout << "Please enter a name then a score (separated by a space):  " << endl;
        cin >> (scores + count)->name >> (scores + count)->grade; // equiv to scores[count].name scores[count].grade
    }

    //TASK:  After you write the findMax function below, call it. 
    maxTest = findMax(scores, num_scores);
 
    //TASK: Print out the information from the maxTest struct using
    //Arrow notation!
    cout << scores->name << " received the max score of " << maxTest->grade << endl;

    //TASK: FREE THE MEMORY FOR SCORES
    delete [] scores;
    scores = nullptr;

    return 0;
}

/*TASK: 
Create a findMax function that 
1) ACCEPTS an array of Tests (as a ptr)
2) ACCEPTS the size of the array
3) RETURNS a pointer to a Test struct  

Be sure to add a prototype to this file for findMax
*/

Test* findMax(Test* scores, int size)
{
    //Create a pointer to a Test called maxTest
    //and make it point to the first element in the scores array.
    Test* maxTest = &scores[0];

    for (int i = 0; i < size; i++)
    {
        //Use arrow notation to get the grade out of maxTest
        //and to compare it to the current grade in the scores 
        //array.  Update the value of maxTest if necessary.

        if (maxTest->grade < (scores + i)->grade)
        {
            maxTest->grade = (scores + i)->grade;
            maxTest->name = (scores + i)->name;
            
        }
    }

    return maxTest;
}

/*
    Please input the number of scores
    5
    Please enter a name then a score (separated by a space):
    Terry 82
    Please enter a name then a score (separated by a space):
    Jack 84
    Please enter a name then a score (separated by a space):
    Bryce 78
    Please enter a name then a score (separated by a space):
    Georgie 92
    Please enter a name then a score (separated by a space):
    Erin 88
    Georgie received the max score of 92

    Erin received the max score of 0x5645dc34b6d8
*/