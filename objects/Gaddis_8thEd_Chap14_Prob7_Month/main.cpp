/* 
   File:   main
   Author: Eric Barrett
   Created on May 10, 2017, 9:51 PM
   Purpose: Demonstrate Month class
 */

// System Libraries
#include <iostream>   // Input/Output object


using namespace std;  // Name-space used in the System Library

// User Libraries
#include "Month.h"

// Global Constants

// Function prototypes

// Execution Begins Here!
int main(int argc, char** argv) {
    char mnth[20]; // Temp variable for month
    
    // Get Input
    cout << "Input a month name" << endl;
    cout << "Capitalize the first letter, please." << endl;
    cin >> mnth;
    
    // Create the Month value
    Month month(mnth);
    
    // Output
    cout << "Inputted month:" << endl;
    cout << month << endl;
    cout << month.getNum() << endl;
    
    cout << "Next Month:" << endl;
    month++;
    cout << month << endl;
    cout << month.getNum() << endl;
    
    cout << "Previous Month:" << endl;
    month--;
    month--;
    cout << month.getName() << endl;
    cout << month.getNum() << endl;
    
    return 0;
}