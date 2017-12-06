/* 
 * File:   main.cpp
 * Author: William Gunadi
 * Created on October 29th , 2017, 
 * Purpose:  Menu for Midterm
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>
#include <cmath>
#include <string>
using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "midterm.h"
//Global Constants

//Function Prototypes
//functions for menu
int getN();
void menu();
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();

//functions for problems1
void chkBal(account *);

//function for prob 2
void check(employee *);
string eng(int);

//functions for prob 3
stats *avgMedMod(int*, int);    
void prntRes(stats*);
void bubSort(int*, int);

//functions for prob 4
int *seprt(int);
bool check(int*, int &);
void encrypt(int*);
void swap(int &, int &);
void decrypt(int *);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int choice;
    do{
        cout << endl;
        menu();
        cout << "Enter menu choice:" << endl;
        choice = getN();
        switch(choice){
            case 1: prob1(); break;
            case 2: prob2(); break;
            case 3: prob3(); break;
            case 4: prob4(); break;
            case 5: prob5(); break;
            case 6: prob6(); break;
            default: cout << "Exiting.." << endl;; break;
        }
    } while(choice < 7);
    cout << "Give me an A pls" << endl;
    return 0;
}

int getN(){
    int inpN;
    cin >> inpN;
    cin.ignore();
    return inpN;
}

void menu(){
    cout<<"Menu for the Midterm"<<endl;
    cout<<"Type 1 for problem 1"<<endl;
    cout<<"Type 2 for problem 2"<<endl;
    cout<<"Type 3 for problem 3"<<endl;
    cout<<"Type 4 for problem 4"<<endl;
    cout<<"Type 5 for problem 5"<<endl;
    cout<<"Type 6 for problem 6"<<endl;
    cout<<"Type anything else to exit \n"<<endl;
}

void prob1(){
    //Declare variables
    char name[40];
    char address[50];
    int nCheck;
    float totCheck = 0, totDep = 0;
    int nDep;
    float balance, checkVal, depVal;
    account *person = new account;
    
    //Get Account holder's information
    cout << "Welcome to Bank of Mark." << endl;
    cout << "Please enter your Full name, Address, and your 5-Digit bank number:" << endl;
    cin.getline(name,40);
    cin.getline(address,50);
    cin >> person->accNum;
    while(person->accNum < 10000 || person->accNum > 99999){
        cout << "Enter a 5-Digit account number: " << endl;
        cin >> person->accNum;
    }
    
    //Set the account holder information
    person->name = name;
    person->Addrs = address;
    
    //Show account info;
    cout << endl;
    cout << "Your account's information: " << endl;
    cout << "Account holder's name: " << person->name << endl;
    cout << "Account holder's Address: " << person->Addrs << endl;
    cout << "Account number: " << person->accNum << endl;
    
    //Input initial balance
    cout << "Enter initial Balance. " << endl;
    cin >> person->balance;
    
    //Enter amount of checks withdrawn;
    cout << "Input number of checks written this month: " << endl;
    cin >> nCheck;
    cout << "Enter the amount: " << endl;
    for(int i = 0; i < nCheck; i++){
        cout << "Check #" << i+1 << " :   $"; cin >> checkVal;
        person->totCheck += checkVal;
    }
    
    //Enter amount deposited into account
    cout << endl;
    cout << "Enter amount of deposits made: " << endl;
    cin >> nDep;
    for(int i = 0; i < nDep; i++){
        cout << "Enter the amount of Deposit number: " << i+1 << ":  $";
        cin >> depVal;
        person->totDep += depVal;
    }
    
    //Check whether account is overdrawn or not
    chkBal(person);
}

void prob2(){
    //Declare variables
    int numEmpl;
    char name[30];
    string engAmt;
    
    //Input number of employees
    cout << "Welcome to the Bank of Mark." << endl;
    cout << "Calculating Employee's gross pay." << endl;
    cout << "At Bank of mark, we round up the paycheck to the nearest dollar " << endl;
    cout << "at the generosity of the bank." << endl;
    cout << "Enter the number of employee in the company: "; cin >> numEmpl;
    
    //Dynamically allocate memory for struct array
    employee *worker = new employee[numEmpl];
    
    for(int i = 0; i < numEmpl; i++){
        
        //cin.ignore to clear the \n from previous cin
        cin.ignore();
        cout << "Enter employee number " << i+1 << "'s name: " << endl;
        getline(cin, worker[i].name);
        cout << "Enter hours worked: "; cin >> worker[i].hrWrkd;
        if(worker[i].hrWrkd < 0){
            cout << "Invalid hours worked! negative hours is not acceptable."
                 << " Exiting now.." << endl;
            break;
        }
        cout << endl << "Enter payrate: "; cin >> worker[i].rate;
        if(worker[i].rate < 0){
            cout << "Invalid rate of pay! Negative rate is not acceptable."
                 << " Exiting now.." << endl;
            break;
        }
        cout << endl;
        
        cout << "Displaying the employee's Data: " << endl;
        cout << "Employee Name: " << worker[i].name << endl;
        cout << "Employee's Hour worked: " << worker[i].hrWrkd << endl;
        cout << "Employee's Payrate: " << worker[i].rate << endl;
        
        cout << left;
        cout << "Calculating Check.." << endl;
        check(&worker[i]);
        
        engAmt = eng(worker[i].money);
        cout << "-----------------------------------------------------------------" << endl;
        cout << setw(10) << "Company" << endl;
        cout << setw(10) << "Address" << endl;
        cout << "Name:   " << setw(14) << worker[i].name << setw(10) << "Amount: $" << worker[i].money << endl;
        cout << setw(8) << "Amount: " << engAmt << " dollars" << endl;
        cout << setw(10) << "Signature: " << "Bank of Mark" << endl;
        cout << "-----------------------------------------------------------------" << endl << endl;
    }
    
    //Delete memory
    delete [] worker;
}

void prob3(){
    //Declare variables
    int arrSize;
    cout << "Input the size for the dynamically allocated memory:" << endl;
    cin >> arrSize;           //Array size
    int *arrptr = new int [arrSize];        //Dynamic array of size 10
    stats *stsPtr;
    
    //Enter values into array
    cout << "Enter the values into the array" << endl;
    for(int i = 0; i < arrSize; i++){
        cin >> *(arrptr + i);
    }
    
    
    /*pass the array and size into the function
    function then will return a pointer to a struct with its members
     * 
     */
    
    stsPtr = avgMedMod(arrptr, arrSize);
    
    //cout average
    prntRes(stsPtr);
    
    //delete dynamimc allocated mem
    delete[] arrptr;
    delete[] stsPtr->mode;
    //Exit stage right!
}

