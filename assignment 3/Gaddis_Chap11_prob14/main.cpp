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
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "Bin.h"
//Global Constants

//Function Prototypes
void AddPrt(Bin &, int);
void RemvPrt(Bin &, int);
void Display(Bin[], int);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    const int arrSize = 10;
    bool quit = true;
    Bin Part[arrSize] = { {"Valve", 10},
                 {"Bearing", 5},
                 {"Bushing", 15},
                 {"Coupling", 21},
                 {"Flange", 7},
                 {"Gear", 5},
                 {"Gear Housing", 5},
                 {"Vacuum Gripper", 25},
                 {"Cable", 18},
                 {"Rod", 12}
    };
    
    cout << "Displaying Parts and their inventory" << endl;
    Display(Part, arrSize);
    cout << "\nEnter 0 to quit" << endl;
    
    do{
        int choice;
        int amount;
        int ans;
        
        //Select which part to edit
        cout << endl << endl;
        cout << "Select which part to add or subtract: " << endl;
        cout << "Enter 0 to quit." << endl;
        cin >> choice;
        choice--;
        
        if(choice == -1){
            cout << "quitting..." << endl;
            quit = false;
            continue;
        }
        
        do {
            cout << "How many parts to edit? (must be greater than 0)." << endl;
            cin >> amount;
        } while(amount < 0);
       
        //select whether to add or subtract
        do {
            cout << "Add or subtract?: " << endl;
            cout << "1. Add." << endl;
            cout << "2. Subtract." << endl;
            cout << "Your Choice = ";cin >> ans;
        } while(ans < -1 || ans > 2);
        
        //Add
        if( ans == 1){
            AddPrt(Part[choice], amount);
            Display(Part, arrSize);
        }
        //Subtract
        if(ans == 2){
            RemvPrt(Part[choice], amount);
            Display(Part, arrSize);
        }  
        
    } while(quit);
    
    //Exit stage right!
    return 0;
}

void RemvPrt(Bin &part, int amount){
    part.number -= amount;
    if(part.number < 0){
        part.number = 0;
        cout << "Not enough in stock, do not subtract anymore." << endl;
    }
    
}

void AddPrt(Bin &part, int amount){
    part.number += amount;
    if(part.number > 30){
        part.number = 30;
        cout << "Too many in stock, Do not add anymore." << endl;
    }
}

void Display(Bin Part[], int size){
    //Display the parts and stock
    cout << left;
    cout << "    Part name         Stock" << endl;
    for(int i = 0; i < size; i++){
        cout << " " << i+1 << ". " << setw(21) << Part[i].name 
                << setw(16) << Part[i].number << endl;
    }  
}

