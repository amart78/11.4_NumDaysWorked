/***************************************************************************************
11.4 NUMBER OF DAYS WORKED

This program converts number of hours worked to number of days worked.
For example, 8 hours would be converted to 1 day, 12 hours would be converted to 1.5 days, 
and 18 hours would be converted to 2.25 days. 
****************************************************************************************/

#include <iostream>
#include "NumDays.h"
using namespace std; 

int main(){

    NumDays eight(8), twelve(12), eighteen(18);

    cout << "\nCONVERSION: \n";
    cout << eight.getHoursWorked() << " hours worked = " << eight.getDaysWorked() << " day(s) worked\n";        // => 1 day
    cout << twelve.getHoursWorked() << " hours worked = " << twelve.getDaysWorked() << " day(s) worked\n";      // => 1.5 days
    cout << eighteen.getHoursWorked() << " hours worked = " << eighteen.getDaysWorked() << " day(s) worked\n";  // => 2.25 days

    cout << "\nOVERLOADED OPERATORS: \n";
    cout << "Demonstrating addition and subtraction operators:\n";
    cout << "eight + twelve = " << (eight + twelve).getHoursWorked() << endl;   // => 20
    cout << "twelve - eight = " << (twelve - eight).getHoursWorked() << endl;   // => 4

    cout << "\nDemonstrating PREFIX ++ operator:\n";   // => 9 10 11 12 13 
    for (int count = 0; count < 5; count++){
        cout << (++eight).getHoursWorked() << " ";      
    }

    cout << "\nDemonstrating POSTFIX ++ operator:\n";  // => 13 14 15 16 17 
    for (int count = 0; count < 5; count++){
        cout << (eight++).getHoursWorked() << " ";
    } 

    cout << "\n\nDemonstrating PREFIX -- operator:\n"; // => 17 16 15 14 13 
    for (int count = 0; count < 5; count++){
        cout << (--eight).getHoursWorked() << " ";
    }

    cout << "\nDemonstrating POSTFIX -- operator:\n"; // => 13 12 11 10 9
    for (int count = 0; count < 5; count++){
        cout << (eight--).getHoursWorked() << " ";
    } 
    
    return 0;
}