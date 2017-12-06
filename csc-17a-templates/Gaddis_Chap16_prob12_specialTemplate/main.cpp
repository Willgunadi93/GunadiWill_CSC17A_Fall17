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
#include <vector>
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
double getTot(vector<double>);
double getAvg(vector<double>);
double getSmall(vector<double>, int &);
double getLarge(vector<double>, int &);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    vector<double> rainfall;
    double num;
    const int nMonth = 12;
    int sub = 0;
    
    for(int i = 0; i < nMonth; i++){
        cout << "Enter rainfall in inches for month:  " << i+1 << endl;
        cin >> num;
        rainfall.push_back(num);
        
        while(rainfall.at(i) < 0){
            cout << "Cannot accept negative number." << endl;
            cout << "Enter a new number: " << endl;
            cin >> rainfall[i];
    }
}
    
 cout << fixed << showpoint << setprecision(2) << endl;
 cout << "total rainfall for the year is: " << getTot(rainfall) << endl;
 
 //average
 cout << "Average rainfall for the year is: " << getAvg(rainfall) << endl;
 
 
 //Samllest
 cout << "The smallest rainfall for the year is: " << getSmall(rainfall, sub) 
         << " in month: " << sub + 1 << endl;
 
  //largest
 cout << "The largest rainfall for the year is: " << getLarge(rainfall, sub) 
         << " in month: " << sub + 1 << endl;
 
 
 //Exit stage right!
 return 0;
}

double getTot(vector<double> rainfall){
    //counter
    double total = 0;
    for(int i = 0; i < 12; i++){
        total += rainfall.at(i);
    }
    return total;
}

double getAvg(vector<double> rainfall){
    //counter
    double total = 0;
    for(int i = 0; i < 12; i++){
        total += rainfall.at(i);
    }
    
    //average
    total /= 12;
    //return average
    
    return total;
}

double getSmall(vector<double> rainfall, int &index){
    float smallest;
    smallest = rainfall.at(0);
    
    for(int i = 0; i < 12; i++){
        if(rainfall.at(i) < smallest){
            smallest = rainfall.at(i);
            index = i;
        }
    }
    
    return smallest;
}

double getLarge(vector<double> rainfall, int &index){
    index = 0;
    float largest;
    largest = rainfall.at(0);
    
    for(int i = 0; i < 12; i++){
        if(rainfall.at(i) > largest){
            largest = rainfall.at(i);
            index = i;
        }
    }
    
    return largest;
}
