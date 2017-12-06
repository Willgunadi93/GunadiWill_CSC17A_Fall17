/* 
 * File:   main.cpp
 * Author: William Gunadi
 * Created on September 525, 2017, 
 * Purpose:  Gaddis Chapter 9 problem 6
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void sortArr(int* [], int);
void showArr(int*, int);
void shwPtr(int* [], int);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int nDnts;
    int* dntArr;        //Array for donations
    int** arrPtr;        //Second array for donations
    //enter n Donations and Input into the array
    cout << "Donations made to United Cause.. " << endl;
    cout << "Enter number of donations made to United Cause: " << endl;
    cin >> nDnts;
    
    //Create dynamically allocated array
    dntArr = new int[nDnts];
    arrPtr = new int*[nDnts];
    
    //Input the donations into the array
    cout << "Enter the amount of donations: " << endl;
    for(int i = 0; i < nDnts; i++)
    {
        cout << "Donation number " << i+1 << " : $";
        cin >> *(dntArr+i);
    }
    
    //integrate the array of pointers
    for(int j = 0; j < nDnts; j++){
        arrPtr[j] = &dntArr[j];
    }
    
    //Sort the array of pointers pointing to a pointer
    sortArr(arrPtr, nDnts);
    
    //Display donations using array of pointers in ascending order
    cout << "Donations in ascending order..." << endl;
    shwPtr(arrPtr, nDnts);
    
    //Displaying donations in their original format
    cout << "Donations in original order..." << endl;
    showArr(dntArr, nDnts);
    
    //Delete the arrays
    delete[] dntArr, delete[] arrPtr;
    
    //Exit stage right!
    return 0;
}

void shwPtr(int* arr[], int size){
    
    for(int count = 0; count < size; count++)
    {
        cout << *(arr[count]) << " " << endl;
    }
}


void showArr(int* arr, int size)
{
    for(int count = 0; count < size; count++)
    {
        cout << arr[count] << " " << endl;
    }
}


void sortArr(int *arr[], int size){
    
    int strScn, minIndx;
    int* minElem;
    
    for(strScn = 0; strScn < (size - 1); strScn++){
        
        minIndx = strScn;
        minElem = arr[strScn];
        for(int index = strScn+1; index < size; index++){
            
            if(*(arr[index]) < *minElem)
            {
                minElem = arr[index];
                minIndx = index;
            }
        }
        arr[minIndx] = arr[strScn];
        arr[strScn] = minElem;
    }
}
