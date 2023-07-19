#include "NumDays.h"

NumDays::NumDays(int hoursWorked){
    this->hoursWorked = hoursWorked;
}

// Accessor functions
int NumDays::getHoursWorked(){
    return this->hoursWorked;
}

double NumDays::getDaysWorked(){
    return hoursWorked/HOURS_IN_A_WORKDAY;
}

void NumDays::setHoursWorked(int hoursWorked){
    this->hoursWorked = hoursWorked;
}

// Overloaded operators

// Addition operator (+): 
// Calculates the sum of the number of hours in 2 individual objects
NumDays operator+(NumDays a, NumDays b){
    return NumDays(a.hoursWorked + b.hoursWorked); 
}

// Subtraction operator (-):
// Calculates the difference between the number of hours of 2 objects
NumDays operator-(NumDays a, NumDays b){
    return NumDays(a.hoursWorked - b.hoursWorked);
}

// Prefix ++ operator:
// Increments the hours worked and returns after the increment
NumDays NumDays::operator++(){
    hoursWorked ++;
    return *this;
}

// Postfix ++ operator:
// Increments the hours worked and returns before the increment
NumDays NumDays::operator++(int){
    NumDays temp = *this;
    hoursWorked ++;
    return temp;
}

// Prefix -- operator:
// Increments the hours worked and returns after the increment
NumDays NumDays::operator--(){
    hoursWorked --;
    return *this;
}

// Postfix -- operator:
// Decrements the hours worked and returns before the increment
NumDays NumDays::operator--(int){
    NumDays temp = *this;
    hoursWorked --;
    return temp;
}

