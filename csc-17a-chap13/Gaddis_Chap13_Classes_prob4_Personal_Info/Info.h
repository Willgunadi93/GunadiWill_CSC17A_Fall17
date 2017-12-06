/* 
 * File:   Info.h
 * Author: WilliamGunadi
 * Purpose:
 * Created on October 20, 2017, 2:28 AM
 */

#include <string>
using namespace std;

#ifndef INFO_H
#define INFO_H

class Info{
    private:
        string name;
        string address;
        int age;
        string phoneNum;
    public:
        void setName(string);
        void setAdd(string);
        void setAge(int);
        void setPhone(string);
        string getName();
        string getAdd();
        string getPhone();
        int getAge();
  
};


#endif /* INFO_H */

