
/* 
 * File:   date.cpp
 * Author: WilliamGunadi
 *
 * Created on October 17, 2017, 8:15 PM
 */
#include <iostream>
#include <cstdlib>
#include "date.h"

using namespace std;


Date::Date(int month, int day, int year){
    cout << "constructor.." << endl;
    this->day = day;
    this->month = month;
    this->year = year;
}
int Date::getYear(){
    return year;
}
int Date::getMonth(){
    return month;
}
int Date::getDay(){
    return day;
}


