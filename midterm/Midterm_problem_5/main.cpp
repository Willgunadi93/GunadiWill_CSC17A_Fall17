/* 
 * File:   main.cpp
 * Author: William Gunadi
 * Created on October 30th , 2017, 
 * Purpose: Largest factorial
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
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
    
    return 0;
}
    


