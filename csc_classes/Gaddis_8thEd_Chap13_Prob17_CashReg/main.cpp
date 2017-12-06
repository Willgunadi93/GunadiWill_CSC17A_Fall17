/* 
   File:   main
   Author: Will Gunadi
   Created on Oct 20, 2017, 5:25 PM
   Purpose: Demonstrate RetailItem class
 */

// System Libraries
#include <iostream>   // Input/Output object
#include <string>


using namespace std;  // Name-space used in the System Library

// User Libraries
#include "RetailItem.h"
#include "register.h"

// Global Constants

// Function prototypes

// Execution Begins Here!
int main(int argc, char** argv) {
    RetailItem item1; // 3 Items objects
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
    
    
    int nItems;
    char item[20];
    
    //Get item name and n amout to purchase
    cout << "What item would you like to buy?" << endl;
    cin.getline(item, 20);
    do{
        cout << "How many items would you like to buy?" << endl;
        cin >> nItems;
    } while(nItems < 0);
    
    //create cash register object
    cashReg trnstion(item, nItems);
    float tempPrice;
    
    //Display item + item cost
    if(item == item1.getDesc()){
        cout << "Item:  " << item1.getDesc() << " Price:  " << item1.getPrc() << endl;
        tempPrice = item1.getPrc();
        
    }else if(item == item2.getDesc()){
        cout << "item:  " << item2.getDesc() << " Price:  " << item2.getPrc() << endl;
        tempPrice = item2.getPrc();
    }
    else if(item == item3.getDesc()){
        cout << "Item:  " << item3.getDesc() << " Price:  " << item3.getPrc() << endl;
        tempPrice = item3.getPrc();
    }
    
    //Get item unit price.
    trnstion.setUnit(tempPrice);
    cout << "Unit price" << endl;
    cout << trnstion.getUnit() << endl;
    cout << "Total Price" << endl;
    trnstion.setTotal(nItems);
    cout << trnstion.getTotal();
    cout << "Total after tax" << endl;
    trnstion.setSubTot();
    cout << trnstion.getsubTot() << endl;
    cout << "Units left for the item";
    item1.adjUnit(nItems);
    cout << ": " << item1.getUnit() << endl; 
    
    
    
    

    
    // Output Item 1
    /*
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
    */
    
    
    return 0;
}