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
        int test1;
        int test2;
        int test3;
    public:
        testscore(int, int, int);
        void setTest1(int);
        void setTest2(int);
        void setTest3(int);
        int getTst1();
        int getTst2();
        int getTst3();
        float tstAvg();
};

#endif /* TESTSCORE_H */

