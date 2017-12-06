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
using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "account.h"
//Global Constants

//Function Prototypes
void chkBal(account *);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    char name[40];
    char address[40];
    int nCheck;
    float totCheck = 0, totDep = 0;
    int nDep;
    float balance, checkVal, depVal;
    account *person = new account;
    
    //Get Account holder's information
    cout << "Welcome to Bank of Mark." << endl;
    cout << "Please enter your Full name, Address, and your 5-Digit bank number:" << endl;
    cin.getline(name,40);
    cin.getline(address,40);
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
   
    //Exit stage right!
    return 0;
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

