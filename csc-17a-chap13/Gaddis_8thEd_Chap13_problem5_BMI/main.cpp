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
#include "BMI.h"
//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int height = 72;
    int weight = 170;
    BMI bill(height, weight);
    cout << "Bill's height: " << bill.getHght() << endl;
    cout << "Bill's weight: " << bill.getWght() << endl;
    cout << "Bill's BMI: " << bill.getBMI() << endl;
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

