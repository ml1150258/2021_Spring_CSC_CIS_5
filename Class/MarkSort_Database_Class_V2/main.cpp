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


//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables Static Array
    Array array;
    
    //Initialize Variables
    array.fillAry(SIZE);
    cout<<"Array before Sorting"<<endl;
    array.prntAry(10);

    //Map Inputs to Outputs -> Process
    array.markSrt();
    
    //Display Inputs/Outputs
    cout<<"Array after Sorting"<<endl;
    array.prntAry(10);
    
    //Exit the Program - Cleanup
    return 0;
}