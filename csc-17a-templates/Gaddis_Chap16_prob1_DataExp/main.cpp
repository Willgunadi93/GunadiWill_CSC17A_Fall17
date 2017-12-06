/* 
 * File:   main.cpp
 * Author: William Gunadi
 * Created on December 3rd , 2017, 
 * Purpose:  Template to be utilized in creating
 *           solutions to problems in our CSC/CIS 5 
 *           class.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "Date.h"
//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    Date obj1;
    int day, year, month;
    
    //Input date
    cout << "Enter month" << endl;
    cin >> month;
    cout << "Enter day" << endl;
    cin >> day;
    cout << "Enter year" << endl;
    cin >> year;
    
    //try
    try{
        obj1.setDay(day);
        obj1.setMonth(month);
        obj1.setYear(year);
        
        obj1.printForm1();
        obj1.printForm2();
        obj1.printForm3();
    }
        
        catch(Date::InvdDay){
            cout << "Error. Day should be between 1-31" << endl;
        }
        
        catch(Date::InvdMonth) {
            cout << "Error. Month should be between 1-12" << endl;
        }
    
    cout << "End of program" << endl;
    return 0;
}

