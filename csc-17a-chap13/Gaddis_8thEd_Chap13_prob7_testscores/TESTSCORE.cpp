

/* 
 * File:   TESTSCORE.cpp
 * Author: William Gunadi
 * Purpose: Test score implementation file
 * Created on November 19, 2017, 1:48 PM
 */

#include <cstdlib>

#include "TESTSCORE.h"

using namespace std;

testscore::testscore(int test1, int test2, int test3){
    this->test1 = test1;
    this->test2 = test2;
    this->test3 = test3;
}

void testscore::setTest1(int test1){
    this->test1 = test1;
}

void testscore::setTest2(int test2){
    this->test2 = test2;
}

void testscore::setTest3(int test3){
    this->test3 = test3;
}

int testscore::getTst1(){
    return this->test1;
}

int testscore::getTst2(){
    return this->test2;
}

int testscore::getTst3(){
    return this->test3;
}

float testscore::tstAvg(){
    return ((this->test1 + this->test2 + this->test3)/3);
}
