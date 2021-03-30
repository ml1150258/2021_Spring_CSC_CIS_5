/*
    Author: Dr. Mark E. Lehr
    Date:   March 30th, 2021  11:18am
    Purpose:Savings
 */

//System Libraries
#include <iostream>    //Input/Output Library
#include <iomanip>     //Format Library
using namespace std;   //Library Name-space

//User Libraries

//Global/Universal Constants -- No Global Variables
//Science, Math, Conversions, Higher Dimensioned constants only
const int PERCENT=100;

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the Random number seed
    
    //Declare variables
    float pv,//Present Value in $'s
     intRate;//Interest Rate in %
    char numCmpd;//Number of compounding periods in Years
    
    //Initialize variables
    pv=100;           //$100
    intRate=6.0f/PERCENT;//6 PERCENT
    numCmpd=12;//12 years
    
    //Process, map inputs to outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Present Value = $"<<pv<<endl;
    cout<<"Interest Rate = "<<intRate<<endl;
    cout<<"Number of years = "<<static_cast<int>(numCmpd)<<endl;
    cout<<"nYr  Year  Savings  Interest"<<endl;
    int nYrs=0,year=2021;
    do{
        float interest=pv*intRate;
        cout<<setw(3)<<nYrs
            <<setw(6)<<year
            <<setw(9)<<pv
            <<setw(9)<<interest<<endl;
        pv=pv+interest;
        nYrs++;
        year++;
    }while(nYrs<=numCmpd);
    
    //Display your initial conditions as well as outputs.
    
    //Exit stage right
    return 0;
}

