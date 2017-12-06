/* 
 * File:   main.cpp
 * Author: William Gunadi
 * Created on October 10th , 2017, 
 * Purpose:  Gaddis Chapter 10 Problem 12 Password confirm
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    bool issix = false, isUpCs = false, isnum = false, islowcs = false;
    char password[250];
    
    //Input password
    cout << "Enter your password: " << endl;
    cin.getline(password, 250);
    
    //Verify the password
    for(int i = 0; password[i] != '\0'; i++){
        if(isdigit(password[i])) isnum = true;
        if(islower(password[i])) islowcs = true;
        if(isupper(password[i])) isUpCs = true;
        if(strlen(password) >= 6) issix = true;
    }
    
    if(isnum && islowcs && isUpCs && issix){
        cout << "Password you've entered is valid!" << endl;
    }
    else {
        if(!isnum) cout << "Your password must have a number!" << endl;
        if(!islowcs) cout << "your password must have a lowercase letter!" << endl;
        if(!isUpCs) cout << "your password must have one uppercase letter!" << endl;
        if(!(strlen(password) >= 6)) cout << "your password must be 6 or more " << endl;
    }
    
    //Exit stage right!
    return 0;
}

