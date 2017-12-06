/* 
 * File:   main.cpp
 * Author: William Gunadi
 * Created on September 25, 2017, 
 * Purpose:  Display Test scores /w Dynamic Array
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
int* sortDA(int*, int);
void swap(int &, int &);
void average(float* ,int*, int);
//Execution begins here
int main(int argc, char** argv) {
    //Intro
    cout << "Displaying test scores using dynamically allocated array.." << endl;
    
    //Declare variables
    int tstNum;
    int* tstAry = nullptr;
    float avrg;
    
    //User input number of test and input the scores
    cout << "Enter number of tests to input: "; cin >> tstNum;
    tstAry = new int[tstNum];
    
    //Enter the scores
    for(int i = 0; i != tstNum; i++){
        cout << "Enter score for test " << i+1 << endl;
        cin >> *(tstAry+i);
    }
    //Pass array into sort function;
    sortDA(tstAry, tstNum);
    
    //display the sorted array
    cout << "Now the sorted array.." << endl;
    for(int j = 0; j < tstNum; j++)
    {
        cout << *(tstAry+j) << " ";
    }
    cout << "\n";
    
    average(&avrg, tstAry, tstNum);
    
    //output the average test scores
    cout << "The average tests scores are: " << avrg << endl;
    //Delete allocated array..
    cout << "Deleting the array.." << endl;
    delete [] tstAry;
    //Exit stage right!
    return 0;
    
}
void average(float* avrg, int* test, int indx){
    
    *avrg = 0.0f;
    int tot = 0;
    
    for(int x = 0; x < indx; x++){
        
        tot += *(test+x);
    }
    
    *avrg = static_cast<float>(tot)/indx;
    
}

int* sortDA(int* arr, int index){
    
    bool swp;
    do{
        swp = false;
        for(int i = 0; i < index - 1; i++){
            if(*(arr+i) > *(arr+(i+1)))
            {
                swp = true;
                swap(*(arr+i), *(arr+(i+1)));
            }
            
        }
        
    }
    while(swp);
    //return the array
    return arr;
    
}

void swap(int &a, int &b){
    
    int temp;
    temp = a;
    a = b;
    b = temp;
}