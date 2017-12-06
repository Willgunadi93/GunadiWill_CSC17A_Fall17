/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Testscore.cpp
 * Author: WilliamGunadi
 *
 * Created on December 3, 2017, 11:33 PM
 */
//System libraries
#include <cstdlib>
#include <iostream>
using namespace std;


//user libraries
#include "Testscore.h"

TestScore::TestScore(int score[]){
    for(int i = 0; i < 20; i++){
        if(score[i] < 0 || score[i] > 100){
            throw InvalidScore();
        }
        else{
            Scores[i] = score[i];
        }
    }
    
    cout << "Average test scores is : " << average(score) << endl;
}

float TestScore::average(int score[]){
    float avg = 0;
    //loop
    for(int i = 0; i < 20; i++) {
        avg += score[i];
        avg /= 5;
    }
    
    return avg;
}