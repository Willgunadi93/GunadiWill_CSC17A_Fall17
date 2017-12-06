/* 
 * File:   main.cpp
 * Author: William Gunadi
 * Created on September , 2017, 
 * Purpose: Element shifter. Function accepts an array and size  
 *
 * 
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
int* shftAr(int* , int);
void prntArr(int*, int);
//Execution begins here
int main(int argc, char** argv) {
    cout << "This program create a new array and shift the element by 1. " << endl;
    //Declare variables
    int* arr = nullptr;
    int size;
    
    //declare size
    do{
        cout << "Enter size of array [must be greater than 0]." << endl;
        cin >> size;
    } while(size <= 0);
    
    //allocate new memory
    arr = new int [size];
    int* nwArr = new int [size+1];
    
    //fill array
    cout << "Filling array.." << endl;
    for(int i = 0; i < size; i++)
    {
        *(arr+i) = i+1;
    }
    //print pre-shifted array
    prntArr(arr, size);
    
    //Shift array
    nwArr = shftAr(arr, size);
    cout << "\n";
    cout << "shifted array.." << endl;
    
    //print post-shifted array
    prntArr(nwArr, size+1);
    
    //Output the transformed data
    //delete memory
    delete [] arr, delete [] nwArr;
    //Exit stage right!
    return 0;
}

void prntArr(int* a, int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << *(a+i) << " ";
    }
    
}

int* shftAr(int* arr, int size){
    //Declare variables
    int nwSize = size+1;
    int* shfAr = nullptr;
    shfAr = new int [nwSize];
    *(shfAr+0) = 0;
    
    //Shift the array
    for(int i = 0; i < size; i++)
    {
        *(shfAr+(i+1)) = *(arr+i);
        
    }
    
    return shfAr;
   
}
