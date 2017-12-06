/* 
 * File:   main.cpp
 * Author: William Gunadi
 * Created on September , 2017, 
 * Purpose:  Template to be utilized in creating
 *           solutions to problems in our CSC/CIS 5 
 *           class.
 */

//System Libraries
#include <iostream>

#include "array.h"  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    char ans;
    int size, index;
    
    cout << "Enter size of the array of floats" << endl;
    cin >> size;
    farray arr(size);
    cout << "All the elements in the array have a default value of 0.0" << endl;
    
    //menu
    do{
        cout << endl;
        cout << "Menu: " << endl;
        cout << "1. Store a number into the array" << endl;
        cout << "2. Retrieve a number from the array" << endl;
        cout << "3. Get highest number from the array" << endl;
        cout << "4. Get Lowest number from the array" << endl;
        cout << "5. Exit" << endl;
        
        do{
            cout << "Enter valid choice" << endl;
            cin >> ans;
        } while(ans > '5' || ans < '1');

        switch(ans){
            case '1': {
                cout <<"Enter which position of the array you'd like to store" << endl;
                cin >> index;
                arr.setArr(index);
            } break;
            case '2':{
                cout << "What element would you like to retrieve?" << endl;
                cin >> index;
                cout << arr.getNum(index) << endl;;
            } break;
            case '3': cout << "highest number is " << arr.getHigh() << endl; break;
            case '4': cout << "lowest number is " << arr.getLow() << endl; break;
            default: cout << "Exiting.." << endl; break;
        }
        
        
    } while(ans != '5');
    
    //Exit stage right!
    return 0;
}

