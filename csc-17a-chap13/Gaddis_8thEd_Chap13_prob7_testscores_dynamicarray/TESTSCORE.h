/* 
 * File:   TESTSCORE.h
 * Author: WilliamGunadi
 * Purpose: testscore class specifications
 * Created on November 19, 2017, 1:46 PM
 */

#ifndef TESTSCORE_H
#define TESTSCORE_H

class testscore{
    private:
        int* tests;
        int ntest;
        float avrg = 0;
    public:
        testscore(int);
        void getTest();
        float tstAvg();
        void setTstScr();
};

#endif /* TESTSCORE_H */

