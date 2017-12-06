/* 
   File:   main
   Author: Will Gunadi
   Created on November 10, 2017, 6:42 PM
   Purpose: Demonstrate Numbers class
 */

// System Libraries
#include <iostream>   // Input/Output object


using namespace std;  // Name-space used in the System Library

// User Libraries
#include "Numbers.h"

// Global Constants

// Function prototypes

// Execution Begins Here!
int main(int argc, char** argv) {
    int n; // Temp dollar value
    
    // Get the input
    do {
        cout << "Input a dollar amount" << endl;
        cin >> n;
    } while (n < 0 || n > 9999);
    
    // Create the DayOfYear
    Numbers num(n);
    
    // Output
    cout << "Entered amount:" << endl;
    num.print();
    
    return 0;
}