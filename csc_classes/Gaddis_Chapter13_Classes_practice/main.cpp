/* 
 * File:   main.cpp
 * Author: William Gunadi
 * Created on September 30, 2017, 
 * Purpose:  Practice creating classes
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <string>
#include <fstream>

#include "Personal_Profile.h"
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    cout << "This program uses a class as an example." << endl;
    string name, bthDate;
    int age, weight;
    //Append into a file
    ofstream outFile;
    string fileName = "sasa.txt";
    outFile.open(fileName, fstream::app);
    if(outFile.fail())
        cout << "File Error! did not open." << endl;
    
    
    
    cout << "Enter name of student 1: " << endl;
    getline(cin, name);
    cout << "Enter age of student 1" << endl;
    cin >> age;
    cout << "Enter weight of student 1: " << endl;
    cin >> weight;
    cout << "Enter birth Date of student 1: " << endl;
    cin.ignore();
    getline(cin, bthDate);
    
    //Instantiate a class.
    Profile Stu1(name, age, weight, bthDate);
    
    //use the class to get data;
    cout << endl << endl;
    cout << "The data of the students: " << endl;
    cout << "Student name: " << Stu1.stuName() << endl;
    cout << "Student age: " << Stu1.stuAge() << endl;
    cout << "Student Weight(lbs): " << Stu1.stuWeight() << endl;
    cout << "Student Birthdate: " << Stu1.stuBthDate() << endl;
    
    //Append to a file
    outFile << "The data of the student: " << endl;
    outFile << "Student name: " << Stu1.stuName() << endl;
    outFile << "Student age: " << Stu1.stuAge() << endl;
    outFile << "Student Weight(lbs): " << Stu1.stuWeight() << endl;
    outFile << "Student Birthdate: " << Stu1.stuBthDate() << endl;
    
    //close file
    outFile.close();
    
    //Exit stage right!
    return 0;
}

