/* 
   File:   main
   Author: Will Gunadi
   Created on November 10th, 10:21 PM
   Purpose: Numbers Class Specification
 */

#ifndef NUMBERS_H
#define NUMBERS_H

class Numbers {
private:
    int number; // Day of the year
    static const char *numStr[9];
public:
    Numbers(int);
    void print();
};

#endif /* NUMBERS_H */

