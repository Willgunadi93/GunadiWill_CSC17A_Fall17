/* 
   File:   main
   Author: Eric Barrett
   Created on May 10, 2017, 10:36 PM
   Purpose: Month Class Implementation
 */

// System Libraries
#include <iostream>   // Input/Output object
#include <string.h>

// User Libraries
#include "Month.h"

using namespace std;

char *Month::months[12] = { "January", "February", "March", "April", "May", "June",
                                  "July", "August", "September", "October", "November", "December" };

Month::Month() {
    this->num = 1;
    this->name = "January";
}

Month::Month(char *name) {
    this->name = name;
    calcNum();
}

void Month::setName(char *name) {
    this->name = name;
    calcNum();
}

const char *Month::getName() {
    return this->name;
}

void Month::setNum(int num) {
    this->num = num;
    this->name = months[num - 1];
}

int Month::getNum() {
    return this->num;
}

void Month::calcNum() {
    for (int i = 0; i < 12; i++) {
        if (strcmp(this->name, months[i]) == 0) {
            this->num = i + 1;
            i = 12;
        }
    }
}

Month Month::operator++() {
    num++;
    if (num > 12) num = 1;
    name = months[num - 1];
    return Month(name);
}

Month Month::operator++(int) {
    Month ret(name);
    num++;
    if (num > 12) num = 1;
    name = months[num - 1];
    return ret;
}

Month Month::operator--() {
    num--;
    if (num < 1) num = 12;
    name = months[num - 1];
    return Month(name);
}

Month Month::operator--(int) {
    Month ret(name);
    num--;
    if (num < 1) num = 12;
    name = months[num - 1];
    return ret;
}

ostream& operator<<(ostream &os, const Month &month) {
    os << month.name;
    return os;
}

istream& operator>>(istream &is, Month &month) {
    is >> month.name;
    month.calcNum();
}