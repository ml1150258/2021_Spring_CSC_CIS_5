/*
    Author: Dr. Mark E. Lehr
    Date:   April 6th, 2021  10:17am
    Purpose:Exponential Approximation
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
    int fact,//Factorial
           i,//Dummy Variable to be used as a counter
           n;//Factorial to solve for
    
    //Initialize variables
    n=10;
    fact=1;
    
    //Process, map inputs to outputs
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    
    //Display your initial conditions as well as outputs.
    cout<<n<<"! = "<<fact<<endl;
    
    //Exit stage right
    return 0;
}