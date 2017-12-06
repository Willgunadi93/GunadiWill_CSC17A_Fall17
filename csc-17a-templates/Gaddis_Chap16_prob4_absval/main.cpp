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
#include "ABS.h"
//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int num, absVal;
    
    cout << "Enter value: " << endl;
    cin >> num;
    //function call
    absVal = Absolute(num);
    
    //output abs value
    cout << "The absolute value of that number is : " << absVal << endl;
    //Exit stage right!
    return 0;
}

