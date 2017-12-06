/* 
 * File:   account.h
 * Author: WilliamGunadi
 * Purpose: Midterm problem 1 Bank checking account
 * Created on October 23, 2017, 2:39 PM
 */

#ifndef ACCOUNT_H
#define ACCOUNT_H

struct account{
    char *name;     //name
    char *Addrs;    //Address
    int accNum;     //Account number
    float balance;  //Account's current balance
    float totCheck;     //Number of checks deposited
    float totDep;   //Total amount of money deposited
    
    
};


#endif /* ACCOUNT_H */

