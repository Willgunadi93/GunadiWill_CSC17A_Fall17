/* 
 * File:   main.cpp
 * Author: William Gunadi
 * Created on September , 2017, 
 * Purpose:  Template to be utilized in creating
 *           solutions to problems in our CSC/CIS 5 
 *           class.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "date.h"
//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int year, month, day;
    
    //Pass in val into class for today's date
    cout << "Enter today's day in [month] - [day] - [year]." << endl;
    cin >> month;
    cin >> day;
    cin >> year;
    
    Date today(month, day, year);
    
    cout << "Today's date" << endl;
    cout << today.getMonth() << " " << today.getDay() << " " << today.getYear() << endl;
    
    cout << "Enter your birthday" << endl;
    cin >> month;
    cin >> day;
    cin >> year;
    
    Date birth(month, day, year);
    
    cout << "Your birthdate:" << endl;
    cout << birth.getMonth() << " " << birth.getDay() << " " << birth.getYear() << endl;
    
    if(birth.getMonth() == today.getMonth() && birth.getDay() == today.getDay())
        cout << "happy birthday" << endl;
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

