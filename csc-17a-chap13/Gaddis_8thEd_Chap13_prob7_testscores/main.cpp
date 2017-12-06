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
    int test1, test2, test3;
    cout << "Enter the scores for the 3 tests" << endl;
    cin >> test1;
    cin >> test2;
    cin >> test3;
    
    //create testscore object
    testscore tests(test1, test2, test3);
    
    //get testscores
    cout << "test 1: " << tests.getTst1() << endl;
    cout << "test 2: " << tests.getTst2() << endl;
    cout << "test 3: " << tests.getTst3() << endl;
    
    //get testscore average
    cout << "Test average score: " << tests.tstAvg() << endl;
    //Exit stage right!
    return 0;
}

