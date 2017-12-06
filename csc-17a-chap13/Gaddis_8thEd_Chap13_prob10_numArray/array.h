/* 
 * File:   array.h
 * Author: WilliamGunadi
 * Purpose:
 * Created on November 20, 2017, 7:03 PM
 */

#ifndef ARRAY_H
#define ARRAY_H

class farray{
    private:
        float* arr;
        int size;
    public:
        farray(int);
        ~farray();
        void setArr(int);
        float getNum(int);
        float getHigh();
        float getLow();
        
};

#endif /* ARRAY_H */

