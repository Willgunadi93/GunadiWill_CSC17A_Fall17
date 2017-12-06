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
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
#include "payroll.h"
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int hr;
    float rate;
    payrll* employee = new payrll[2];
    for(int i = 0; i < 2; i++){
        cout << "Enter the hours worked for employee " << i + 1 << endl;
        do{
            cin >> hr;
            employee[i].sethrWrk(hr);
            cin.ignore();
        } while(hr > 60);
        
        cout << "Enter payrate for employee " << i + 1 << endl;
        do{
            cin >> rate;
            employee[i].setPyRt(rate);
            cin.ignore();
        } while(rate < 0.0f);
        
        employee[i].setTotPy();
    }
    
    for(int j = 0; j < 2; j++){
        cout << "Total pay for employee " << j + 1 << " = ";
        cout << employee[j].getTotPy() << endl;
    }
    //Exit stage right!
    return 0;
}

