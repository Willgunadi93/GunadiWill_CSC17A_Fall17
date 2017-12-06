/* 
   File:   main
   Author: Will Gunadi
   Created on October 20th, 2017, 5:53 PM
   Purpose: RetailItem Class Specification
 */

#ifndef RETAILITEM_H
#define RETAILITEM_H

#include <string>
using namespace std;

class RetailItem {
private:
    string desc;
    int units;
    float price;
public:
    RetailItem();
    RetailItem(string, int, float);
    string getDesc();
    void setDesc(string);
    int getUnit();
    void setUnit(int);
    float getPrc();
    void setPrc(float);
    void adjUnit(int);
};

#endif /* RETAILITEM_H */

