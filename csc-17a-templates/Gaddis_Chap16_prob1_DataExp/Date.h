/* 
 * File:   Date.h
 * Author: William Gunadi
 * Purpose:
 * Created on December 3, 2017, 7:55 PM
 */

#ifndef DATE_H
#define DATE_H

class Date{
private:
    int day;
    int month;
    int year;
public:
    Date();
    class InvdDay{
        
    };
    class InvdMonth{
        
    };
    //Mutator functions
    void setDay(int);
    void setYear(int);
    void setMonth(int);
    //Accessor functions
    int getDay();
    int getYear();
    int getMonth();
    void printForm1();
    void printForm2();
    void printForm3();

    
    
};


#endif /* DATE_H */

