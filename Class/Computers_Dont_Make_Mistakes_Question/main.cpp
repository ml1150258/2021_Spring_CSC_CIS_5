/*
    Author: Dr. Mark E. Lehr
    Date:   February 18th, 2021  11:12am
    Purpose:Computers can make mistakes due to bad programming
    Version:First and Last
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
    //Set the Random number seed
    
    //Declare variables
    short a,b,c;
    
    //Initialize variables
    b=16000;
    a=19000;
    
    //Process, map inputs to outputs
    c=a+b;
    
    //Display your initial conditions as well as outputs.
    cout<<c<<" = "<<a<<" + "<<b<<endl;
    
    //Exit stage right
    return 0;
}