

/* 
 * File:   TESTSCORE.cpp
 * Author: William Gunadi
 * Purpose: Test score implementation file
 * Created on November 19, 2017, 1:48 PM
 */

#include <cstdlib>
#include <iostream>
#include "TESTSCORE.h"

using namespace std;

testscore::testscore(int nTest){
    this->ntest = nTest;
    tests = new int[this->ntest];
    
    setTstScr();
    getTest();
    
}

void testscore::setTstScr(){
    cout << "Enter the scores for the " << ntest << " tests: " << endl;
    for(int i = 0; i < this->ntest; i++){
        cout << "Enter score for test: " << i + 1 << endl;
        cin >> this->tests[i];
        this->avrg += tests[i];
    }
}

void testscore::getTest(){
    cout << "Outputting the scores of the tests" << endl;
    for(int i = 0; i < this->ntest; i++){
        cout << "Test " << i + 1 << " :  ";
        cout << this->tests[i] << endl;
    }
    
    this->avrg = avrg/ntest;
    cout << "The average : " << this->avrg << endl;
}




