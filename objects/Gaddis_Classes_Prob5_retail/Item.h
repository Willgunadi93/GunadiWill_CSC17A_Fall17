/* 
 * File:   Item.h
 * Author: WilliamGunadi
 * Purpose:
 * Created on October 23, 2017, 12:48 AM
 */

#ifndef ITEM_H
#define ITEM_H

#include <string>

using namespace std;

class RetailItem{
    private:
        string descpt;
        int units;
        float price;

    public:
        RetailItem(string des, int units, float price);
        void setDes(string);
        void setUnit(int);
        void setPrice(float);
        int getUnit();
        float getPrice();
        string getDes();
    
};

#endif /* ITEM_H */

