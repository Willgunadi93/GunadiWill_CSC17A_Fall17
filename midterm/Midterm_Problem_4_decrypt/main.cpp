/* 
 * File:   main.cpp
 * Author: William Gunadi
 * Created on October 30th, 2017, 
 * Purpose:  Midterm Problem 4 Decrypt
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
int *seprt(int);
bool check(int*, int &);
void encrypt(int*);
void swap(int &, int &);
void decrypt(int *);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int *dptPtr, test;
    char ans;
    int input;
    do{
        //menu
        cout << "Menu" << endl;
        cout << "1. Encrypt" << endl;
        cout << "2. Decrypt" << endl;
        cout << "3. Exit" << endl;
        cout << "Input menu choice: "; cin >> ans;
        cout << endl << endl;
        //Encrypt
        if(ans == '1'){
        //cin input
        cout << "Enter 4-digit number. Cannot have 8 or 9" << endl;
        cin >>input; 
        if(input < 1000 || input > 9999){
            cout << "Not valid input. Enter a 4 digit number" << endl;
            cin >> input;
        }
        test = input/1000;
        //check if first digit is a 0
        if(test == 0){
            cout << "Error, enter 4-digit number from 1-7" << endl;
            cin >> input;
        }
        else
            dptPtr = seprt(input);
            
            
            
            //do-while to check if input has 8 or 9
            do{
                check(dptPtr, input);
                dptPtr = seprt(input);
            } while(check(dptPtr, input));
            
            //encrypt
            encrypt(dptPtr);
        } 
        
        //Decrypt
        if(ans == '2'){
        //cin input
        cout << "Enter 4-digit number. Cannot have 8 or 9" << endl;
        cin >>input; 
        test = input/1000;
        if(input < 1000 || input > 9999){
            cout << "Not valid input. Enter a 4 digit number" << endl;
            cin >> input;
        }
        //check if first digit is a 0
        if(test == 0){
            cout << "Error, enter 4-digit number from 1-7" << endl;
            cin >> input;
        }
        else
            dptPtr = seprt(input);
            //check if input has 8 or 9
            do{
                check(dptPtr, input);
                dptPtr = seprt(input);
            }while(check(dptPtr, input));
            
            //decrypt
            decrypt(dptPtr);
        }
        if(ans == '3') break;
        
    } while(ans == '1' || ans == '2');
    
    cout << "Exiting.." << endl;
    //Exit stage, left!
    return 0;
}

int *seprt(int input){
    int *newptr = new int[4];
    int temp;
    
    for(int i = 3; i >= 0; i--){
        newptr[i] = input % 10;
        input = input / 10;
    }
    return newptr;
}

bool check(int *arr, int &input){
    bool change = false;
    //check for 8 or 9
    for(int i = 0; i < 4; i++){
        if(arr[i] == 8 || arr[i] == 9){
            cout << "Digits 8 or 9 found. Enter a new number." << endl;
            cin >> input;
            change = true;
        }
    }
    return change;
}

void encrypt(int *arr){
    //Mod the number
    for(int index = 0; index < 4; index++){
        arr[index] = (arr[index] + 5) % 8;
    }
    
    cout << endl;
    //swap first and third digit
    swap(arr[0], arr[2]);
    
    //swap 2nd and 4th digit
    swap(arr[1], arr[3]);
    
    cout << endl << "The Encrypted Number: ";
    
    for(int x = 0; x < 4; x++){
        cout << *(arr + x) << " ";
    } cout << endl << endl;
}

void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void decrypt(int *arr){
    //swap 1nd and 3rd digit
    swap(arr[0], arr[2]);
    
    //swap 2nd and 4th digit
    swap(arr[1], arr[3]);
    
    cout << endl;
    //decrypt
    for(int i = 0; i < 4; i++){
        if(arr[i] == 0){
            arr[i] = 3;
        }
        else if(arr[i] == 1){ arr[i] = 4; }
        else if(arr[i] == 2) { arr[i] = 5; }
        else if(arr[i] == 3) { arr[i] = 6; }
        else if(arr[i] == 4) { arr[i] = 7; }
        else if(arr[i] == 5) { arr[i] = 0; }
        else if(arr[i] == 6) { arr[i] = 1; }
        else if(arr[i] == 7) { arr[i] = 2; }
       
    }
    cout << "The decrypted number:";
    for(int i = 0; i < 4; i++){
        cout << *(arr+i) << " ";
    } cout << endl << endl;
}