void prob4(){
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
}
void prob5(){
    short shrt = 1;
    int intgr = 1;
    unsigned int unInt = 1;
    long lng = 1, templ;
    float flt = 1, tempf;
    double dbl = 1;
    long double ldbl = 1 ;
    int num = 500;
    
    //Display purpose
    cout<<"This program will calculate the highest factorial that a given\n"
        <<"primitive prototype can hold in a byte\n\n";

    //Short  
    for(int i = 1;i <= num;i++){
        shrt = shrt*i;
        if(shrt <= 0){
            shrt = i - 1;
            break;
        } 
    }
    //Integer   
    for(int i=1;i<=num;i++){
        intgr=intgr*i;
        if(intgr<=0){
            intgr=i-1;
            break;
        } 
    }
    //Unsigned Integer   
    for(int i=1;i<=num;i++){
        
        unInt=unInt*i;
        if(unInt<=0){
            unInt=i-1;
            break;
        } 
    }
    //Long   
    for(int i=1;i<=num;i++){
        lng=lng*i;
        templ=lng;
        if((lng*i++) < templ){
            lng=i;
            break;
        } 
    }
    //Float  
    for(int i=1;i<=num;i++){
        flt=flt*i;
        tempf=flt;
        if((flt*i++) < tempf){
            flt = i;
            break;
        } 
    }
    //Double  
    for(int i=1;i<=num;i++){
        dbl=dbl*i;
        if(dbl <= 0){
            dbl = i-1;
            break;
        } 
    }
    //Long Double  
    for(int i=1;i<=num;i++){
        ldbl=ldbl*i;
        if(ldbl<= 0){
            ldbl = i-1;
            break;
        } 
    }
    cout << "Highest factorial that can be held in a Short: "<< shrt <<endl;
    cout << "Highest factorial that can be held in an Integer: "<< intgr<<endl;
    cout << "Highest factorial that can be held in an Unsigned Integer: "<<unInt<<endl;
    cout << "Highest factorial that can be held in a Long: "<< "20" <<endl;
    cout << "Highest factorial that can be held in a Float: "<< "34" << endl;
    cout << "Highest factorial that can be held in a Double: "<< "170" << endl;
    cout << endl << endl;
}

