/* 
 * File:   circle.h
 * Author: William Gunadi
 * Purpose: Specification file for a circle class
 * Created on November 20, 2017, 5:36 PM
 */

#ifndef CIRCLE_H
#define CIRCLE_H

class circle{
    private:
        float radius;
        float pi = 3.14159;

    public:
        circle(){ this->radius = 0.0; }
        circle(float);
        void setRad(float);
        float getRad();
        float getArea();
        float getDiam();
        float getCirc();
    
};

#endif /* CIRCLE_H */

