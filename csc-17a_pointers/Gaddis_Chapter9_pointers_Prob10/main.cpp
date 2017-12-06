/* 
 * File:   main.cpp
 * Author: William Gunadi
 * Created on September 24, 2017, 
 * Purpose:  Reverse array
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
int* revArr(int*, int);
//Execution begins here
int main(int argc, char** argv) {
    cout << "This program simulates a function taking in an array and reversing it." << endl;
   
    //Declare variables
    int size;
    int* arr = nullptr;
    int i = 0;
    
    //Initialize variables
    cout << "Enter the size of the array: " << endl;
    cin >> size;
    
    //Dynamic mem for the array
    arr = new int [size];
    int* revAr = new int[size];
    
    //fill the array
    cout << "Fill the array.." << endl;
    for(int j = 0; j < size; j++)
    {
        cout << "Enter number " << j+1 << endl;
        cin >> *(arr+j);
        cout << endl;
    }
    
    cout << "The original array is.." << endl;
    while(i < size)
    {
        cout << arr[i] << " " << endl;
        i++;
    }
    
    //reverse the array
    revAr = revArr(arr, size);
    cout << "new reversed array is.." << endl;
    for(int b = 0; b < size; b++)
    {
        cout << revAr[b] << " " << endl;
    }
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

int* revArr(int* array, int size)
{
    // declare variables
    int index = size-1;
    int* revArr = nullptr;
    revArr = new int [size];
    
    //for loop to reverse the array
    for(int i = 0; i < size; i++)
    {
        revArr[index] = array[i];
        index--;
    }    
    
    return revArr;
    
}

