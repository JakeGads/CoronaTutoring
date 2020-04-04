#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include "Payroll.h"

using namespace std;
//Constants
const int PR_SIZE = 7;

int main() {
    
    //Temporary Values
    float tempSal = 0;
    float tempHrs = 0;
   
    Payroll Pay1[PR_SIZE];
    
    //Get payroll file
    ifstream prInputFile;
    prInputFile.open("payroll.dat");

    
    
    if (prInputFile) {
        cout << ":::PAYROLL FILE OPENED SUCCESSFULLY:::" << endl << endl;
        
        for (int i = 0; i < PR_SIZE; i++)
                {
                    prInputFile >> tempHrs >> tempSal;
                        /*
                        For Int sepeater , . [space]
                        For Strings [Spaces]
                        For Doubles / Floats , [space]
                        */

                    Pay1[i].setHours(tempHrs);
                    Pay1[i].setSalary(tempSal);
                }
        
        prInputFile.close();
    }
    else {
        cout << "!!!ERROR: FILE NOT FOUND!!!" << endl;
    }
    cout << "Results:" << endl;
    for (int index = 0; index < PR_SIZE; index++) {

        cout << Pay1[index].getHours() << "\t" << Pay1[index].getSalary() << "\t" << Pay1[index].processPay() << endl;
    }
    return 0;
}
