// This program will read scores into a one dimensional array. 
// It will report the average of the scores.
// It will also report the max of the scores.
// It uses a dynamic array the size of which is given by the user(use of pointers)

// Joseph Traglia

#include <iostream>
using namespace std;

float findMax(float*, int);

int main()
{
    float* scores = nullptr; // pointer to array
    int   num_scores;       // size of the array
    float average;          // finds the average
    float total = 0;        // the total of all scores

    cout << "Please input the number of scores" << endl;
    cin >> num_scores;

    //TASK:  Dynamically allocate scores to an array of floats
    scores = new float[num_scores];

    // TASK:  always test for a null pointer after dynamic memory requested
    if (scores == nullptr|| num_scores < 1)   
    {
        cout << "Error allocating memory!\n";
        return 1;
    }

    //Total scores
    for (int count = 0; count < num_scores; count++)
    {
        cout << "Please enter a score  " << endl;
        cin >> scores[count];
        total = total + scores[count]; //Another Option: total + *(scores + count) 
    }

    average = total / num_scores;

    cout << "The average of the scores is " << average << endl << endl;

    //TASK:  After you write the findMax function below, call it. 
    cout << "The max of the scores is " << findMax(scores, num_scores) << endl;

    //TASK: FREE THE MEMORY FOR SCORES
    delete [] scores;
    scores = nullptr;

    return 0;
}

/*TASK: 
Create a findMax function that ACCEPTS an array of floats (as a ptr)
and also the size of the array. The function should returns the max value in the array.  

Be sure to add a prototype to this file for findMax
*/

float findMax(float* scores, int size)
{
    int maxPosition = 0;

    for (int i = 0; i < size; i++)
    {
        if (scores[maxPosition] < scores[i])
            maxPosition = i;
    }

    return scores[maxPosition];
}