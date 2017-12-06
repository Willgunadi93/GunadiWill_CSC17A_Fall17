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
#include "Array.h"
//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int nsize = 10;
    
    //Create object
    Array table(nsize);
    
    // fill table
    for(int i = 0; i < nsize; i++) {
        table[i] = i;
    }
    
    //display table
    for(int i = 0; i < nsize; i++) {
        cout << table[i] << " ";
    }
    
    try{
        table[nsize + 1] = 0;
    }
    catch(Array::SubExcp){
        cout << "ERROR: out of range" << endl;
    }
    
    
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

