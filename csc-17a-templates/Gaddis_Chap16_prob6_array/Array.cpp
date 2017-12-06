
/* 
 * File:   Array.cpp
 * Author: William Gunadi
 * Purpose: Array class implementation
 * Created on December 3, 2017, 11:03 PM
 */
//System libraries
#include <cstdlib>

using namespace std;


//User libraries
#include "Array.h"

Array::Array(int s){
    size = s;
    intArr = new int[s];
    
    for(int i = 0; i < size; i++){
        *(intArr + i) = 0;   
    }
}

Array::Array(Array &obj){
    size = obj.size;
    intArr = new int [size];
    for(int i = 0; i < size; i++) {
        *(intArr + i) = *(obj.intArr + i);
    }
}

Array::~Array(){
    if(size > 0){
        delete [] intArr;
    }
}

int &Array::operator [](int &sub){
    if(sub < 0 || sub >= size){
        throw SubExcp();
    }
    return intArr[sub];
}
