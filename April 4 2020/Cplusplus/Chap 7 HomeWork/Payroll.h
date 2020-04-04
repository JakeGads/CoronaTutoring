#ifndef PAYROLL_H
#define PAYROLL_H

#include <iostream>
using namespace std;


class Payroll {
private:
    float salary;
    float hours;
    
public:
    
    //Default
    Payroll();
    
    //Non-Default
    Payroll(float);
    Payroll(float, float);
    
    //Setters
    void setSalary(float);
    void setHours(float);
    
    //Getters
    float getSalary();
    float getHours();
    
    //Functions
    float  processPay();
    
};

#endif /*PAYROLL_H*/

//Default Constructor
// Payroll::Payroll() {
//     salary = 0.0;
//     hours = 0.0;
// }

// //Non-Default Constructors

// Payroll::Payroll(float sal, float hrs) {
//     salary = sal;
//     hours = hrs;
// }


// //Setters
// void Payroll::setSalary(float s) {
//     salary = s;
// }

// void Payroll::setHours(float h) {
//     hours = h;
// }

// float Payroll::getSalary(){
//     return salary;
// }

// float Payroll::getHours() {
//     return hours;
// }


// float Payroll::processPay () {
//     return hours * salary;
// }


// Testing Delegated Constructors

Payroll::Payroll() {
    salary = 0.0;
    hours = 0.0;
}

//Non-Default Constructors

Payroll::Payroll(float sal, float hrs): Payroll() {
    salary = sal;
    hours = hrs;
}


//Setters
void Payroll::setSalary(float s) {
    salary = s;
}

void Payroll::setHours(float h) {
    hours = h;
}

float Payroll::getSalary(){
    return salary;
}

float Payroll::getHours() {
    return hours;
}


float Payroll::processPay () {
    return hours * salary;
}
