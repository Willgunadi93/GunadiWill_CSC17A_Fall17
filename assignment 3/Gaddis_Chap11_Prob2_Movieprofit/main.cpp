/* 
 * File:   main.cpp
 * Author: William Gunadi
 * Created on October 3, 2017, 
 * Purpose:  Gaddis Chapter 11
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <string>       //String library
using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "MovieData.h"
//Global Constants

//Function Prototypes
void output(MovieData, MovieData);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    MovieData mv1, mv2; //stuctures for movies
    
    //Initialize variables
    do{
        cout << "Enter name of movie 1: " << endl;
        getline(cin, mv1.title);
    } while(mv1.title == "");
    
    //Movie 2
    do{
        cout << "Enter name of movie 2: " << endl;
        getline(cin, mv2.title);
    } while(mv2.title == "");
    
    //Enter directors of movie
    do{
        cout << "Enter name of director of movie 1: " << endl;
        getline(cin, mv1.directr);
    } while(mv1.directr == "");
    
    do{
        cout << "Enter name of director of movie 2: " << endl;
        getline(cin, mv2.directr);
    } while(mv2.directr == "");
    
    //Enter Released year of movie
    do{
        cout << "Enter the year of which movie 1 was released: " << endl;
        cin >> mv1.year;
    } while( mv1.year < 1000 || mv1.year > 9999);
    
    do{
        cout << "Enter the year of which movie 2 was released: " << endl;
        cin >> mv2.year;
    } while( mv2.year < 1000 || mv1.year > 9999);
    
    //Enter the durations of the movies
    do{
        cout << "Enter the duration of movie 1: " << endl;
        cin >> mv1.time;
    } while( mv1.time <= 0);
    
    do{
        cout << "Enter the duration of movie 2: " << endl;
        cin >> mv2.time;
    } while(mv2.time <= 0);
    
    //Cost for movies
    do{
        cout << "Enter the Total Production cost of movie 1: " << endl;
        cin >> mv1.cost;
    } while(mv1.cost <= 0);
    
    do{
        cout << "Enter the Total production cost of movie 2: " << endl;
        cin >> mv2.cost;
    } while(mv2.cost <= 0);
    
    //Revenue for the movies
    do{
        cout << "Enter the revenue for movie 1: " << endl;
        cin >> mv1.rev;
    } while(mv1.rev <= 0);
    
    do{
        cout << "Enter the revenue for movie 2: " << endl;
        cin >> mv2.rev;
    } while(mv2.rev <= 0);
    
    
    output(mv1, mv2);
    
    //Exit stage right!
    return 0;
}

void output(MovieData mv1, MovieData mv2){
    //data for movie 1
    cout << "Displaying movie data..." << endl;
    cout << "\t\tData for Movie 1" << endl;
    cout << "Name: " << mv1.title << endl;
    cout << "Director: " << mv1.directr << endl;
    cout << "Year released: " << mv1.year << endl;
    cout << "Duration of movie: " << mv1.time << endl;
    cout << "The profit of " << mv1.title << " : $" << (mv1.rev - mv1.cost) << endl;
    
    //Data for movie 2
    cout << "\n\t\tData for Movie 2" << endl;
    cout << "Name: " << mv2.title << endl;
    cout << "Director: " << mv2.directr << endl;
    cout << "Year released: " << mv2.year << endl;
    cout << "Duration of movie: " << mv2.time << endl;
   cout << "The profit of " << mv2.title << " : $" << (mv2.rev - mv2.cost) << endl;
}