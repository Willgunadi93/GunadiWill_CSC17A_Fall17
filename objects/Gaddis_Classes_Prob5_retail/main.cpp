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
#include <iomanip>

#include "Item.h"  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    typedef RetailItem Item;
    Item jacket("Jacket", 12, 59.95);
    Item jeans("Designer Jeans", 40, 39.95);
    Item shirt("Shirt", 20, 24.95);
    
    //Display items
    cout << left;
    cout << "------------------------------------------------------" << endl;
    cout << "Item\t\tDescription\t\tUnits\tPrice" << endl;
    
    cout << "Item #1\t\t" << jacket.getDes() << " \t\t\t" << jacket.getUnit() << "\t"
         << jacket.getPrice() << endl;;
    cout << "Item #2\t\t" << jeans.getDes() << " \t\t" << jeans.getUnit() << "\t"
         << jeans.getPrice() << endl;
    cout << setw(16) << "Item #3" << setw(24) << shirt.getDes() << setw(8) << shirt.getUnit() << shirt.getPrice();
    //Exit stage right!
    return 0;
}

