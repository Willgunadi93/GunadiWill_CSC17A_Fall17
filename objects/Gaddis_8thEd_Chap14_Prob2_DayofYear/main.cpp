/* 
   File:   main
   Author: Will Gunadi
   Created on: November 10th 2017
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
    int day; // Temp value for day of year
    
    // Get the input
    do {
        cout << "Input a day of the year" << endl;
        cin >> day;
    } while (day < 0 || day > 365);
    
    // Create the DayOfYear
    DayOfYear doy(day);
    
    // Output
    doy.print();
    
    return 0;
}