/* 
   File:   main
   Author: Will Gunadi
   Created on November 12th 2017,
   Purpose: NumDays Class Specification
 */

#ifndef NUMDAYS_H
#define NUMDAYS_H

class NumDays {
private:
    int hours; // Number of work hours
    float days; // Number of work days
public:
    NumDays(int);
    void setHrs(int);
    int getHrs();
    void setDays(float);
    float getDays();
    
    NumDays operator++();
    NumDays operator++(int);
    NumDays operator--();
    NumDays operator--(int);
    NumDays operator+(NumDays);
    NumDays operator-(NumDays);
};

#endif /* NUMDAYS_H */

