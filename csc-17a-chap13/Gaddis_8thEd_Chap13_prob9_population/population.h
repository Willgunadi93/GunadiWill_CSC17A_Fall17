/* 
 * File:   population.h
 * Author: WilliamGunadi
 * Purpose:
 * Created on November 20, 2017, 6:12 PM
 */

#ifndef POPULATION_H
#define POPULATION_H

class population{
private:
    int popult;
    int nBirth;
    int nDeath;
    
public:
    population();
    void setpop(int);
    void setBirth(int);
    void setDeath(int);
    int getBirth();
    int getDeath();
    float getBthRt();
    float getDthRt();
    int getPop();
    
};

#endif /* POPULATION_H */

