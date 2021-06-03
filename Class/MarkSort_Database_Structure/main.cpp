/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 1st, 2021, 11:00 AM
 * Purpose:  Mark Sort Database Index
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random Function
#include <ctime>     //Setting the Random Number Seed
using namespace std;

//User Libraries
#include "Array.h"

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
void fillAry(Array &,int);
void prntAry(Array &,int);
void markSrt(Array &);

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables Static Array
    Array array;
    
    //Initialize Variables
    fillAry(array,SIZE);
    cout<<"Array before Sorting"<<endl;
    prntAry(array,10);

    //Map Inputs to Outputs -> Process
    markSrt(array);
    
    //Display Inputs/Outputs
    cout<<"Array after Sorting"<<endl;
    prntAry(array,10);
    
    //Exit the Program - Cleanup
    return 0;
}

void markSrt(Array &a){
    for(int i=0;i<a.size-1;i++){      //Loop for each position in List
        for(int j=i+1;j<a.size;j++){  //Loop to swap with first in List
            if(a.array[a.index[i]]>a.array[a.index[j]]){       //Put the smallest at top of List
                a.index[i]=a.index[i]^a.index[j];  //In place Swap
                a.index[j]=a.index[i]^a.index[j];  //In place Swap
                a.index[i]=a.index[i]^a.index[j];  //In place Swap
            }
        }
    }
}

void prntAry(Array &a,int perLine){
    cout<<endl;
    for(int i=0;i<a.size;i++){
        cout<<a.array[a.index[i]]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}


void fillAry(Array &a,int n){
    a.size=n;
    for(int i=0;i<a.size;i++){
        a.array[i]=rand()%90+10;//[10,99]
        a.index[i]=i;
    }
}