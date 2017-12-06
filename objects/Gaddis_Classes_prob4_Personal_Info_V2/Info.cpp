
/* 
 * File:   Info.cpp
 * Author: William Gunadi
 * Purpose: Implemenation file for Info.h
 *
 * Created on October 19, 2017, 2:31 AM
 */

#include <cstdlib>
#include <string>
#include "Info.h"

using namespace std;

void Info::setName(string name){
    this->name = name;
}

void Info::setAdd(string address){
    this->address = address;
}

void Info::setAge(int age){
    this->age = age;
}

void Info::setPhone(string phone){
    this->phoneNum = phone;
}

string Info::getName(){
    return name;
}

string Info::getAdd(){
    return address;
}

string Info::getPhone(){
    return phoneNum;
}
int Info::getAge(){
    return age;
}