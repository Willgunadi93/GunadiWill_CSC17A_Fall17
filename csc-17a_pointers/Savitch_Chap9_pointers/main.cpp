/* 
 * File:   main.cpp
 * Author: William Gunadi
 * Created on October , 2017, 
 * Purpose:  Savitch Chap 9 Pointers
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
char *del(char[], int &);
void swap(char&, char&);
//Execution begins here
int main(int argc, char** argv) {
    int size = 10;
    char arr[] = { 'a', 'b', 'a', 'd', 'j', 'a', 'l', 'm', 'n', 'p' };
    //int arr[] = {1, 2, 1, 4, 5, 2, 7, 8, 10, 11};
    char *a = new char[size];
   
    a = del(arr, size);
    
    for(int i = 0; i < size; i++){
        cout << *(a+i) << " ";
    }
    
    delete [] a;
    
    //Exit stage right!
    return 0;
}

char *del(char arr[], int &size){
    int n = size;
    bool swp;
    int bap = 10;
    //copy the array into the pointer array
    char *nwArr = new char[size];
    for(int i = 0; i < size; i++){
        nwArr[i] = arr[i];
    }
    
    for(int i = 0; i < size; i++){
        cout << *(nwArr+i) << " ";
    }
    cout << endl;
    
    //swap using bubble sort
    
    for(int i = n-1; i > 0; i--){
        for(int j = 0; j < i; j++){
            if(nwArr[j] > nwArr[j+1]){
                int temp = nwArr[j+1];
                nwArr[j+1] = arr[j];
                nwArr[j] = temp;
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        if(nwArr[i] == nwArr[i+1]){
            delete nwArr[i];
            bap--;
        }
    }
    
    cout << bap << endl;
         
   
    return nwArr;  
}


