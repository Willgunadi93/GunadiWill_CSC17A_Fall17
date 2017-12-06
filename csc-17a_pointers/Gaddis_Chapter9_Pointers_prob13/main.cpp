/* 
 * File:   main.cpp
 * Creator: William Gunadi
 * Created on September 27, 2017, 
 * Purpose:  Movie statistics
 * 
 * 
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "Function.h"
//Global Constants

//Function Prototypes


//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int studnt;             //n students
    int mvsWtch;            //n movies watched
    int* mvArr = nullptr;   //pointer to be dynamically allocated
    int mode, index;
    float average;
    
    //Input how many students surveyed
    do{
        cout << "Enter the amount of students surveyed." << endl;
        cin >> studnt;
    }while(studnt <= 0);
    
    //Allocate memory for the array
    mvArr = new int [studnt];
    //newArr = new int [studnt];
    
    //Input number of movies watched for each students
    //sort the array
    mvArr = sortAr(studnt);
    //Output the transformed data
    int i = 0;
    do{
        cout << mvArr[i] << " ";
        i++;
    }
    while(i < studnt);
    
    
    //Get average
    average = getAvrg(mvArr, studnt);
    cout << "\n\nThe average is : " << average << endl;
            
    //Get mode --> return the counter and pass by reference the index;
    mode = getMode(mvArr, studnt, index);
    if(mode != -1)
    {
    cout << "The mode is " << index << " with " << mode << " occurence(s}. "
            << endl;
    }
    else
        cout << "There is no mode. " << endl;
    
    //delete
    cout << "deleting the array.. " << endl;
    delete [] mvArr;
    //delete [] newArr;
    
    return 0;
}

