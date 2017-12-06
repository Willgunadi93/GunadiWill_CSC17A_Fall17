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
#include "TESTSCORE.h"
//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int ntest;
    cout << "How many test would you like to enter?" << endl;
    cin >> ntest;
    
    //create object testscore
    testscore mdtrm(ntest);
    
    //Exit stage right!
    return 0;
}

