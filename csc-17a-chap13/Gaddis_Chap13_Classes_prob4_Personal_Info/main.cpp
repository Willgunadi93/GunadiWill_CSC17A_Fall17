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
    Info *me = new Info[3];
    
         cout << "This program creates an array of class that stores information." << endl;    
    for(int i = 0; i < 3; i++){
   
        cout << "Enter your name, address, phone number, and age. " 
             << i + 1 << endl;
        getline(cin,name); 
        me[i].setName(name);

        getline(cin, address); 
        me[i].setAdd(address);

        getline(cin, phone);
        me[i].setPhone(phone);

        cin >> age;
        me[i].setAge(age);
        cin.ignore();
        cout << endl << endl;
    }
    
    cout << "Display the info? enter Y if so" << endl;
    cin >> ans;

    if(toupper(ans) == 'Y'){
        for(int i = 0; i < 3; i++){
            cout << "Retreving your info.. Person: " << i+1 << endl;
            cout << me[i].getName() << endl;
            cout << me[i].getAge() << endl;
            cout << me[i].getAdd() << endl;
            cout << me[i].getPhone() << endl << endl;
         }

     }
         
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

