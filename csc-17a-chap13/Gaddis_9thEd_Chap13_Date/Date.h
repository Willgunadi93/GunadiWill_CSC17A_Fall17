/* 
 * File:   Date.h
 * Author: WilliamGunadi
 * Purpose:
 * Created on October 20, 2017, 1:40 AM
 */


using namespace std;

#ifndef DATE_H
#define DATE_H

class Date{
    private:
        int day;
        int month;
        int year;
        const char* mthStr();
        
    public:
        Date(int, int, int);
        void getDate1();
        void getDate2();
        void getDate3();
    
};


#endif /* DATE_H */

