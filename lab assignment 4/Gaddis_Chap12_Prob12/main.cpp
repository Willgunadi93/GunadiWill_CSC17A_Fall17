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
    Division div[4][4] = {}; // Each division by quarter
    fstream file;         // File to read from
    int quartly[4] = {};  // Total sales for each quarter
    int yearly[4] = {};   // Total sales by division
    int totYr = 0;        // Total yearly corporate sales
    float avg[4] = {};    // Average sales of each division
    int high = 0;         // Highest sales
    int low = 2000000000; // Lowest sales
    
    // Open the file
    file.open("Sales.dat", ios::in | ios::binary);
    
    // Read from the file
    for (int i = 0; i < 4; i++) { // Iterate through each division
        for (int j = 0; j < 4; j++) { // Iterate through each quarter
            int len; // Length of the name
            file.read(reinterpret_cast<char *>(&len), sizeof(int));
            char *str = new char[len];
            file.read(str, len);
            file.read(reinterpret_cast<char *>(&div[i][j].quart), sizeof(char));
            file.read(reinterpret_cast<char *>(&div[i][j].sales), sizeof(int));
            div[i][j].name = string(str);
            
            // Cleanup
            delete [] str;
            
            // Stats
            quartly[j] += div[i][j].sales;
            yearly[i] += div[i][j].sales;
            totYr += div[i][j].sales;
            
            high = (div[i][j].sales > high)?div[i][j].sales:high;
            low = (div[i][j].sales < low)?div[i][j].sales:low;
        }    
    }
    
    // Close
    file.close();
    
    // Display Output
    for (int i = 0; i < 4; i++) {
        cout << "Total sales for quarter " << i + 1 << ": $" << quartly[i] << endl;
    }
    
    for (int i = 0; i < 4; i++) {
        cout << "Total sales for " << div[i][0].name << ": $" << yearly[i] << endl;
    }
    
    for (int i = 0; i < 4; i++) {
        avg[i] = yearly[i] / 4.0f;
        cout << "Average quarterly sales for " << div[i][0].name << ": $" << avg[i] << endl;
    }
    
    cout << "Total yearly sales: $" << totYr << endl;
    cout << "Highest quarterly sales: $" << high << endl;
    cout << "Lowest quarterly sales: $" << low << endl;
    
    // Exit Program
    return 0;
}
