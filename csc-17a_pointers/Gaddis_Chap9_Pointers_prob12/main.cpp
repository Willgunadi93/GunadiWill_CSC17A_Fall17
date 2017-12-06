/* 
 * File:   main.cpp
 * Author: William Gunadi
 * Created on September 24, 2017, 
 * Purpose:  Gaddis Chapter 9 Pointers Array expand
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
int* expand(int*, int);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int* arr = nullptr;
    int size = 12;
    arr = new int [size];
    int* newAr = new int [size*2];
    
    //fill the numbers
    cout << "Filling array with numbers" << endl;
    for(int i = 0; i < size; i++) arr[i] = i+1;
    
    //output hte numbers
    for(int j = 0; j < size; j++) cout << arr[j] << " ";
    cout << "\n";
    //expand
    newAr = expand(arr, size);
    
    //output the new array
    cout << "--------- outputting new array --------------" << endl;
    for(int j = 0; j < size*2; j++)
        cout << *(newAr + j) << " ";
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

int* expand(int* array, int size)
{
    int newsize = size * 2;
    int* newArr = new int [newsize];
    
    //Copy values of array into new array
    // Once finish, set the rest of the elements = to 0;
    for(int i = 0; i < newsize; i++){
        if(i < size)
            *(newArr + i) = *(array + i);
        else
            *(newArr + i) = 0;
     
    }
    return newArr;
}
