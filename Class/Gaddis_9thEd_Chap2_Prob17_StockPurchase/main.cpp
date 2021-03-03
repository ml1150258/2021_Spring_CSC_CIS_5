/*
    Author: Dr. Mark E. Lehr
    Date:   March 2nd, 2021  10:30am
    Purpose:Stock Purchase
 */

//System Libraries
#include <iostream>    //Input/Output Library
using namespace std;   //Library Name-space

//User Libraries

//Global/Universal Constants -- No Global Variables
//Science, Math, Conversions, Higher Dimensioned constants only
const char CNVPRC=100;//Conversion to percent
const char CNVPNS=100;//Conversion to pennies

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    float  stkPrc,//Stock Price in $'s
            comsn,//Commission in %
            cost,//Cost of stock purchase in $'s
            totCst;//Total cost with commission
    unsigned short nShares;//Number of Shares
    
    //Initialize variables
    stkPrc=35.0f;
    comsn=2.0f/CNVPRC;
    nShares=750;
    
    //Process, map inputs to outputs
    cost=stkPrc*nShares;
    //totCst=cost*(1+comsn);//Same as below equation
    totCst=cost+cost*comsn;
    int itotCst=totCst;//Integer Number of Dollars
    int cents=(totCst-itotCst)*CNVPNS;//Integer Number of Pennies
    
    //Display your initial conditions as well as outputs.
    cout<<"The Stock Price = $"<<stkPrc<<"/share"<<endl;
    cout<<"The number of Shares = "<<nShares<<endl;
    cout<<"The Commission = "<<comsn*CNVPRC<<" %"<<endl;
    cout<<"Amount tendered for the acquisition of the Stock = $"<<totCst<<endl;
    //How to use the ternary operator to determine integer number of dimes
    //and pennies for output of .00 or .x0
    cout<<"Amount tendered for the acquisition of the Stock = $"<<itotCst<<
            "."<<(cents/10<1?0:cents/10)<<
                (cents%10<1?0:cents%10)<<endl;
    
    //Exit stage right
    return 0;
}

