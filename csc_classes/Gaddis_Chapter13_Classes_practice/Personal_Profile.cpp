

/* 
 * File:   Personal_Profile.cpp
 * Author: William Gunadi
 *
 * Created on October 1, 2017, 1:47 PM
 */
//System Library
#include <cstdlib>
#include <string>

//User library
#include "Personal_Profile.h"

using namespace std;

//Constructor
Profile::Profile(string name, int age, int weight, string bthDate){
    cout << "Constructor.." << endl;
    this-> name = name;
    this-> age = age;
    this-> weight = weight;
    this-> bthDate = bthDate;
}


