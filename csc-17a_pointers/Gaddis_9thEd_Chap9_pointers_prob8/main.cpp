/* 
 * File:   main.cpp
 * Author: William Gunadi
 * Created on September 26, 2017, 
 * Purpose:  Mode Function
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <string>

//User Libraries
using namespace std; //Name-space under which system libraries exist

//Function Prototypes
void sort(int*, int);
int theMod(int*, int, int*);
void swap(int*, int*);
//Execution begins here
int main(int argc, char** argv) {
    //Intro
    cout << "Finding the mode of the array" << endl;
    
    //Declare variables
    int size = 10, index = 0;
    int* ptrAr = nullptr;
    ptrAr = new int[size];
    int* ptrIdx = nullptr;
    ptrIdx = &index;
    int bow;
    
    //Fill the array
    cout << "Fill the array: " << endl;
    for(int i = 0; i < size; i++){
        cout << "Enter number " << i+1 << " :  ";
        cin >> *(ptrAr+i);
        
    }
    
    //Sort the array
    sort(ptrAr, size);
    int b = 0;
    cout << "The sorted array.." << endl;
    while(b < size)
    {
        cout << *(ptrAr+b) << " ";
        b++;
    }
    cout << endl;
    
    //Call function to find the mode
    bow = theMod(ptrAr, size, ptrIdx);
    
    //Output the transformed data
    cout << "The Mod of the array = " << index << " that occured " << bow
         << " times. " << endl;
    //Exit stage right!
    return 0;
}

void swap(int* a, int* b){
    
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int* array, int size){
    //Bubble sort
    bool swp;
    do{
        swp = false;
        for(int i = 0; i < size-1; i++){
            if(array[i] > array[i+1])
            {
                swap(array[i], array[i+1]);
                swp = true;
            }  
        }
    }
    while(swp);   
    
}

int theMod(int* arr, int size, int* indx)
{
    //Declare variables
    int counter = 1, max = 0;
    int mode = *(arr);
    
    //for-loop
    for(int i = 0; i < size-1; i++){
        
        if(arr[i] == arr[i+1])
        {
            counter++;
            if(counter > max)
            {
                max = counter;
                *indx = *(arr+i);
            }
        } else
            counter = 1;
    }
    return max;
}