/* 
 * File:   main.cpp
 * Author: William Gunadi
 * Created on October 19th , 2017, 
 * Purpose:  Gaddis Chapter 13 Problem 1 Date
 */

//System Libraries
#include <iostream>

#include "Date.h"  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    cout << "This program outputs the address that's entered" << endl;
    int day, year, month;
    cout << "Input the month, day, and year:" << endl;
    cin >> month;
    cin >> day;
    cin >> year;
    
    //Create object with those values initialized.
    Date today(month, day, year);
    
    //output the functions that outputs the date in diff format.
    cout << "Today's date is" << endl;
    today.getDate1();
    cout << endl;
    today.getDate2();
    cout << endl;
    today.getDate3();
    cout << endl;
    //Exit stage right!
    return 0;
}

