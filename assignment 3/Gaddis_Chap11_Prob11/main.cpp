/* 
 * File:   main.cpp
 * Author: William Gunadi
 * Created on October 5th , 2017, 
 * Purpose:  Template to be utilized in creating
 *           solutions to problems in our CSC/CIS 5 
 *           class.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>    //Math library
using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "MonthBudget.h"
//Global Constants

//Function Prototypes
void rprtBugt(MonthBudget, MonthBudget);
//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    MonthBudget budget = {500.0f, 150.0f, 65.0f, 50.0f, 250.0f, 30.0f, 100.0f,
                          150.0f, 75.0f, 50.0f} ;
    MonthBudget expens;
    //Input budget
    do{
        cout << "Enter housing expenses." << endl;
        cin >> expens.housing;
    } while(expens.housing < 0.0f);
    
    do{
        cout << "Enter utilitiez expenses." << endl;
        cin >> expens.utilities;
    } while(expens.utilities < 0);
    
    do{
        cout << "Enter household utilities expenses." << endl;
        cin >> expens.household;
    } while(expens.household < 0);
    
    do{
        cout << "Enter transportation expenses." << endl;
        cin >> expens.trnsprt;
    } while(expens.trnsprt < 0);
    
    do{
        cout << "Enter food expenses." << endl;
        cin >> expens.food;
    } while(expens.food < 0);
    
    do {
        cout << "Enter medical expenses." << endl;
        cin >> expens.medical;
    } while(expens.medical < 0);
    
    do {
        cout << "Enter insurance expenses." << endl;
        cin >> expens.ins;
    } while(expens.ins < 0);
    
    do {
        cout << "Enter entertainmant expenses." << endl;
        cin >> expens.ins;
    } while(expens.ins < 0);
    
    do{
        cout << "Enter clothing expenses." << endl;
        cin >> expens.clothes;
    } while(expens.clothes < 0);
    
    do {
        cout << "Enter miscellaneous expenses. " << endl;
        cin >> expens.misc;
    } while(expens.misc < 0);
    
    //Pass to a function to evaluate.
    rprtBugt(budget, expens);
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

void rprtBugt(MonthBudget budget, MonthBudget expenses){
    //Stucture with the report
    MonthBudget report;
    
    //fill in the report budget strucure
    report.housing = budget.housing - expenses.housing;
    report.utilities = budget.utilities - expenses.utilities;
    report.trnsprt = budget.trnsprt - expenses.trnsprt;
    report.food = budget.food - expenses.food;
    report.ins = budget.ins - expenses.ins;
    report.entrmnt = budget.entrmnt - expenses.entrmnt;
    report.household = budget.household - expenses.household;
    report.clothes = budget.clothes - expenses.clothes;
    report.misc = budget.misc - expenses.misc;
    report.medical = budget.medical - expenses.medical;
    
    //Report the budget
    cout << "Housing: " << (report.housing < 0? "over":"under") << " budget at $"
            << abs(report.housing) << endl;
    cout << "Utilities: " << (report.utilities < 0? "over":"under") << " budget at $"
            << abs(report.utilities) << endl;
    cout << "Transportation: " << (report.trnsprt < 0? "over":"under") << " budget at $"
            << abs(report.trnsprt) << endl;
    cout << "Food: " << (report.food < 0? "over":"under") << " budget at $"
            << abs(report.food) << endl;
    cout << "Insurance: " << (report.ins < 0? "over":"under") << " budget at $"
            << abs(report.ins) << endl;
    cout << "Entertainment: " << (report.entrmnt < 0? "over":"under") << " budget at $"
            << abs(report.entrmnt) << endl;
    cout << "Household Expenses: " << (report.household < 0? "over":"under") << " budget at $"
            << abs(report.household) << endl;
    cout << "Clothes: " << (report.clothes < 0? "over":"under") << " budget at $"
            << abs(report.clothes) << endl;
    cout << "miscellanious: " << (report.misc < 0? "over":"under") << " budget at $"
            << abs(report.misc) << endl;
    cout << "medical: " << (report.medical < 0? "over":"under") << " budget at $"
            << abs(report.medical) << endl;
    
}

/*
 * housing,  // Expense categories in dollars
          utilities,
          household,
          trnsprt,
          food,
          medical,
          ins,
          entrmnt,
          clothes,
          misc;
 */