/* 
 * File:   date.h
 * Author: WilliamGunadi
 * Purpose:
 * Created on October 17, 2017, 8:13 PM
 */

#ifndef DATE_H
#define DATE_H

class Date{
    private:
        int year;
        int month;
        int day;
    public:
        Date(int, int, int); //constructor
        int getYear();
        int getMonth();
        int getDay();
        
};


#endif /* DATE_H */

