/* 
 * File:   main.cpp
 * Author: William Gunadi
 * Created on October 5th, 2017, 
 * Purpose:  Gaddis Chap 11 Prob 13
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>

using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "Drink.h"
//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    // Declaration of Variables
    const int NDRINKS = 5; // Number of drinks sold by the machine
    Drink machine[NDRINKS] = { 
                         { "Cola", 0.75f, 20},
                         { "Root Beet", 0.75f, 20 },
                         { "Lemon-Lime", 0.75f, 20 },
                         { "Grape Soda", 0.8f, 20 },
                         { "Cream Soda", 0.8f, 20 } };
    bool running = true; // Whether the main loop is running or not
    float revenue = 0.0f; // The total amount in dollars earned by the machine
    
    cout << endl << endl << "This program simulates a Soda Dispenser" << endl;
    // Main Loop
    do {
        int drink;      // The selected drink
        float money;    // Amount of money inserted in dollars
        float change;   // Change amount in dollars
        
        // Output header
        cout << "Soda          Price   In-Stock" << endl;
        
        // Output table of drinks
        for (int i = 0; i < NDRINKS; i++) {
            cout << left;
            cout << i + 1 << ". " << setw(13) << machine[i].name
                 << "$" << setw(10) << machine[i].price
                 << machine[i].stock << endl;
        }
        cout << NDRINKS + 1 << ". Quit" << endl;
        
        // Get the selected drink
        cout << "Choose a drink!" << endl;
        cin >> drink;
        drink--;
        if(drink < 0 || drink > NDRINKS){
            cout << "Not a valid answer: Enter Drink: "; 
            cin >> drink;}
        
        // Check if quit
        if (drink == NDRINKS) {
            cout << "Total revenue = $" << revenue << endl;
            cout << "Quitting.." << endl;
            running = false;
            continue;
        }
        
        // Check stock
        if (machine[drink].stock == 0) {
            cout << machine[drink].name << " is sold out" << endl;
            continue;
        }
        
        // Get the money amount
        cout << "Enter the amount of money to enter: "; cin >> money;
        if(money < 0.0f || money > 1.0f){
            cout << "Not a valid input. Enter only 0 - 1 dollar: "; 
            cin >> money;
        }
            
        
        // Check if its enough
        if (machine[drink].price > money) {
            cout << "Not enough money for... :(" << machine[drink].name << endl;
            continue;
        }
        
        cout << setprecision(2) << fixed << endl;
        
        change = money - machine[drink].price; // Calculate change
        machine[drink].stock--; // Adjust stock
        revenue += change; // Add to revenue
        
        cout << "Returning $" << change << " change. Thank you for your purchase" << endl << endl;
    } while (running);

    // Exit Program
    return 0;
}

