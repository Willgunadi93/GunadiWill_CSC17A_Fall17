/* 
   File:   main
   Author: Will Gunadi
   Created on October 20th 2017, 5:25 PM
   Purpose: RetailItem Class Implementation
 */

// User Libraries
#include "RetailItem.h"

#include <string>

using namespace std;

RetailItem::RetailItem(string desc, int units, float price) {
    this->desc = desc;
    this->units = units;
    this->price = price;
}


RetailItem::RetailItem() {
    this->desc = "";
    this->units = 0;
    this->price = 0.0f;
}

string RetailItem::getDesc() {
    return this->desc;
}

void RetailItem::setDesc(string desc) {
    this->desc = desc;
}

int RetailItem::getUnit() {
    return this->units;
}

void RetailItem::setUnit(int units) {
    this->units = units;
}

float RetailItem::getPrc() {
    return this->price;
}

void RetailItem::setPrc(float price) {
    this->price = price;
}

void RetailItem::adjUnit(int bought){
    this->units -= bought;
}