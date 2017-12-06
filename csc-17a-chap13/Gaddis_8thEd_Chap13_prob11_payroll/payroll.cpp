

/* 
 * File:   payroll.cpp
 * Author: WilliamGunadi
 *
 * Created on November 21, 2017, 2:16 AM
 */
//system libraries
#include <cstdlib>

using namespace std;

//user libraries
#include "payroll.h"

payrll::payrll(){
    this->hrWrk = 0;
    this->payRt = 0.0f;
    this->totPay = 0.0f;
}

void payrll::sethrWrk(int hrWrk){
    this->hrWrk = hrWrk;
}

void payrll::setTotPy(){
    float paycheck;
    paycheck = payRt * hrWrk;
    this->totPay = paycheck;
}

void payrll::setPyRt(float payRt){
    this->payRt = payRt;
}
