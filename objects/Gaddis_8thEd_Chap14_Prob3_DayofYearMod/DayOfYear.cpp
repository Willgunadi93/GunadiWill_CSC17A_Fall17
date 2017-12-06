/* 
   File:   main
   Author: Will Gunadi
   Created on NOvember 10th, 2017, 
   Purpose: DayOfYear Class Implementation
 */

// System Libraries
#include <iostream>   // Input/Output object
#include <stdlib.h>   // exit
#include <string.h>   // strcmp

// User Libraries
#include "DayOfYear.h"

    
const char *DayOfYear::months[12] = { "January", "February", "March", "April", "May", "June",
                                      "July", "August", "September", "October", "November", "December" };
int DayOfYear::mDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

DayOfYear::DayOfYear(int day) {
    this->day = day;
}

DayOfYear::DayOfYear(char *month, int day) {
    this->day = 0;
    
    for (int i = 0; i < 12; i++) {
        if (strcmp(month, months[i]) == 0) {
            if (day > mDays[i]) {
                std::cout << "Invalid day/month combination" << std::endl;
                exit(1);
            }
            this->day += day;
            i = 12;
        } else {
            if (i == 11) {
                std::cout << "Invalid month" << std::endl;
                exit(1);
            }
            this->day += mDays[i];
        }
    }
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
    std::cout << "Day " << day << " = " << months[month] << " " << mDay << std::endl;
}

DayOfYear DayOfYear::operator++() {
    int day = this->day + 1;
    if (day > 365) day -= 365;
    return DayOfYear(day);
}

DayOfYear DayOfYear::operator++(int) {
    int day = this->day + 1;
    if (day > 365) day -= 365;
    return DayOfYear(day);
}

DayOfYear DayOfYear::operator--() {
    int day = this->day - 1;
    if (day < 1) day += 365;
    return DayOfYear(day);
}

DayOfYear DayOfYear::operator--(int) {
    int day = this->day - 1;
    if (day < 1) day -= 365;
    return DayOfYear(day);
}