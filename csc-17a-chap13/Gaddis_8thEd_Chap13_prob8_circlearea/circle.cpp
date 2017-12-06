

/* 
 * File:   circle.cpp
 * Author: William Gunadi
 * Purpose: Implementation file for class circle
 * Created on November 20, 2017, 5:39 PM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <cmath>

//user libraries
#include "circle.h"

using namespace std;

//constructor
circle::circle(float radius){
    this->radius = radius;
}

void circle::setRad(float radius){
    this->radius = radius;
}

float circle::getRad(){
    return this->radius;
}

float circle::getArea(){
    return (this->pi * pow(this->radius,2));
}

float circle::getDiam(){
    return (this->radius * 2);
}

float circle::getCirc(){
    return (2 * pi * radius);
}

