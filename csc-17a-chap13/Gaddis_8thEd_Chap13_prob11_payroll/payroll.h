/* 
 * File:   payroll.h
 * Author: WilliamGunadi
 * Purpose: Specification file for payroll class
 * Created on November 21, 2017, 2:09 AM
 */

#ifndef PAYROLL_H
#define PAYROLL_H

class payrll{
private:
    int hrWrk;      //hours worked
    float payRt;    //Payrate of employee
    float totPay;   //Total pay for the week
public:
    payrll();
    void sethrWrk(int);
    void setPyRt(float);
    void setTotPy();
    int getHrwrk(){ return hrWrk; }                 // accessor function: get hours worked
    int getPyRt(){ return payRt; }
    float getTotPy(){ return totPay; }
    
};


#endif /* PAYROLL_H */

