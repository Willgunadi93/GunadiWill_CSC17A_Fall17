/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Function.cpp
 * Author: WilliamGunadi
 *
 * Created on September 28, 2017, 8:36 PM
 */

#include <cstdlib>
#include <iostream>

#include "Function.h"

using namespace std;

/*
 * 
 */

int getMode(int* arr, int size, int& index)
{
    int counter = 1;
    int max = 0;
    index = arr[0];
    for(int i = 0; i < size-1; i++)
    {
        if(*(arr + i) == *(arr + (i+1)))
        {
            counter++;
            if(counter > max)
            {
                max = counter;
                index = arr[i];
            }
        }
        else
            counter = 1;
    }
    if(max = 1)
        return -1;
    else
        return max;
}

float getAvrg(int* a, int size)
{
    float tot = 0.0f;
    
    for(int i = 0; i < size; i++)
    {
        tot += a[i];
    }
    
    return tot/size;
    
}

int* sortAr(int studnt)
{
    int* a = new int [studnt];
    for(int i = 0; i < studnt; i++)
    {
        cout << "Enter movies watched for student: " << i+1 << endl;
        cin >> *(a+i);
        
    }
    
    bool swap;
    do{
        swap = false;
        for(int i = 0; i < (studnt-1); i++)
        {
            if(a[i] > a[i+1])
            {
                swapAr(&a[i], &a[i+1]);
                swap = true;
            }
        }
    }while(swap);
    
    return a;
    
}

void swapAr(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
