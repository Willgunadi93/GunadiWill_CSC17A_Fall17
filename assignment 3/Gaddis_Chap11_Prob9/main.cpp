/* 
 * File:   main.cpp
 * Author: William Gunadi
 * Created on October 4th, 2017, 
 * Purpose:  Gaddis Chapter 11 Problem: seakers Bureau
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "Speaker.h"
//Global Constants

//Function Prototypes
void prntSpr(speaker *, int, int);
void editSpk(speaker &, int);
bool isNum(string);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    speaker *ptrSpk;
    int nPpl;
    
    cout << "enter number of speakers: "; cin >> nPpl;
    
    //Dynamically Assign memory for ptr
    ptrSpk = new speaker[nPpl];
    
    //initiate speaker's data into the array
    for(int i = 0; i < 10; i++){
        *(ptrSpk + i) = {"null", "null", "null", 0.0f};
    }
    
    int entry; // Selected entry
    do {
        int val; // Selected entry value
        
        // Print the speakers
        prntSpr(ptrSpk, nPpl, 2);
        
        // Get the entry
        do {
            cout << "Select Which speaker to edit. Enter 0 to exit" << endl;
            cin >> entry;
            entry--;
        } while (entry < -1 || entry >= nPpl);
        if (entry == -1) continue; // exit
        
        // Let the user edit entry
        editSpk(ptrSpk[entry], entry);
        
    } while (entry != -1);

    cout << "Exiting program" << endl;
    
    // Cleanup
    delete [] ptrSpk;
    
    // Exit Program
    return 0;
}

void prntSpr(speaker *ptrSpk, int size, int perLine) {
    cout << left;
    for (int i = 0; i < size; i += perLine) {
        int n = perLine > size - i?size - i:perLine; // Number of entries to print this line
        for (int j = 0; j < n; j++) cout << "Speaker #" << setw(17) << i + j + 1;
        cout << endl;
        for (int j = 0; j < n; j++) cout << "Name: " << setw(20) << ptrSpk[i + j].name;
        cout << endl;
        for (int j = 0; j < n; j++) cout << "Phone: " << setw(19) << ptrSpk[i + j].number;
        cout << endl;
        for (int j = 0; j < n; j++) cout << "Topic: " << setw(19) << ptrSpk[i + j].topic;
        cout << endl;
        for (int j = 0; j < n; j++) cout << "Fee: $" << setw(20) << ptrSpk[i + j].fee;
        cout << endl << endl;
    }
    cout << right;
}

bool isNum(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] < 48 || s[i] > 57) return false;
    }
    return true;
}

void editSpk(speaker &spkr, int num) {
    int val; // Selected value to edit, range 1-4
    do {
        
        // Print header
        cout << endl;
        cout << "Speaker #" << num + 1 << endl;
        cout << "1. Name: " << spkr.name << endl;
        cout << "2. Phone: " << spkr.number << endl;
        cout << "3. Topic: " << spkr.topic << endl;
        cout << "4. Fee: $" << spkr.fee << endl;

        // Get the value to edit
        do {
            cout << "Select a value to edit, type 0 to cancel" << endl;
            cin >> val;
        } while (val < 0 || val > 4);
        if (val == 0) continue; // Cancel

        switch (val) {
            case 1: {
                string name; // New name
                do {
                    cout << "Enter a new name value, type 0 to cancel" << endl;
                    cin.ignore();
                    getline(cin, name);
                } while (name == "");
                if (name != "0") spkr.name = name;
                break;
            }
            case 2: {
                string num; // New phone number
                do {
                    cout << "Enter a new phone number, type 0 to cancel" << endl;
                    cin >> num;
                } while ((num == "" || !isNum(num) || num.length() != 10) && num != "0");
                if (num != "0") spkr.number = num;
                break;
            }
            case 3: {
                string topic; // New topic
                do {
                    cout << "Enter a new topic value, type 0 to cancel" << endl;
                    cin.ignore();
                    getline(cin, topic);
                } while (topic == "");
                if (topic != "0") spkr.topic = topic;
                break;
            }
            case 4: {
                float fee; // New fee amount
                do {
                    cout << "Enter a new fee amount, type -1 to cancel" << endl;
                    cin >> fee;
                } while (fee < 0.0f && fee != -1.0f);
                if (fee != -1.0f) spkr.fee = fee;
                break;
            }
        }
    } while (val != 0);
}