
/* 
 * File:   Card.cpp
 * Author: William Gunadi
 * Purpose: Iplementation file for Card-class
 * Created on November 1, 2017, 11:09 PM
 */

#include <sstream>
#include <string>
#include "Card.h"
using namespace std;

Card::Card(int number){
    if(number >= minCrd && number < maxCrd){
        this->number = number;
        setFace();
        setSuit();
        setName();
        setPict();
    }
    else{
        this->number = -1;
        this->faceval = -1;
        this->suit = "none";
        this->picture = "none";
        this->name = "none";
    }
}

void Card::setFace(){
    int num = this->number % 13 + 1;        // 1 - 13 value
    if(num > 10) num = 10;                  //over 10 = 10 value;
    else if(num == 1) num = 11;             //1 = 11 (Ace)
    
    if(num >= 2 && num <= 11){
        this->faceval = num;
    }
    else this->faceval = -2;
    
}

void Card::setSuit(){
    if(this->number < 13){
        this->suit = "Spades";
    }
    else if(this->number < 26){
        this->suit = "Diamonds";
    }
    else if(this->number < 39){
        this->suit = "Clubs";
    }
    else if(this->number < 52){
        this->suit = "Hearts";
    }
    else this->suit = "Bad Value!";
    
    
}

void Card::setName(){
    switch(this->number % 13){
        case 0: this->name = "Ace"; break;
        case 1: this->name = "Two"; break;
        case 2: this->name = "Three"; break;
        case 3: this->name = "Four"; break;
        case 4: this->name = "Five"; break;
        case 5: this->name = "Six"; break;
        case 6: this->name = "Seven"; break;
        case 7: this->name = "Eight"; break;
        case 8: this->name = "Nine"; break;
        case 9: this->name = "Ten"; break;
        case 10: this->name = "Jack"; break;
        case 11: this->name = "Queen"; break;
        case 12: this->name = "King"; break;
        default: this->name = "Bad Value"; 
    }
    
}

void Card::setPict(){
    this->picture="Cards/"+this->name+this->suit+".jpg";
}
   
string Card::tostring(){
    ostringstream cnvNum,cnvFace;
    cnvNum  << this->number;
    cnvFace << this->faceval;
    string str="\n";
    str+=("<img src="+this->picture+" />");
    str+=("\nNumber = "+cnvNum.str());
    str+=("\nName = "+this->name);
    str+=("\nSuit = "+this->suit);
    str+=("\nFace Value = "+cnvFace.str());
    str+=("\n \n");
    return str;
}