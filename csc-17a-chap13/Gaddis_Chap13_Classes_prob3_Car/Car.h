/* 
 * File:   Car.h
 * Author: William Gunadi
 * Purpose: Car class specification
 * Created on October 20, 2017, 11:51 AM
 */

#ifndef CAR_H
#define CAR_H
#include <string>

using namespace std;


class Car{
private:
    int yrModl;
    int speed;
    string make;
    
public:
    Car(int, int, string);
    void setYear(int);
    void setSpeed(int);
    void setMake(string);
    int getYear();
    int getSpeed();
    string getMake();
    void accelrt();
    void brake();
      
};


#endif /* CAR_H */

