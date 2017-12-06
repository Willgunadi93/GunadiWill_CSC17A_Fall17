
/* 
 * File:   Date.cpp
 * Author: WilliamGunadi
 *
 * Created on October 19th, 2017, 1:45 AM
 */

#include <cstdlib>
#include <iostream>
#include "Date.h"

using namespace std;

Date::Date(int month, int day, int year){
    if(day < 1 || day > 31) day = 1;
    if(month < 1 || month > 12) month = 2;
    if(year < 0) year = 1;
    
    this->day = day;
    this->month = month;
    this->year = year;
}

const char* Date::mthStr(){
    switch (this-> month){ 
        case 1: return "January";
        case 2: return "February";
        case 3: return "March";
        case 4: return "April";
        case 5: return "May";
        case 6: return "June";
        case 7: return "July";
        case 8: return "August";
        case 9: return "September";
        case 10: return "October";
        case 11: return "November";
        case 12: return "December";
    }
}   

void Date::getDate1(){
    cout << month << "/" << this->day << "/" << this->year;
}

void Date::getDate2(){
    cout << mthStr() << " " << day << ", " << year;
}

void Date::getDate3(){
    cout << day << " " << mthStr() << " " << year;
}