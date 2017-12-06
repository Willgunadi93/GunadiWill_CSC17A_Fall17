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
#include "Testscore.h"
//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int score[5];       //hold test score array
    
    //Input the test scores into array
    cout << "Enter scores into the array: " << endl;
    for(int i = 0; i < 5; i++){
        cin >> score[i];
    }
    
    //create object
    try{
        TestScore student1(score);
    }
    
    catch(TestScore::InvalidScore){
        cout << "Error, invalid test score: " << endl;
    }
    //Exit stage right!
    return 0;
}

