

/* 
 * File:   Employee.cpp
 * Author: William Gunadi
 *
 * Created on October 20, 2017, 11:20 AM
 */

#include "Employee.h"
#include <string>

using namespace std;

  Employee::Employee(string name, int empNum){
      this->name = name;
      this->empNum = empNum;
      this->dprtmnt = " ";
      this->pos = " ";
  }
  
  Employee::Employee(string name, int empNum, string dprtmnt, string pos){
      this->name = name;
      this->empNum = empNum;
      this->dprtmnt = dprtmnt;
      this->pos = pos;
  }
  
  Employee::Employee(){
      this->name = " ";
      this->empNum = 0;
      this->dprtmnt = " ";
      this->pos = " ";
  }
  
  void Employee::setName(string name){
      this->name = name;
  }
  
  void Employee::setNum(int empNum){
      this->empNum = empNum;
  }
  
  void Employee::setDprtmnt(string dprtmnt){
      this->dprtmnt = dprtmnt;
  }
  
  void Employee::setPos(string pos){
      this->pos = pos;
  }
  
  string Employee::getDprtmnt(){
      return this->dprtmnt;
  }
  
  string Employee::getName(){
      return this->name;
  }
  
  string Employee::getPos(){
      return this->pos;
  }
  
  int Employee::getNum(){
      return this->empNum;
  }



