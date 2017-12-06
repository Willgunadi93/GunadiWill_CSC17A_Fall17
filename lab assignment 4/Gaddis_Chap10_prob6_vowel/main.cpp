/* 
 * File:   main.cpp
 * Author: William Gunadi
 * Created on October 10th , 2017, 
 * Purpose:  Gaddis Chapter 10 Problem 6 Vowel
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstring>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
int cntVowl(char*);
int cntCons(char*);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    const int size = 200;
    char sent[size];
    char ans;
    int numb;
    
    
    //Menu
    do {
        //Input a string
        cout << "Input a string, no more than 199 characters" << endl;
        cin.getline(sent, size);
    
        //display menu
        cout << "A) Count number of vowel in the string." << endl;
        cout << "B) Count number of consonants in the string." << endl;
        cout << "C) Count both vowels and consts in the string." << endl;
        cout << "D) Enter another string" << endl;
        cout << "F) Exit program!" << endl;
        
        cin >> ans;
        
        if(toupper(ans) == 'A'){
            numb = cntVowl(sent);
            cout << "There are " << numb << " vowels in the string." << endl;
        }
        else if(toupper(ans) == 'B'){
            numb = cntCons(sent);
            cout << "There are " << numb << " consonants in the string." << endl;
        }
        else if(toupper(ans) == 'C'){
            cout << "There are " << cntVowl(sent) << " vowls and " << cntCons(sent)
                    << " Consonants in the string." << endl;
        }
        else if(toupper(ans) == 'D'){
            cout << "You've chosen option D. Enter another string." << endl;
            cin.getline(sent,size);
        }
        cin.ignore();
    } while (toupper(ans) != 'F');
    cout << "Exiting.." << endl;
    
    //Exit stage right!
    return 0;
}

int cntVowl(char *c){
    int vowels = 0; // Number of vowels in str
    
    for (int i = 0; c[i] != '\0'; i++) {
        switch (tolower(c[i])) {
            case 'a'://case 'A':
            case 'e'://case 'E':
            case 'i'://case 'I':
            case 'o'://case 'O':
            case 'u':/*case 'U':*/ {
                vowels++;
                break;
            }
        }
    }
    
    return vowels;
}
    
int cntCons(char *c) {
    int cons = 0; // Number of consonants in str
    
    for (int i = 0; c[i] != '\0'; i++) {
        if (isalpha(c[i])) {
            cons++;
            
            // Subtract if its a vowels
            switch (c[i]) {
                case 'a':case 'A':
                case 'e':case 'E':
                case 'i':case 'I':
                case 'o':case 'O':
                case 'u':case 'U': {
                    cons--;
                    break;
                }
            }
        }
    }
    
    return cons;
}


