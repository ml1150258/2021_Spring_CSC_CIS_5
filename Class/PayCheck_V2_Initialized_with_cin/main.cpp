/*
    Author: Dr. Mark E. Lehr
    Date:   February 23rd, 2021  11:18am
    Purpose:Calculate a Paycheck with Straight Time
 */

//System Libraries
#include <iostream>    //Input/Output Library
using namespace std;   //Library Name-space

//User Libraries

//Global/Universal Constants -- No Global Variables
//Science, Math, Conversions, Higher Dimensioned constants only

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv){
    //Declare variables
    float  payRate,//Pay rate in $'s -> Input
           hrsWrkd,//Hours worked in hours -> Input
           payChk; //Paycheck in $'s -> Output
    
    //Initialize variables
    cout<<"Input the Pay rate in $'s/hr"<<endl;
    cin>>payRate;
    cout<<"Input the Hours Worked in hrs"<<endl;
    cin>>hrsWrkd;
    
    //Process, map inputs to outputs
    payChk=payRate*hrsWrkd;
    
    //Display your initial conditions as well as outputs.
    cout<<"The paycheck = $"<<payChk<<" given "<<hrsWrkd<<" hrs and "
        <<"a payRate = $"<<payRate<<"/hr"<<endl;
    
    //Exit stage right
    return 0;
}