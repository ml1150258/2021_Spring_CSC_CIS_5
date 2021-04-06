/*
    Author: Dr. Mark E. Lehr
    Date:   April 6th, 2021  11:12am
    Purpose:Approximate PI
 */

//System Libraries
#include <iostream>    //Input/Output Library
#include <cmath>       //For exact value of pi
using namespace std;   //Library Name-space

//User Libraries

//Global/Universal Constants -- No Global Variables
//Science, Math, Conversions, Higher Dimensioned constants only
const float PI=4*atan(1);//A definition of PI

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the Random number seed
    
    //Declare variables
    char sign;//The sign of the term
    float apprxPI;//The approximate value of PI
    int nTerms;//Number of terms in the series
    
    //Initialize variables
    apprxPI=1;
    sign=1;
    nTerms=10000;
    
    //Process, map inputs to outputs
    for(int i=2;i<=nTerms;i++){
        sign*=-1;
        apprxPI+=(sign/(2*i-1.0f));
    }
    apprxPI*=4;
    
    //Display your initial conditions as well as outputs.
    cout<<"The approximate value of PI = "<<apprxPI<<" with "
            <<nTerms<<" terms."<<endl;
    cout<<"The exact value of PI = "<<PI<<endl;
    
    //Exit stage right
    return 0;
}