void prob6(){
    //Declare variables
    cout << "Convert the following into binary, hex, and octal:" << endl;
    cout << "2.875, 0.1796875" << endl;
    cout << "2.875 into Binary: 10.1110" << endl;
    cout << "2.875 into Hex: 2.E" << endl;
    cout << "2.875 into Octal: 2.7" << endl << endl;
    cout << "0.1796875 into Binary: 0.0010111" << endl;
    cout << "0.1796875 into Hex: 0.2E" << endl;
    cout << "0.1796875 into Octal: 0.134" << endl << endl << endl;
    cout << "2.875 to floating point rep: 01011100 00000000 00000000 00000010" << endl;
    cout << "5c000002" << endl << endl;
    cout << "0.1796875 to FPR: 01011100 00000000 00000000 11111110 5C0000FE" << endl << endl;
    cout << "-2.875 to Binary: D.2" << endl;
    cout << "-2.875 to Octal: 15.1" << endl;
    cout << "-2.875 to Hex: 1101.0010" << endl;
    cout << "-2.875 to FPR: 11101001 00000000 00000000 00000100 E9000004" << endl << endl;
    cout << "-0.1796875 to Binary: .11010010" << endl;
    cout << "-0.1796875 to Hex: .D2" << endl;
    cout << "-0.1796875 to Octal: .664" << endl; 
    cout << "-0.1796875 to FPR: 11101001 00000000 00000000 00000000 E9000000" << endl << endl;
    cout << "Converting 59999901 to Decimal: 1.4" << endl;
    cout << "Converting 599999902 to Decimal: 2.8" << endl;
    cout << "Converting A66667FE to Decimal: 0.175" << endl;
}

void chkBal(account *x){
    x->balance = (x->balance + x->totDep) - x->totCheck;
    
    if(x->balance > 0){
        cout << "Current balance is : $" << x->balance;
    }
    else{
        cout << "Current balance is : $" << x->balance << endl;
        cout << "Due to overdrawing your account, we've applied a $15 fee to your account balance." << endl;
        x->balance -= 15.00;
        cout << "Balance after fees : $" << x->balance;
    }
}

void check(employee *x){
    if(x->hrWrkd <= 30){
        x->money = ceil(x->hrWrkd * x->rate);
    }
    if(x->hrWrkd > 30 && x->hrWrkd <= 50){
        x->money = ceil((30 * x->rate) + ((x->hrWrkd - 30) * (2 * x->rate)));
    }
    if(x->hrWrkd > 50){
        x->money = ceil((30 * x->rate) + (20 * (2 * x->rate)) + (x->hrWrkd - 50) * (3 * x->rate));
    }

    
}

