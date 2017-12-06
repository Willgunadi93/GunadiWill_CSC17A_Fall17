/* 
 * File:   Time.h
 * Author: William Gunadi
 * Purpose:Tiem Format Header file
 * Created on December 3, 2017, 9:35 PM
 */

#ifndef TIME_H
#define TIME_H

class Time{
    protected:
        int hour;
        int min;
        int sec;
    public:
        Time();
        Time(int, int, int);
        int getHour();
        int getMin();
        int getSec(); 
    
};

class MilTime: public Time{
private: 
    int milHours;
    int milSec;
public:
    MilTime(int, int);
    class InvdHr{
        
    };
    class InvdSec{
        
    };
    void setTime(int, int);
    int getHour();
    int getStndHr();

};


#endif /* TIME_H */

