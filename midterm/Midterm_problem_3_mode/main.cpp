/* 
 * File:   main.cpp
 * Author: William Gunadi
 * Created on September , 2017, 
 * Purpose: Midterm Problem 3 stats
 *  
 * 
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "stats.h"
//Global Constants

//Function Prototypes
stats *avgMedMod(int*, int);    
void prntRes(stats*);
void bubSort(int*, int);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int arrSize = 10;           //Array size
    int *arrptr = new int [arrSize];        //Dynamic array of size 10
    stats *stsPtr;
    
    //Enter values into array
    cout << "Enter the values into the array" << endl;
    for(int i = 0; i < arrSize; i++){
        cin >> *(arrptr + i);
    }
    
    
    /*pass the array and size into the function
    function then will return a pointer to a struct with its members
     * 
     */
    
    stsPtr = avgMedMod(arrptr, arrSize);
    
    //cout average
    prntRes(stsPtr);
    delete[] arrptr;
    delete[] stsPtr->mode;
    //Exit stage right!
    return 0;
}

stats *avgMedMod(int *arr, int n){
    //Declare variables
    int total = 0;
    stats *agMedMod = new stats;     //agMedMod of type structure stats
   
    //calculate the average
    for(int i = 0; i < n; i++){
        total += *(arr + i);
    }
    agMedMod->avg = static_cast<float>(total)/n;
    
    //Calculate the Median
    cout << "Sorting the array.." << endl << endl;
    bubSort(arr, n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl << endl;
    if(n % 2 == 0){              //If size is even
        agMedMod->median = static_cast<float>(((arr[n/2] + arr[(n/2)-1])))/2;
    }
    else
        agMedMod->median = arr[n/2];
    
    //Calculate max frequency
    agMedMod->maxFreq = 1;
    int modes = 1;
    for(int i = 0; i < n-1; i++){
        if(arr[i+1] == arr[i]){
            modes++;
            if(modes > agMedMod->maxFreq){
                agMedMod->maxFreq = modes;
            }
        }
        else
        {
            modes = 1;
        }    
    }
    
    //mode array
    int cFreq = 1;      //Current frequency while comparing
    int mElem = 0;      //Size of new array of mode(s)
    for(int i = 1; i < n; i++){
        if(arr[i] == arr[i-1]){
            cFreq++;
            if(cFreq == agMedMod->maxFreq) mElem++;
        }
        else cFreq = 1;
    }
    
    //fill mode array with modes
    agMedMod->mode = new int [mElem];
    int index = 0;
    cFreq = 1;
    for(int i = 1; i < n; i++){
        if(arr[i] == arr[i - 1]){
            cFreq++;
            if(cFreq == agMedMod->maxFreq){
                agMedMod->mode[index] = arr[i];
                index++;
            }
        }else cFreq = 1;
    }
    
    cout << "printing the mode array.." << endl;
    for(int j = 0; j < mElem; j++){
        cout << agMedMod->mode[j] << "-";
    }
    cout << endl;
    
    return agMedMod;
}

void bubSort(int* arr, int n){
    bool swap;
    int temp;
    
    do{
        swap = false;
        for(int i = 0; i < n-1; i++){
            if(arr[i] > arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                swap = true;
            }
                
        }
    } while(swap);   
}

void prntRes(stats *arr){
    //print result
    cout << "The average is: " << arr->avg << endl;
    cout << "The Median is: " << arr->median << endl;
    cout << "The max frequency is: " << arr->maxFreq << endl;   
}
