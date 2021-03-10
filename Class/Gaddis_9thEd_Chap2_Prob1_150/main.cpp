/*
    Author: Dr. Mark E. Lehr
    Date:   March 9th, 2021  5:12pm
    Purpose:Adding 100 and 50
 */

//System Libraries
#include <iostream>    //Input/Output Library
using namespace std;   //Library Name-space

//User Libraries

//Global/Universal Constants -- No Global Variables
//Science, Math, Conversions, Higher Dimensioned constants only

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    unsigned char num1,num2,total;//Three numbers [0,255]
    
    //Initialize variables
    num1=50;
    num2=100;
    
    //Process, map inputs to outputs
    total=num1+num2;
    
    //Display your initial conditions as well as outputs.
    cout<<static_cast<int>(total)<<" = "
        <<static_cast<int>(num1)<<" + "
        <<static_cast<int>(num2)<<endl;
    
    //Exit stage right
    return 0;
}