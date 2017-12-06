/* 
 * File:   main.cpp
 * Author: William Gunadi
 * Created on November 1 , 2017, 
 * Purpose:  Create a card class
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>
#include <ctime>
using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "Card.h"
//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    
    for(int i = 1; i < 9; i++){
        cout << (i % 8) << " " << endl;
    }
    /*int nCards = 52;
    Card **Deck = new Card*[nCards];
    
    for(int i = 0; i < nCards; i++){
        Deck[i] = new Card(i);
        cout << Deck[i]->tostring();
    }
    
    //Delete dynamically allocated memory
    for(int i = 0; i < nCards; i++){
        delete Deck[i];
    }
    
    delete [] Deck;*/
    //Exit stage right!
    return 0;
}

