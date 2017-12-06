/* 
 * File:   Drink.h
 * Author: WilliamGunadi
 * Purpose:
 * Created on October 6, 2017, 11:53 PM
 */

#ifndef DRINK_H
#define DRINK_H

using namespace std;

//Library
#include <string>

struct Drink {
    string name;   // Name of drink
    float price;        // Price of the drink
    int stock;          // Number of cans in the machine
};

#endif /* DRINK_H */

