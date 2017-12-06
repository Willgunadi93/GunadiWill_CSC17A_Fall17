
/* 
 * File:   Time.cpp
 * Author: William Gunadi
 * Purpose: Time class implementation file
 * Created on December 3, 2017, 9:42 PM
 */

//system libraries
#include <cstdlib>

using namespace std;

//User libraries
#include "Time.h"

Time::Time(){
    this->hour = 0;
    this->min = 0;
    this->sec = 0;
}

Time::Time(int hour, int min, int sec){
    this->hour = hour;
    this->min = min;
    this->sec = sec;
}

//Accessor functions
int Time::getHour() {
    return this->hour;
}

int Time::getMin() {
    return this->min;
}

int Time::getSec() {
    return this->sec;
}

MilTime::MilTime(int hour, int sec) {
    this->milHours = hour;
    this->milSec = sec;
}

void MilTime::setTime(int mHour, int mSec){
    if(mHour < 0 || mHour > 2356){
        throw InvdHr();
    }
    else{
        milHours = mHour;
    }
    
    if(mSec < 0 || mSec > 59){
        throw InvdSec();
    }
    else{
        this->milSec = mSec;
    }
    
    hour = (milHours/100);
    min = milHours%100;
    sec = milSec;
}

int MilTime::getHour(){
    return milHours;
}

int MilTime::getStndHr() {
    return hour % 12;
}


