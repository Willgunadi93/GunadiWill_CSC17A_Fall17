

/* 
 * File:   Car.cpp
 * Author: Willia m gunadi
 *Purpose: Class Car Implementation file
 * Created on October 20, 2017, 12:06 PM
 */

#include "Car.h"

#include <iostream>
#include <string>
using namespace std;

Car::Car(int yrMdl, int speed, string make){
    this->yrModl = yrMdl;
    this->speed = speed;
    this->make = make;
}

void Car::setMake(string make){
    this->make = make;
}

void Car::setSpeed(int speed){
    this->speed = speed;
}

void Car::setYear(int yrModl){
    this->yrModl = yrModl;
}

string Car::getMake(){
    return this->make;
}

int Car::getSpeed(){
    return this->speed;
}

int Car::getYear(){
    return this->yrModl;
}

void Car::accelrt(){
    this->speed += 5;
}

void Car::brake(){
    this->speed -= 5;
}






/*private:
    int yrModl;
    int speed;
    std::string make;
    
public:
    Car(int, int, std::string);
    void setYear();
    void setSpeed();
    void setMake();
    int getYear();
    int getSpeed();
    std::string getMake();
    void accelrt();
    void brake();
      
};
 */