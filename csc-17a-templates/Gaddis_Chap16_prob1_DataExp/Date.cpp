/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Date.cpp
 * Author: WilliamGunadi
 *
 * Created on December 3, 2017, 8:00 PM
 */
//System libraries
#include <cstdlib>
#include <iostream>

using namespace std;

//User libraries
#include "Date.h"


Date::Date(){
    this->day = 0;
    this->month = 0;
    this->year = 0;
}
 
void Date::setDay(int day){
    if(day < 1 || day > 31){
        throw InvdDay();
    }else
        this->day = day;
}

void Date::setYear(int year){
    this->year = year;
}

void Date::setMonth(int month){
    if(month < 1 || month > 12){
        throw InvdMonth();
    }else{
        this->month = month;
    }
}

int Date::getDay(){
    return this->day;
}

int Date::getMonth(){
    return this->month;
}

int Date::getYear() {
    return this->year;
}

void Date::printForm1(){
    cout << month << "/" << day << "/" << year%100 << endl;
    
}
void Date::printForm2(){
    switch(month){
        case 1: cout << "January"; break;
        case 2: cout << "February"; break;
        case 3: cout << "March"; break;
        case 4: cout << "April"; break;
        case 5: cout << "May"; break;
        case 6: cout << "June"; break;
        case 7: cout << "July"; break;
        case 8: cout << "August"; break;
        case 9: cout << "September"; break;
        case 10: cout << "October"; break;
        case 11: cout << "November"; break;
        case 12: cout << "December"; break;
    }
    cout << "," << day << " " << year << endl;
}
void Date::printForm3(){
    cout << day << " ";
    switch(month){
        case 1: cout << "January"; break;
        case 2: cout << "February"; break;
        case 3: cout << "March"; break;
        case 4: cout << "April"; break;
        case 5: cout << "May"; break;
        case 6: cout << "June"; break;
        case 7: cout << "July"; break;
        case 8: cout << "August"; break;
        case 9: cout << "September"; break;
        case 10: cout << "October"; break;
        case 11: cout << "November"; break;
        case 12: cout << "December"; break;
    }
    cout << year << endl;
}