/* 
   File:   main
   Author: Will Gunadi
   Created on November 10th, 2017
   Purpose: DayOfYear Class Specification
 */

#ifndef DAYOFYEAR_H
#define DAYOFYEAR_H

class DayOfYear {
private:
    int day; // Day of the year
    
    static const char *months[12]; // List of month names
    static int mDays[12]; // Number of days in each month
public:
    DayOfYear(int);
    void print();
};

#endif /* DayOfYear_H */

