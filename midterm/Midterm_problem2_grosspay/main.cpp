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
#include <iomanip>
#include <string>
#include <cmath>
using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "employee.h"
//Global Constants

//Function Prototypes
void check(employee *);
string eng(int);
//Execution begins here
int main(int argc, char** argv) {
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
    //Exit stage right!
    return 0;
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
   

