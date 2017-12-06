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
#include "MINMAX.h"
//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int num1, num2;
    int small, large;
    
    //Input 
    cout << "Input 1st number" << endl;
    cin >> num1;
    cout << "Input 2nd Number" << endl;
    cin >> num2;
    
    small = Minimum(num1, num2);
    large = Maximum(num1, num2);
    
    //output the numbers
    cout << "Largest is " << large << endl;
    cout << "Smallest is " << small;
    //Exit stage right!
    return 0;
}

