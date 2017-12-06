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
#include <cstring>
using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "Info.h"
//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    string name, address, phone;
    int age, num;
    char ans;
    
    Info me;
    do{
        cout << "This program creates a class that stores information." << endl;    
        cout << "Enter your name, address, phone number, and age. " 
               << endl;
        getline(cin,name); 
        me.setName(name);

        getline(cin, address); 
        me.setAdd(address);

        getline(cin, phone);
        me.setPhone(phone);

        cin >> age;
        me.setAge(age);


        cout << "Retreving your info.." << endl;
        cout << me.getName() << endl;
        cout << me.getAge() << endl;
        cout << me.getAdd() << endl;
        cout << me.getPhone() << endl;
        
        cout << "would you like to do it again? (press y to continue)" << endl;
        cin >> ans;
        cin.ignore();
    } while(toupper(ans) == 'Y');
    
    if(toupper(ans) == 'N') cout << "Exiting.. Goodbye" << endl;
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

