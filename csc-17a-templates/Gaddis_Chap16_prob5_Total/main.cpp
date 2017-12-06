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
#include "Total.h"
//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int n;
    
    cout << "Enter n amount of values to be entered" << endl;
    cin >> n; 
    
    //outputting numbers
    cout << "Enter values " << Total(n) << endl;
    //Exit stage right!
    return 0;
}

