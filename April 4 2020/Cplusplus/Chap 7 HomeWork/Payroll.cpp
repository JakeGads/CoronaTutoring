#include <iostream>
#include <iomanip>
#include <string>
#include "Payroll.h"
using namespace std;

//Default Constructor
Payroll::Payroll() {
    salary = 0.0;
    hours = 0.0;
}

//Non-Default Constructors

Payroll::Payroll(float sal){
    salary = sal;
}

Payroll::Payroll(float sal, float hrs) {
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


void processPay (const float s,const float h) {
    
//Not sure what I'm doing here yet
}
