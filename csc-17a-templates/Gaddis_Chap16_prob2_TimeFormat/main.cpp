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
#include "Time.h"
//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    int hr, sec;
    //Create object
    MilTime time1(0, 0);
    
    cout << "Enter Time in military: " << endl;
    cin >> hr;
    cout << "Enter military seconds: " << endl;
    cin >> sec;
    
    try{
        time1.setTime(hr, sec);
        cout << "Military Format" << time1.getHour() << "hours: " << time1.getSec() << " Sec" << endl;
        
        //Output standard time
        if(time1.getHour() / 12 == 1){
            cout << "Standard Time: " << time1.getStndHr() << endl;
            if(time1.getMin() == 0){
                cout << time1.getMin() << "0" << ":" << time1.getSec() << "PM" << endl;
            }
            else{
                cout << time1.getMin() << "PM" << endl;
            }
                
            }
        else{
            cout << "Standard Format: " << time1.getStndHr() << ":";
            
            if(time1.getMin() == 0){
                cout << time1.getMin() << "0" << " AM" << endl;
            }
            else{
                cout << time1.getMin() << ": " << time1.getSec() << "AM" << endl;
            }
        }
    }
    
    catch(MilTime::InvdHr) {
        cout << "Invalid: Hour must be 0-2359" << endl;
    }
    
    catch(MilTime::InvdSec) {
        cout << "Invalid: Seoonds must be 0-59" << endl;
    }
    
    
    
    //Exit stage right!
    return 0;
}

