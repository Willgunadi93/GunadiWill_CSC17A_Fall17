
/* 
 * File:   Personal_Profile.h
 * Author: WilliamGunadi
 *
 * Created on October 1, 2017, 1:32 PM
 */
//System Library
#include <string>
#include <iostream>

using namespace std;

#ifndef PERSONAL_PROFILE_H
#define PERSONAL_PROFILE_H

class Profile{
    private:
        string name;
        int age;
        int weight;
        string bthDate;
    
    public:
        Profile(string, int, int, string);          //Constructor
        string stuName(){return name;}
        int stuAge(){ return age; }
        int stuWeight(){return weight;}
        string stuBthDate(){return bthDate;} 
    
    
};

#endif /* PERSONAL_PROFILE_H */

