/* 
 * File:   register.h
 * Author: WilliamGunadi
 * Purpose:
 * Created on December 2, 2017, 7:34 PM
 */

#ifndef REGISTER_H
#define REGISTER_H

class cashReg{
private:
    int nPrchs;         //Number of items purchased
    char* item;         //Name of item purchased
    float tax;
    float profit;       //30% profit added to the item's unit price
    float total;        //Total = price * (price * nPrchs)
    float subTot;       //total * (total * tax)
    float unitPrice;    //Price with profit 
    
public:
    cashReg(char*, int);
    void setUnit(float);
    float getUnit();
    void setTotal(int);
    float getTotal();
    void setSubTot();
    float getsubTot();
    
};


#endif /* REGISTER_H */

