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
#include "Employee.h"
//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    //Create class. 1st object pass in all the variables
    Employee One("Susan Meyers", 47899, "Accounting", "Vice President");
    
    //2nd Object pass in name and int num. Use mutator mem func to set the rest of the
    //attributes
    Employee Two("Mark", 39119);
    Two.setDprtmnt("IT");
    Two.setPos("Programmer");
    
    //3rd Object, use mutator mem functions to set the attributes
    Employee Three;
    Three.setName("Joy Rodgers");
    Three.setNum(81774);
    Three.setDprtmnt("Manufacturing");
    Three.setPos("Engineer");
    
    //Display the Employee's information
    cout << "Employee Name: " << One.getName() << endl;
    cout << "Employee Department: " << One.getDprtmnt() << endl;
    cout << "Employee badge number: " << One.getNum() << endl;
    cout << "Employee Position: " << One.getPos() << endl << endl;
    
    cout << "Employee Name: " << Two.getName() << endl;
    cout << "Employee Department: " << Two.getDprtmnt() << endl;
    cout << "Employee badge number: " << Two.getNum() << endl;
    cout << "Employee Position: " << Two.getPos() << endl << endl;

    cout << "Employee Name: " << Three.getName() << endl;
    cout << "Employee Department: " << Three.getDprtmnt() << endl;
    cout << "Employee badge number: " << Three.getNum() << endl;
    cout << "Employee Position: " << Three.getPos() << endl << endl;    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

