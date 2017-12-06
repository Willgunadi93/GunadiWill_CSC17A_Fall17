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
#include <cstring>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Fucntion Prototype
void upper(char *);
void lower(char *);
void reverse(char *);

// Execution Begins Here!
int main(int argc, char** argv) {
    // Declaration of Variables
    char str[256];
    
    // Input values
    cout << "Enter a string" << endl;
    cin.getline(str, 256);
    
    // Display Output
    cout << "Original: " << str << endl;
    
    reverse(str);
    cout << "Reversed: " << str << endl;
    
    lower(str);
    cout << "Lowered:  " << str << endl;
    
    upper(str);
    cout << "Uppered:  " << str << endl;
    
    // Exit Program
    return 0;
}

void upper(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 97 && str[i] <= 122) str[i] -= 32;
    }
}

void lower(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 65 && str[i] <= 90) str[i] += 32;
    }
}

void reverse(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if(str[i] == tolower(str[i])){
            str[i] = toupper(str[i]);
        }
        else if(str[i] == (toupper(str[i]))){
            str[i] = tolower(str[i]);
        }
    }
}