/* 
 * File:   main.cpp
 * Author: William Gunadi
 * Created on October 11th, 2017, 
 * Purpose:  Gaddis Chapter 10 Proble 3 word counter
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstring>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
int numWord(char *, float&);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    const int SIZE = 80;
    char sent[SIZE];
    float avrg;
    
    //Input into the cstring array
    cout << "Enter a sentence, any sentence!" << endl;
    cin.getline(sent, SIZE);
    
    cout << "Outputting the total number of words in the sentence.. " << endl;
    //Output the transformed data
    cout << "The total number of words in the sentence: " << numWord(sent, avrg)
            << " words" << endl;
    
    cout << "The average num of letter per words is : " << avrg << endl;
    //Exit stage right!
    return 0;
}

int numWord(char* c, float &avrg){
    int count = 0;
    int wrdCnt = 0;
    
    for(int i = 0; c[i] != '\0'; i++){
        if(isalpha(c[i])){
            if(i == 0){
                count++;
            }
            else if(!isalpha(c[i-1])){
                count++;
            }
        }
    }
    
    for(int j = 0; c[j] != '\0'; j++){
        if(isalpha(c[j])){
            if(j == 0){
                wrdCnt++;
            }
            else if(c[j] != ' '){
                    wrdCnt++;
            }
        }
    }
    avrg = static_cast<float>(wrdCnt) / count;
    return count;
}
