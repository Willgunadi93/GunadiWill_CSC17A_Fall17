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
    fstream in;  // File to read from
    fstream out; // File to write filter to
    string buf;  // Buffer of text
    
    // Read the buffer from the first file
    in.open("Text.txt", ios::in);
    getline (in, buf, '\0');
    in.close();
    
    // Filter through the buffer
    bool newSen = true; // True if the current char is in a new sentence
    for (int i = 0; buf[i] != '\0'; i++) {
        if (buf[i] == '.' || buf[i] == '?' || buf[i] == '!') newSen = true;
        
        if (buf[i] >= 97 && buf[i] <= 122) {
            if (newSen) buf[i] -= 32;
            newSen = false;
        } else if (buf[i] >= 65 && buf[i] <= 90) {
            if (!newSen) buf[i] += 32;
            newSen = false;
        }
    }
    
    // Write to second file
    out.open("Filtered.txt", ios::out);
    out << buf;
    out.close();

    // Exit Program
    return 0;
}

