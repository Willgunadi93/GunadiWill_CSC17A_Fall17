/* 
   File:   main
   Author: Will Gunadi
   Created on Nov 10, 2017, 10:21 PM
   Purpose: Numbers Class Implementation
 */

// System Libraries
#include <iostream>   // Input/Output object

// User Libraries
#include "Numbers.h"

using namespace std; //Name-space under which system libraries exist

const char *Numbers::numStr[9] = { "One", "Two", "Three", "Four", "Five", "Six",
                           "Seven", "Eight", "Nine" };

Numbers::Numbers(int num) {
    this->number = num;
}

void Numbers::print() {
    int iAmt = this->number;
    
    // Get each place value
    char n1000s = iAmt / 1000;
    iAmt = iAmt % 1000;
    char n100s = iAmt / 100;
    iAmt = iAmt % 100;
    char n10s = iAmt / 10;
    iAmt = iAmt % 10;
    char n1s = iAmt;
    
    if (n1000s > 0) cout << numStr[n1000s - 1] << " Thousand ";
    if (n100s > 0) cout << numStr[n100s - 1] << " Hundred ";
    
    if (n10s == 1) {
        if (n1000s > 0 || n100s > 0) cout << "and ";
        switch (n1s) {
            case 8: cout << "Eighteen "; break;
            case 5: cout << "Fifteen "; break;
            case 3: cout << "Thirteen "; break;
            case 2: cout << "Twelve "; break;
            case 1: cout << "Eleven "; break;
            case 0: cout << "Ten "; break;
            default: cout << numStr[n1s - 1] << "teen ";
        }
    } else if (n10s > 0) {
        if (n1000s > 0 || n100s > 0) cout << "and ";
        switch (n10s) {
            case 8: cout << "Eighty "; break;
            case 5: cout << "Fifty "; break;
            case 3: cout << "Thirty "; break;
            case 2: cout << "Twenty "; break;
            default: cout << numStr[n10s - 1] << "ty ";
        }
        if (n1s > 0) cout << numStr[n1s - 1] << " ";
    } else if (n1s > 0) {
        cout << numStr[n1s - 1] << " ";
    }
    
    if (this->number == 0) cout << "Zero ";
    
    cout << "Dollars " << endl;
}