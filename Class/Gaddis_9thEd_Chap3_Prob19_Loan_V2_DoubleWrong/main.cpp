/*
    Author: Dr. Mark E. Lehr
    Date:   March 11th, 2021  11:00am
    Purpose:To Calculate a Monthly Loan Payment
 */

//System Libraries
#include <iostream>    //Input/Output Library
#include <cmath>       //Math Library
#include <iomanip>     //Format Library
using namespace std;   //Library Name-space

//User Libraries

//Global/Universal Constants -- No Global Variables
//Science, Math, Conversions, Higher Dimensioned constants only
const char PERCENT=100;//Conversion to and from Percent

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    double  monPmnt,//Monthly Payment in $'s
           intRate,//Interest Rate in Percent
           loanAmt,//Loan Amount in $'s
           totPaid,//Total Paid for the loan in $'s
           intPaid;//Interest Paid for the loan.
    unsigned char nmCmpd;//Number of compounding periods in months
    
    //Initialize variables
    loanAmt=1.0e4f;      //$10,000
    intRate=1.0f/PERCENT;//1%
    nmCmpd=36;           //36 months
    
    //Process, map inputs to outputs
    float temp=pow(1+intRate,nmCmpd);
    monPmnt=intRate*temp*loanAmt/(temp-1);
    totPaid=nmCmpd*monPmnt;
    intPaid=totPaid-loanAmt;
    
    //Display your initial conditions as well as outputs.
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Loan Amount:            $"<<setw(9)<<loanAmt<<endl;
    cout<<"Monthly Interest Rate:   "<<setw(9)<<intRate*PERCENT<<"%"<<endl;
    cout<<"Number of Payments:      "<<setw(6)<<static_cast<int>(nmCmpd)<<endl;
    cout<<"Monthly Payment         $"<<setw(9)<<monPmnt<<endl;
    cout<<"Amount Paid Back        $"<<setw(9)<<totPaid<<endl;
    cout<<"Interest Paid           $"<<setw(9)<<intPaid<<endl;
    
    //Exit stage right
    return 0;
}