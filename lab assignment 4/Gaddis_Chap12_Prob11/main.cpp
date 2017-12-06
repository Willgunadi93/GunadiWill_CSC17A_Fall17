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
#include <fstream>
using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "division.h"
//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    // Declaration of Variables
    string divName[] = { "East", "West", "North", "South" };
    Division div[4][4]; // Each division by quarter
    fstream file; // File to write to
    
    // Input values
    for (int i = 0; i < 4; i++) { // Iterate through each division
        for (int j = 0; j < 4; j++) { // Iterate through each quarter
            div[i][j].name = divName[i];
            div[i][j].quart = j;
            do {
                cout << "Input the total sales of " << div[i][j].name
                     << " in quarter " << j + 1 << endl;
                cin >> div[i][j].sales;
            } while (div[i][j].sales < 0);
        }
    }
    
    // Open the file
    file.open("Sales.txt", ios::out | ios::binary);
    
    // Write to the file
    for (int i = 0; i < 4; i++) { // Iterate through each division
        for (int j = 0; j < 4; j++) { // Iterate through each quarter
            int len = div[i][j].name.length() + 1;
            file.write(reinterpret_cast<char *>(&len), sizeof(int));
            file.write(div[i][j].name.c_str(), len * sizeof(char));
            file.write(reinterpret_cast<char *>(&div[i][j].quart), sizeof(char));
            file.write(reinterpret_cast<char *>(&div[i][j].sales), sizeof(int));
        }    
    }
    
    // Close
    file.close();
    
    cout << "Data saved to file" << endl;
    
    // Exit Program
    return 0;
}

