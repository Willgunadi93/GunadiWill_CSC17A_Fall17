/* 
 * File:   BMI.h
 * Author: William Gunadi
 * Purpose: BMI class specifications
 * Created on November 19, 2017, 11:21 AM
 */

#ifndef BMI_H
#define BMI_H

class BMI{
    private:
        int weight;
        int height;
        float bmi;
        float calcBMI();  
    public:
        BMI(int, int);
        void setWght(int);
        void setHght(int);
        int getWght();
        int getHght();
        float getBMI();
         
};

#endif /* BMI_H */

