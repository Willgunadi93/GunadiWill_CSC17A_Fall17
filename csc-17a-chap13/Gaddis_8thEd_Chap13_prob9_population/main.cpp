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
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "population.h"
//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int poplt, death, birth;
    
    //Input variables
    do{
        cout << "Enter the population  "; 
        cin >> poplt;
    } while(poplt < 1);
    
    do{
       cout << "Enter the number of deaths   "; 
       cin >> death;  
    } while( death <= 0);
    
    do{
       cout << "Enter the number of births   ";
       cin >> birth; 
    } while(birth <= 0);
    
    //create object;
    population today;
    
    //set the object's variables;
    today.setBirth(birth);
    today.setDeath(death);
    today.setpop(poplt);
    
    //output the attributes
    cout << "Deaths = " << today.getDeath() << endl;
    cout << "Births = " << today.getBirth() << endl;
    cout << "Population = " << today.getPop() << endl;
    
    //output the rates
    cout << fixed << setprecision(3) << showpoint;
    cout << "Death rate   = " << today.getDthRt() << endl;
    cout << "Birthrate    = " << today.getBthRt() << endl;
    //Exit stage right!
    return 0;
}

