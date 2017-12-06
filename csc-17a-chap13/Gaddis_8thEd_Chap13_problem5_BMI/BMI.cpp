/* 
 * File:   BMI.cpp
 * Author: William Gunadi
 *Purpose: BMI class implementation file
 * Created on November 19, 2017, 11:27 AM
 */

//system library
#include <cstdlib>
#include <cmath>

//User library
#include "BMI.h"

using namespace std;

BMI::BMI(int height, int weight){
    this->height = height;
    this->weight = weight;
    this->bmi = calcBMI();
}

void BMI::setHght(int height){
    this->height = height;
}

void BMI::setWght(int weight){
    this->weight = weight;
}

int BMI::getHght(){
    return this->height;
}

int BMI::getWght(){
    return this->weight;
}

float BMI::calcBMI(){
    float bmi;
    
    bmi = (this->weight / pow(this->height,2)) * 703;
    return bmi;
}

float BMI::getBMI(){
    return this->bmi;
}