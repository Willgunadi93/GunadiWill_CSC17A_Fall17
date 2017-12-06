/* 
   File:   main
   Author: Will Gunadi
   Created on November 13th, 2017
   Purpose: NumDays Class Implementation
 */

// System Libraries
#include <iostream>   // Input/Output object

// User Libraries
#include "NumDays.h"

    
NumDays::NumDays(int hours) {
    this->hours = hours;
    this->days = hours / 8.0f;
}

void NumDays::setHrs(int hours) {
    this->hours = hours;
    this->days = hours / 8.0f; // Recalculate days
}

int NumDays::getHrs() {
    return this->hours;
}

void NumDays::setDays(float days) {
    this->days = days;
    this->hours = days * 8.0f; // Recalculate hours
}

float NumDays::getDays() {
    return this->days;
}

NumDays NumDays::operator++() {
    setHrs(this->hours + 1);
    return NumDays(this->hours);
}

NumDays NumDays::operator++(int) {
    setHrs(this->hours + 1);
    return NumDays(this->hours);
}

NumDays NumDays::operator--() {
    setHrs(this->hours - 1);
    return NumDays(this->hours);
}

NumDays NumDays::operator--(int) {
    setHrs(this->hours - 1);
    return NumDays(this->hours);
}

NumDays NumDays::operator+(NumDays right) {
    return NumDays(this->hours + right.getHrs());
}

NumDays NumDays::operator-(NumDays right) {
    return NumDays(this->hours + right.getHrs());
}