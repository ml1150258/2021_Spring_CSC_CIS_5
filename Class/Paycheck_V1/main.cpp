/*
    Author: Dr. Mark E. Lehr
    Date:   March 16th, 2021  10:12am
    Purpose:Calculate a paycheck
 */

//System Libraries
#include <iostream>    //Input/Output Library
#include <iomanip>     //Format Library
using namespace std;   //Library Name-space

//User Libraries

//Global/Universal Constants -- No Global Variables
//Science, Math, Conversions, Higher Dimensioned constants only

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    float hrsWrkd,//Hours worked
          payRate,//Pay Rate in $'s/hr
          payChck;//Paycheck in $'s
    const char OVRTIME=40;//Time at which you receive double the amount
    
    //Initialize variables
    cout<<"This program calculates a paycheck from the following inputs"<<endl;
    cout<<"Input hours worked and pay rate in $'s/hr"<<endl;
    cin>>hrsWrkd>>payRate;
    
    //Process, map inputs to outputs
    payChck=hrsWrkd*payRate;      //Straight Time
    payChck+=hrsWrkd>OVRTIME?     //Check for Overtime
        (hrsWrkd-OVRTIME)*payRate://Calculate Overtime
        0;                        //Already put in the straight time
    
    //Display your initial conditions as well as outputs.
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Paycheck = $"<<payChck<<" for "<<hrsWrkd<<" hours"
            <<" @ "<<payRate<<"'s/hr"<<endl;
    
    //Exit stage right
    return 0;
}

