/* 
 * File:   main.cpp
 * Author: William Gunadi
 * Created on October 4th, 2017, 
 * Purpose:  Gaddis Chapter 11 Problem 4
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <string>
using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "Month.h"
//Global Constants
const int MONTH = 12;
const string NAMES[MONTH] = { "January", "February", "March", "April", "May",
                            "June", "July", "August", "September", "October",
                            "November", "December" };
//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    Month data[MONTH];
    int hitemp = -100;    // Highest temperature of the year
    int lowtemp = 140;    // Lowest temperature of the year
    int avgtemp = 0;      // Average temperature of the year
    int total = 0;
    
        // Input values
    for (int i = 0; i < MONTH; i++) {
        cout << "----" << NAMES[i] << "----" << endl;
        
        // Get rainfall
        do {
            cout << "Input the monthly total rainfall" << endl;
            cin >> data[i].rain;
        } while (data[i].rain < 0);
        
        // Get max temp
        do {
            cout << "Input the high temperature of " << NAMES[i] << " in Fahrenheit" << endl;
            cin >> data[i].hitemp;
        } while (data[i].hitemp <= -100 || data[i].hitemp >= 140);
        
        // Get min temp
        do {
            cout << "Input the low temperature of " << NAMES[i] << " in Fahrenheit" << endl;
            cin >> data[i].lowtemp;
        } while (data[i].lowtemp <= -100 || data[i].lowtemp >= 140);
        
        total += data[i].rain;
        hitemp = (data[i].hitemp > hitemp)?data[i].hitemp:hitemp;
        lowtemp = (data[i].lowtemp < lowtemp)?data[i].lowtemp:lowtemp;
        avgtemp += data[i].lowtemp + data[i].hitemp;
    }
    
    // Process values -> Map inputs to Outputs
    avgtemp /= MONTH; // Calculate the average temp
    
    // Display Output
    cout << "Average monthly rainfall: " << total / MONTH << " in" << endl;
    cout << "Total rainfall: " << total << " in" << endl;
    cout << "Highest temperature: " << hitemp << "°F" << endl;
    cout << "Lowest temperature: " << lowtemp << "°F" << endl;
    cout << "Average temperature: " << avgtemp << "°F" << endl;

    // Exit Program
    return 0;
}

