#ifndef NUMDAYS_H
#define NUMDAYS_H
#include <iostream>
using namespace std;

class NumDays{
    private:
        int hoursWorked;
        const double HOURS_IN_A_WORKDAY = 8;

    public:
        // Constructor functions
        NumDays();
        NumDays(int);

        // Accessor functions
        void setHoursWorked(int);
        int getHoursWorked();
        double getDaysWorked();

        // Overloaded arithemtic operators
        friend NumDays operator+(NumDays a, NumDays b);
        friend NumDays operator-(NumDays a, NumDays b);
        NumDays operator++();
        NumDays operator++(int);
        NumDays operator--();
        NumDays operator--(int);

};

#endif
