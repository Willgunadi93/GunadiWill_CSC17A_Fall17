/* 
   File:   main
   Author: Will Gunadi
   Created on: November 10th, 2017
   Purpose: Demonstrate DayOfYear class
 */

// System Libraries
#include <iostream>   // Input/Output object


using namespace std;  // Name-space used in the System Library

// User Libraries
#include "DayOfYear.h"

// Global Constants

// Function prototypes

// Execution Begins Here!
int main(int argc, char** argv) {
    int day; // Temp value for day of month
    char month[20]; // Temp value for month name
    
    // Get the input
    cout << "Input a month" << endl;
    cin >> month;
    
    do {
        cout << "Input a day of the month" << endl;
        cin >> day;
    } while (day < 0);
    
    // Create the DayOfYear
    DayOfYear doy(month, day);
    
    // Output
    cout << "Day entered:" << endl;
    doy.print();
    
    cout << "Day before:" << endl;
    (--doy).print();
    
    cout << "Day after:" << endl;
    (++doy).print();
    
    return 0;
}