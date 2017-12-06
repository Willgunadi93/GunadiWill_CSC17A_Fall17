/* 
 * File:   main.cpp
 * Author: William Gunadi
 * Created on September 25, 2017, 
 * Purpose:  Display Test scores /w Dynamic Array
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <string>
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
int* sortDA(int*, int, string**);
void swap(int &, int &);
void average(float* ,int*, int);
//Execution begins here
int main(int argc, char** argv) {
    /* Note:
     * tstAry holds test scores. stuName array holds names of students. StuPtr array
     * holds the address of the student names. When scores of students are arranged, also swap
     * the stuPtr array. dereference the stuPtr to get the names.
     */
   
    //Intro
    cout << "Displaying test scores using dynamically allocated array.." << endl;
    
    //Declare variables
    int tstNum;
    int* tstAry = nullptr;
    float avrg;
    string* stuName = nullptr;
    string** stuPtr = nullptr;
    
    //User input number of test and input the scores
    cout << "Enter number of tests to input: "; cin >> tstNum;
    tstAry = new int[tstNum];
    stuName = new string[tstNum];
    stuPtr = new string*[tstNum];
    
    //Enter the scores
    for(int i = 0; i < tstNum; i++){
        //Enter student nae
        cout << "Enter name for test " << i+1 << endl;
        cin.ignore();
        getline(cin, *(stuName+i));
        
        cout << "Enter score for " << *(stuName+i) << " :  ";
        cin >> tstAry[i];
        cout << "\n\n";
    }
    
     //Reference the address of stuName to stuPtr array
    for(int index = 0; index < tstNum; index++){
        stuPtr[index] = &stuName[index];
    }
    
    
    //Pass array into sort function;
    sortDA(tstAry, tstNum, stuPtr);
    
    //display the sorted array
    cout << "Now the sorted array.." << endl;
    for(int j = 0; j < tstNum; j++)
    {
        cout << "student name: " << setw(7) << *stuPtr[j] << setw(20)
             << "Test score: " << *(tstAry+j) << " \n";
    }
    cout << "\n";
    
    average(&avrg, tstAry, tstNum);
    
    //output the average test scores
    cout << "The average tests scores are: " << avrg << endl;
    
    //Delete allocated array..
    cout << "Deleting the array.." << endl;
    delete [] tstAry, delete [] stuName, delete [] stuPtr;
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

int* sortDA(int* arr, int index, string** names){
    
    bool swp;
    do{
        swp = false;
        for(int i = 0; i < index - 1; i++){
            if(*(arr+i) > *(arr+(i+1)))
            {
                swp = true;
                swap(*(arr+i), *(arr+(i+1)));
                swap(*(names+i), *(names+(i+1)));
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
