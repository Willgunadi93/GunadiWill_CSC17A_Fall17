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

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
  // Declaration of Variables
    char nFile[256];
    fstream file;
    
    // Input values
    cout << "Input the file name " << endl;
    cout << "A test file has been provided 'file.txt'" << endl;
    cin >> nFile;
    
    // Open the file
    file.open(nFile, ios::in);
    
    // Print each line
    int i = 0;
    while (!file.eof()) {
        char str[256];
        file.getline(str, 256);
        cout << "Line #" << i + 1 << ": " << str << endl;
        i++;
    }
    
    if (i <= 10) cout << "Displayed entire file" << endl;
    
    // Cleanup
    file.close();

    // Exit Program
    return 0;
}

