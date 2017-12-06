
/* 
 * File:   array.cpp
 * Author: WilliamGunadi
 * Purpose: impementaton file for array class
 * Created on November 20, 2017, 7:07 PM
 */

//System Libraries
#include <cstdlib>
#include <iostream>

using namespace std;

//User libraries
#include "array.h"

farray::farray(int size){
    this->size = size;
    
    arr = new float[this->size];
    
    //initialize every element in the array = 0;
    for(int i = 0; i < this->size; i++){
        *(arr + i) = 0.0;
    }
    
}

farray::~farray(){
    delete [] arr;
}

void farray::setArr(int index){
    cout << "Enter value at element: " << index << endl;
    cin >> arr[index - 1];
}

float farray::getNum(int index){
    return arr[index - 1];
}

float farray::getHigh(){
    float highest = 0;
    for(int i = 0; i < this->size; i++){
        if(arr[i] > highest){
            highest = arr[i];
        }
    }
    
    return highest;
}

float farray::getLow(){
    float lowest = *(arr);
    
    //reiterate through loop
    for(int j = 0; j < this->size; j++){
        if(arr[j] < lowest){
            lowest = arr[j];
        }
    }
    return lowest;
}



