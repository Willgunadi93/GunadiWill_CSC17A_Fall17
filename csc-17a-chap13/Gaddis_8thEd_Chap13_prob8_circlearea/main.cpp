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
#include "circle.h"
//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int radius;
    
    //input radius
    cout << "Demonstrating a circle class " << endl;
    cout << "Enter the radius of the circle" << endl;
    cin >> radius;
    
    //create circle object
    circle circle1(radius);
    
    //output the circle's radius
    cout << "The radius of the circle is = " << circle1.getRad() << endl;
    cout << "The area of the circle is = " << circle1.getArea() << endl;
    cout << "Diameter = " << circle1.getDiam() << endl;
    cout << "Circumference = " << circle1.getCirc() << endl;
    //Exit stage right!
    return 0;
}

