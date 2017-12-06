/* 
 * File:   RetailItem.cpp
 * Author: William Gunadi
 *
 * Created on October 23, 2017, 12:52 AM
 */

#include <cstdlib>
#include "Item.h"
#include <string>

using namespace std;

RetailItem::RetailItem(string des, int units, float price){
    this->descpt = des;
    this->units = units;
    this->price = price;
}

void RetailItem::setDes(string des){
    this->descpt = des;
}

void RetailItem::setPrice(float price){
    this->price = price;
}

void RetailItem::setUnit(int units){
    this->units = units;
}

float RetailItem::getPrice(){
    return this->price;
}

int RetailItem::getUnit(){
    return this->units;
}

string RetailItem::getDes(){
    return this->descpt;
}

/*class RetailItem{
    private:
        std::string descpt;
        int units;
        float price;

    public:
        RetailItem(std::string des, int units, int price);
        void setDes();
        void setUnit();
        void setPrice();
        int getUnit();
        float getPrice();
        std::string getDes();
    
};*/