/* 
 * File:   Employee.h
 * Author: WilliamGunadi
 * Purpose:
 * Created on October 20, 2017, 11:12 AM
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

using namespace std;

class Employee{
    private:
        std::string name;
        int empNum;
        std::string dprtmnt;
        std::string pos;

    public:
        Employee(string name, int empNum, string dprtmnt, string pos);
        Employee(string name, int empNum);
        Employee();
        
        //Mutator functions
        void setName(string name);
        void setNum(int empNum);
        void setDprtmnt(string dprtmnt);
        void setPos(string pos);
        
        //Accessor Functions
        std::string getName();
        int getNum();
        std::string getDprtmnt();
        std::string getPos();
    
};

#endif /* EMPLOYEE_H */

