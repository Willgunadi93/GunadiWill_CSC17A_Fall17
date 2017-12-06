/* 
 * File:   MINMAX.h
 * Author: William Gunadi
 * Purpose: MINMAX specification file
 * Created on December 3, 2017, 10:32 PM
 */

#ifndef MINMAX_H
#define MINMAX_H

// Maximum
template  <class T>
T Maximum (T arg1, T arg2) {
    if(arg1 > arg2){
        return arg1;
    }
    else{
        return arg2;
    }
}

//Minumum
template <class T>
T Minimum (T arg1, T arg2) { 
    if(arg1 < arg2){
        return arg1;
    }else{
        return arg2;
    }
}



#endif /* MINMAX_H */

