/* 
   File:   main
   Author: Will Gunadi
   Created on November 10th 2017, 
   Purpose: DayOfYear Class Implementation
 */

// System Libraries
#include <iostream>   // Input/Output object

// User Libraries
#include "DayOfYear.h"

using namespace std;

    
const char *DayOfYear::months[12] = { "January", "February", "March", "April", "May", "June",
                                      "July", "August", "September", "October", "November", "December" };
int DayOfYear::mDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

DayOfYear::DayOfYear(int day) {
    this->day = day;
}

void DayOfYear::print() {
    int month; // Month that day corresponds to
    int mDay = day;  // Day of month
    
    // Get the month and day
    for (int i = 0; i < 12; i++) {
        if (mDay <= mDays[i]) {
            month = i;
            i = 12;
        } else if (mDay > mDays[i]) {
            mDay -= mDays[i];
        }
    }
    
    // Output
    cout << "Day " << day << " = " << months[month] << " " << mDay << endl;
}