/* 
 * File:   main.cpp
 * Author: William Gunadi
 * Created on September , 2017, 
 * Purpose:  Template to be utilized in creating
 *           solutions to problems in our CSC/CIS 5 
 *           class.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <fstream>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

void prtArr(int *, int);
void fiToArr(const char *, int *&, int);
void arrToFi(const char *, int *, int);
//Execution begins here
int main(int argc, char** argv) {
    // Declaration of Variables
    int *arr; // Array to save / read to
    int size; // Size of arr
    
    // Input values
    do {
        cout << "Input the size of the array" << endl;
        cin >> size;
    } while (size <= 0);
    
    // Generate the array
    arr = new int[size];
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }
    
    // Output the array
    cout << "The array:" << endl;
    prtArr(arr, size);
    
    // Save array to file
    cout << "Saving array.." << endl << endl;
    arrToFi("array.txt", arr, size);
    
    // Read array from file
    cout << "Reading array.." << endl << endl;
    fiToArr("array.txt", arr, size);
    
    // Output the array again
    cout << "Display the array again.." << endl;
    prtArr(arr, size);
    
    // Cleanup
    delete [] arr;
    
    // Exit Program
    return 0;
}

void prtArr(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << i;
        if ((i + 1) % 10 == 0) cout << endl;
        else cout << " ";
    }
    if (size % 10 != 0) cout << endl;
}

void fiToArr(const char *nFile, int *&arr, int size) {
    fstream file;
    file.open(nFile, ios::in | ios::binary); // Open the file
    
    // Initialize the array
    arr = new int[size];
    
    // Read the file
    file.read(reinterpret_cast<char *>(arr), size * sizeof(int));
    
    // Close the file
    file.close();
}

void arrToFi(const char *nFile, int *arr, int size) {
    fstream file;
    file.open(nFile, ios::out | ios::binary); // Open the file
    
    // Write the file
    file.write(reinterpret_cast<char *>(arr), size * sizeof(int));
    
    // Close the file
    file.close();
    
    // Cleanup
    delete [] arr;
}
