/* 
 * File:   midterm.h
 * Author: WilliamGunadi
 * Purpose:
 * Created on October 30, 2017, 2:59 PM
 */

#ifndef MIDTERM_H
#define MIDTERM_H

struct stats{
    float avg;
    float median;
    int* mode;
    int nModes;
    int maxFreq;
    
};

struct account{
    char *name;     //name
    char *Addrs;    //Address
    int accNum;     //Account number
    float balance;  //Account's current balance
    float totCheck;     //Number of checks deposited
    float totDep;   //Total amount of money deposited
    
};

struct employee{
    std::string name;
    int hrWrkd;
    float rate;
    float money;
       
    
};

#endif /* MIDTERM_H */

