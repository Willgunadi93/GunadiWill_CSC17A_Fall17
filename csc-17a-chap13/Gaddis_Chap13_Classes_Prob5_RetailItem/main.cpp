/* 
   File:   main
   Author: Will Gunadi
   Created on Oct 20, 2017, 5:25 PM
   Purpose: Demonstrate RetailItem class
 */

// System Libraries
#include <iostream>   // Input/Output object


using namespace std;  // Name-space used in the System Library

// User Libraries
#include "RetailItem.h"

// Global Constants

// Function prototypes

// Execution Begins Here!
int main(int argc, char** argv) {
    RetailItem item1; // 3 Items
    RetailItem item2("Designer Jeans", 40, 34.95f);
    RetailItem item3;
    
    // Input Item 1
    item1.setDesc("Jacket");
    item1.setUnit(12);
    item1.setPrc(59.95f);

    
    // Input Item 3
    item3.setDesc("Shirt");
    item3.setUnit(20);
    item3.setPrc(24.95f);
    
    // Output Item 1
    cout << "Item 1" << endl;
    cout << "Description: " << item1.getDesc() << endl;
    cout << "Units in Stock: " << item1.getUnit() << endl;
    cout << "Price: $" << item1.getPrc() << endl;
    
    // Output Item 2
    cout << "Item 2" << endl;
    cout << "Description: " << item2.getDesc() << endl;
    cout << "Units in Stock: " << item2.getUnit() << endl;
    cout << "Price: $" << item2.getPrc() << endl;
    
    // Output Item 3
    cout << "Item 3" << endl;
    cout << "Description: " << item3.getDesc() << endl;
    cout << "Units in Stock: " << item3.getUnit() << endl;
    cout << "Price: $" << item3.getPrc() << endl;
    
    return 0;
}