

/* 
 * File:   register.cpp
 * Author: William Gunadi
 *
 * Created on December 2, 2017, 7:56 PM
 */
//System Library
#include <cstdlib>

//User Library
#include "register.h"

using namespace std;

cashReg::cashReg(char* item, int nPrchs){
    this->item = item;
    this->nPrchs = nPrchs;
    this->tax = 0.06f;
    this->profit = 0.30f;
}

void cashReg::setUnit(float unitPrice){
    this->unitPrice = unitPrice + (unitPrice * profit);
}

float cashReg::getUnit(){
    return this->unitPrice;
}

void cashReg::setTotal(int nItems){
    this->total = this->unitPrice * nItems;
}

float cashReg::getTotal(){
    return this->total;
}

void cashReg::setSubTot(){
    this->subTot = total + (total * tax);
}

float cashReg::getsubTot(){
    return this->subTot;
}