string eng(int amount){
    //Declare variables
    char thsnd, hundred, tens, ones;
    string nAmount = " ";
    
    //Years
    thsnd = (amount - amount % 100)/1000;      // 1 in 1999
    amount = (amount - thsnd * 1000);         //change amount to 999
    hundred = (amount - amount%100)/100;      //first 9 in 1999
    amount = (amount - hundred * 100);     // = 99
    int temp = amount % 10;
    tens = (amount - amount % 10)/10;      //9
    ones = amount%10;
    
    switch(thsnd)
    { 
        case 9: nAmount += "Nine Thousand "; break;
        case 8: nAmount += "Eight Thousand "; break;
        case 7: nAmount += "Seven Thousand "; break;
        case 6: nAmount += "Six Thousand "; break;
        case 5: nAmount += "Five Thousand "; break;
        case 4: nAmount += "Four Thousand ";break;
        case 3: nAmount += "Three Thousand ";break;
        case 2: nAmount += "Two Thousand "; break;
        case 1: nAmount += "One thousand "; break;
        case 0: break;
        default: cout << "Bad number" << endl;
    }
    switch (hundred)
    {
        case 9: nAmount += "nine hundred "; break;  
        case 8: nAmount += "eight hundred "; break;   
        case 7: nAmount += "seven hundred "; break;   
        case 6: nAmount += "six hundred "; break;   
        case 5: nAmount += "five hundred "; break;   
        case 4: nAmount += "four hundred "; break;   
        case 3: nAmount += "three hundred "; break;   
        case 2: nAmount += "two hundred "; break;  
        case 1: nAmount += "one hundred "; break;
        case 0: nAmount += ""; break;
        default: cout << "Bad number" << endl;
    }
    switch (tens)
    {
        case 9: nAmount += "and ninty "; break;  
        case 8: nAmount += "and eighty "; break;   
        case 7: nAmount += "and seventy "; break;   
        case 6: nAmount += "and sixty "; break;   
        case 5: nAmount += "and fifty "; break;   
        case 4: nAmount += "and fourty "; break;   
        case 3: nAmount += "and thirty "; break;   
        case 2: nAmount += "and twenty "; break;  
        case 1: switch(temp){
            case 9: nAmount += " and nineteen "; ones = 0; break;
            case 8: nAmount += "and eighteen"; ones = 0; break;
            case 7: nAmount += "and seventeen "; ones = 0; break;
            case 6: nAmount += "and sixteen "; ones = 0; break;
            case 5: nAmount += "and fifteen "; ones = 0; break;
            case 4: nAmount += "and fourteen "; ones = 0; break;
            case 3: nAmount += "and thirteen "; ones = 0; break;
            case 2: nAmount += "and twelve "; ones = 0; break;
            case 1: nAmount += "and eleven "; ones = 0; break;
            case 0: nAmount += "and ten "; ones = 0; break;
            default: cout << "error" << endl;
        }
        
        case 0: nAmount += ""; break;
        default: cout << "Bad number" << endl;
    }
    switch (ones)
    {
        case 9: nAmount += "nine"; break;  
        case 8: nAmount += "eight"; break;   
        case 7: nAmount += "seven"; break;   
        case 6: nAmount += "six"; break;   
        case 5: nAmount += "five"; break;   
        case 4: nAmount += "four"; break;   
        case 3: nAmount += "three"; break;   
        case 2: nAmount += "two"; break;  
        case 1: nAmount += "one"; break;
        case 0: nAmount += " "; break;
    }
    return nAmount;
}  

stats *avgMedMod(int *arr, int n){
    //Declare variables
    int total = 0;
    stats *agMedMod = new stats;     //agMedMod of type structure stats
   
    //calculate the average
    for(int i = 0; i < n; i++){
        total += *(arr + i);
    }
    agMedMod->avg = static_cast<float>(total)/n;
    
    //Calculate the Median
    cout << "Sorting the array.." << endl << endl;
    bubSort(arr, n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl << endl;
    if(n % 2 == 0){              //If size is even
        agMedMod->median = static_cast<float>(((arr[n/2] + arr[(n/2)-1])))/2;
    }
    else
        agMedMod->median = arr[n/2];
    
    //Calculate max frequency
    agMedMod->maxFreq = 1;
    int modes = 1;
    for(int i = 0; i < n-1; i++){
        if(arr[i+1] == arr[i]){
            modes++;
            if(modes > agMedMod->maxFreq){
                agMedMod->maxFreq = modes;
            }
        }
        else
        {
            modes = 1;
        }    
    }
    
    //mode array
    int cFreq = 1;      //Current frequency while comparing
    int mElem = 0;      //Size of new array of mode(s)
    for(int i = 1; i < n; i++){
        if(arr[i] == arr[i-1]){
            cFreq++;
            if(cFreq == agMedMod->maxFreq) mElem++;
        }
        else cFreq = 1;
    }
    
    //fill mode array with modes
    agMedMod->mode = new int [mElem];
    int index = 0;
    cFreq = 1;
    for(int i = 1; i < n; i++){
        if(arr[i] == arr[i - 1]){
            cFreq++;
            if(cFreq == agMedMod->maxFreq){
                agMedMod->mode[index] = arr[i];
                index++;
            }
        }else cFreq = 1;
    }
    
    cout << "printing the mode array.." << endl;
    for(int j = 0; j < mElem; j++){
        cout << agMedMod->mode[j] << "-";
    }
    cout << endl;
    
    return agMedMod;
}

void bubSort(int* arr, int n){
    bool swap;
    int temp;
    
    do{
        swap = false;
        for(int i = 0; i < n-1; i++){
            if(arr[i] > arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                swap = true;
            }
                
        }
    } while(swap);   
}

void prntRes(stats *arr){
    //print result
    cout << "The average is: " << arr->avg << endl;
    cout << "The Median is: " << arr->median << endl;
    cout << "The max frequency is: " << arr->maxFreq << endl;   
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
