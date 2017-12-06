/* 
   File:   main
   Author: Will Gunadi
   Created on November 13th 2017
   Purpose: Demonstrate NumDays class
 */

// System Libraries
#include <iostream>   // Input/Output object


using namespace std;  // Name-space used in the System Library

// User Libraries
#include "NumDays.h"

// Global Constants

// Function prototypes

// Execution Begins Here!
int main(int argc, char** argv) {
    int n; // Temp variable for hours
    
    // Get Input
    do {
        cout << "Input a number of hours worked" << endl;
        cin >> n;
    } while (n < 0);
    
    // Create the NumDays value
    NumDays val(n);
    
    // Output
    cout << "Days worked: " << val.getDays() << endl;
    cout << "Hours worked: " << val.getHrs() << endl;
    
    cout << "Decrement:" << endl;
    val--;
    cout << "Days worked: " << val.getDays() << endl;
    cout << "Hours worked: " << val.getHrs() << endl;
    
    cout << "Plus 4 hours:" << endl;
    val = val + NumDays(4);
    cout << "Days worked: " << val.getDays() << endl;
    cout << "Hours worked: " << val.getHrs() << endl;
    
    cout << "Increment:" << endl;
    val++;
    cout << "Days worked: " << val.getDays() << endl;
    cout << "Hours worked: " << val.getHrs() << endl;
    
    return 0;
}