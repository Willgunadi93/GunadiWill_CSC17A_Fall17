

/* 
 * File:   population.cpp
 * Author: WilliamGunadi
 * Purpose: implementaiton file for class population
 * Created on November 20, 2017, 6:20 PM
 */
//system libraries
#include <cstdlib>
#include <iostream>


//user libraries
#include "population.h"

population::population(){
    this->popult = 0;
    this->nBirth = 0;
    this->nDeath = 0;
}

int population::getPop(){
    return this->popult;
}
void population::setBirth(int birth){
    this->nBirth = birth;
}

void population::setDeath(int death){
    this->nDeath = death;
}

void population::setpop(int popult){
    this->popult = popult;
}

int population::getBirth(){
    return this->nBirth;
}

int population::getDeath(){
    return this->nDeath;
}

float population::getDthRt(){
    return static_cast<float>(this->nDeath) / this->popult;
}

float population::getBthRt(){
    return static_cast<float>(this->nBirth) / this->popult;
}


