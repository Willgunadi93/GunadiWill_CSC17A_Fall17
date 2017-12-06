/* 
 * File:   Array.h
 * Author: William Gunadi
 * Purpose: Array class sspecification
 * Created on December 3, 2017, 10:59 PM
 */

#ifndef ARRAY_H
#define ARRAY_H

class Array{
private:
    int *intArr;
    int size;
    
public:
    class SubExcp{
        
    };
    
    Array(int);
    Array(Array &);
    ~Array();
    
    int Size(){ return size;}
    int &operator[](int &);
    
        
};

#endif /* ARRAY_H */

