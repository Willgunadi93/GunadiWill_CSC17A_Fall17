/* 
   File:   main
   Author: Eric Barrett
   Created on May 10, 2017, 10:36 PM
   Purpose: Month Class Specification
 */

using namespace std;

#ifndef MONTH_H
#define MONTH_H

class Month {
private:
    char *name; // Name of month
    int num;       // Numeric month value
    void calcNum();
    static char *months[12];
public:
    Month();
    Month(char *);
    void setName(char *);
    const char *getName();
    void setNum(int);
    int getNum();
    
    Month operator++();
    Month operator++(int);
    Month operator--();
    Month operator--(int);
    friend ostream& operator<<(ostream &os, const Month &month);
    friend istream& operator>>(istream &is, Month &month);
};

#endif /* NUMDAYS_H */

