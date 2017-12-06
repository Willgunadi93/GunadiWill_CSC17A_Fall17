/* 
 * File:   Total.h
 * Author: WilliamGunadi
 * Purpose:
 * Created on December 3, 2017, 10:50 PM
 */

//System Libraries
#include <iostream>


#ifndef TOTAL_H
#define TOTAL_H

//template declaration
template <class T>

T Total(T n){
    T total = 0; 
    T num;
    int i = 0;
    
    cout << "Enter values: " << endl;
    while(i < n){
        cin >> num;
        total += num;
        i++;
    }
    
    return total;
    
}
#endif /* TOTAL_H */

