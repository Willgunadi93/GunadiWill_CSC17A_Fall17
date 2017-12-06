/* 
 * File:   Card.h
 * Author: WilliamGunadi
 * Purpose:
 * Created on November 1, 2017, 10:59 PM
 */

#ifndef CARD_H
#define CARD_H

#include <string>
using namespace std;

class Card{
private:
    static const int maxCrd = 52;
    static const int minCrd = 0;
    int number;
    int faceval;
    string suit;
    string name;
    string picture;
    void setFace();
    void setSuit();
    void setName();
    void setPict();
    
    
public:
    Card(int);
    int getNum() { return number;}
    string getSuit(){ return suit;}
    int getFace(){ return faceval;}
    string getName(){ return name;}
    string getPic(){ return picture;}
    string tostring();
   
    
};


#endif /* CARD_H */

