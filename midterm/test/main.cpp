/* 
 * File:   main.cpp
 * Author: William Gunadi
 * Created on September , 2017, 
 * Purpose:  Template to be utilized in creating
 *           solutions to problems in our CSC/CIS 5 
 *           class.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <string>
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants  

//Function Prototypes
string eng(int);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variable
    for(int i = 1; i < 8; i++){
        cout << ((i + 5) % 8) << endl;
    }
        
    
    return 0;
    
}

string eng(int amount){
    //Declare variables
    char thsnd, hundred, tens, ones;
    string nAmount = " ";
    
    //Years
    thsnd = (amount - amount % 100)/1000;      // 1 in 1999
    amount = (amount - thsnd * 1000);         //change amount to 999
    hundred = (amount - amount%100)/100;      //first 9 in 1999
    amount = (amount - hundred * 100);     // = 99
    int temp = amount % 10;
    tens = (amount - amount % 10)/10;      //9
    ones = amount%10;
    
    switch(thsnd)
    { 
        case 9: nAmount += "Nine Thousand "; break;
        case 8: nAmount += "Eight Thousand "; break;
        case 7: nAmount += "Seven Thousand "; break;
        case 6: nAmount += "Six Thousand "; break;
        case 5: nAmount += "Five Thousand "; break;
        case 4: nAmount += "Four Thousand ";break;
        case 3: nAmount += "Three Thousand ";break;
        case 2: nAmount += "Two Thousand"; break;
        case 1: nAmount += "One thousand "; break;
        case 0: " "; break;
        default: cout << "Bad number" << endl;
    }
    switch (hundred)
    {
        case 9: nAmount += "nine hundred "; break;  
        case 8: nAmount += "eight hundred "; break;   
        case 7: nAmount += "seven hundred "; break;   
        case 6: nAmount += "six hundred "; break;   
        case 5: nAmount += "five hundred "; break;   
        case 4: nAmount += "four hundred "; break;   
        case 3: nAmount += "three hundred "; break;   
        case 2: nAmount += "two hundred "; break;  
        case 1: nAmount += "one hundred "; break;
        case 0: nAmount += ""; break;
        default: cout << "Bad number" << endl;
    }
    switch (tens)
    {
        case 9: nAmount += "and ninty "; break;  
        case 8: nAmount += "and eighty "; break;   
        case 7: nAmount += "and seventy "; break;   
        case 6: nAmount += "and sixty "; break;   
        case 5: nAmount += "and fifty "; break;   
        case 4: nAmount += "and fourty "; break;   
        case 3: nAmount += "and thirty "; break;   
        case 2: nAmount += "and twenty "; break;  
        case 1: switch(temp){
            case 9: nAmount += " and nineteen "; ones = 0; break;
            case 8: nAmount += "and eighteen"; ones = 0; break;
            case 7: nAmount += "and seventeen "; ones = 0; break;
            case 6: nAmount += "and sixteen "; ones = 0; break;
            case 5: nAmount += "and fifteen "; ones = 0; break;
            case 4: nAmount += "and fourteen "; ones = 0; break;
            case 3: nAmount += "and thirteen "; ones = 0; break;
            case 2: nAmount += "and twelve "; ones = 0; break;
            case 1: nAmount += "and eleven "; ones = 0; break;
            case 0: nAmount += "and ten "; ones = 0; break;
            default: cout << "error" << endl;
        }
        
        case 0: nAmount += ""; break;
        default: cout << "Bad number" << endl;
    }
    switch (ones)
    {
        case 9: nAmount += "nine"; break;  
        case 8: nAmount += "eight"; break;   
        case 7: nAmount += "seven"; break;   
        case 6: nAmount += "six"; break;   
        case 5: nAmount += "five"; break;   
        case 4: nAmount += "four"; break;   
        case 3: nAmount += "three"; break;   
        case 2: nAmount += "two"; break;  
        case 1: nAmount += "one"; break;
        case 0: nAmount += ""; break;
    }
    return nAmount;
}  

