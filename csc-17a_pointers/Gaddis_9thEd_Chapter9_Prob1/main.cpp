/* 
 * File:   main.cpp
 * Author: William Gunadi
 * Created on September 24th, 2017, 
 * Purpose:  Array Allocator
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
int* daArry(int);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int num;
    int* array = nullptr;
    
    cout << "Dynamically allocating array:.." << endl;
    cout << "Enter number of array to allocate: " << endl;
    cin >> num;
    
    //Pass in number to function
    array = daArry(num);
    
    //output the array
    cout << "The numbers are.." << endl;
    for(int i = 0; i != num; i++){
        
        cout << *(array+i) << " ";
        
    }
    
    //Delete newly allocated array
    cout << "\nDeleting the array.." << endl;
    delete [] array;
    //Exit stage right!
    return 0;
}

int* daArry(int index)
{
    int* arry = nullptr;
    
    if(index <= 0)
        return nullptr;
    
    arry = new int[index];
    //Fill array
    cout << "Enter " << index << " numbers to fill into array: " << endl;
    for(int i = 0; i < index; i++)
    {
        cin >> *(arry+i);
    }
    
    //return array
    return arry;
}
