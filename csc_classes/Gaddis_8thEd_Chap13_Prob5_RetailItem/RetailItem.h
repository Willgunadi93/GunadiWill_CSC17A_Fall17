/* 
   File:   main
   Author: Will Gunadi
   Created on October 20th, 2017, 5:53 PM
   Purpose: RetailItem Class Specification
 */

#ifndef RETAILITEM_H
#define RETAILITEM_H

class RetailItem {
private:
    char *desc;
    int units;
    float price;
public:
    RetailItem();
    RetailItem(char *, int, float);
    const char *getDesc();
    void setDesc(char *);
    int getUnit();
    void setUnit(int);
    float getPrc();
    void setPrc(float);
};

#endif /* RETAILITEM_H */

