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
#include <string>
using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "Car.h"
//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    cout << "Simulating a car accelerating and decelerating" << endl;
    string make;
    int year, speed;
    
    do{
        cout << "Enter the make of the car:" << endl;
        getline(cin, make);
    } while(make == " ");
    
    do{
        cout << "Enter the year of the car:" << endl;
        cin >> year;
    } while(year <= 0);
    
    do{
        cout << "Enter the speed of the car:" << endl;
        cin >> speed;
    } while(speed <= 0);
    
    //Create object
    Car car(year, speed, make);
    cout << "Car Current speed: "; cout << car.getSpeed() << endl;
    cout << "Calling the acceleration function 5x.." << endl;
    
    for(int i = 0; i < 5;i++){
        cout << "Car current speed: ";
        car.accelrt();
        cout << car.getSpeed() << " mph" << endl;
    }
    cout << endl << endl;
    cout <<"Calling the Brake function 5x.." << endl;
    for(int i = 0; i < 5; i++){
        cout << "Car current speed (breaking..)" << endl;
        car.brake();
        cout << car.getSpeed() << " mph" << endl;;
    }
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

