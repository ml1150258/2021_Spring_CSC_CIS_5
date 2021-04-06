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
           i;//Dummy Variable to be used as a counter
    
    //Initialize variables
    fact=1;
    i=0;
    cout<<i<<"! = "<<fact<<endl;
    
    //Process, map inputs to outputs
    i++;
    fact*=i;
    cout<<i<<"! = "<<fact<<endl;
    
    i++;
    fact*=i;
    cout<<i<<"! = "<<fact<<endl;
    
    i++;
    fact*=i;
    cout<<i<<"! = "<<fact<<endl;
    
    i++;
    fact*=i;
    cout<<i<<"! = "<<fact<<endl;
    
    i++;
    fact*=i;
    cout<<i<<"! = "<<fact<<endl;
    
    i++;
    fact*=i;
    cout<<i<<"! = "<<fact<<endl;
    
    i++;
    fact*=i;
    cout<<i<<"! = "<<fact<<endl;
    
    
    //Display your initial conditions as well as outputs.
    
    //Exit stage right
    return 0;
}