/*
    Author: Dr. Mark E. Lehr
    Date:   March 2nd, 2021  11:20am
    Purpose:Restaurant Bill
 */

//System Libraries
#include <iostream>    //Input/Output Library
using namespace std;   //Library Name-space

//User Libraries

//Global/Universal Constants -- No Global Variables
//Science, Math, Conversions, Higher Dimensioned constants only
const char CNVPRC=100;//Percentage Conversion to Decimal

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    float mlCost,//Meal Cost in $'s
          slsTax,//Sales Tax Percent
          tipPrc,//Tip Percentage on meal cost and sales tax
          slsTxD,//Sales Tax in $'s
          tipDol,//Tip in Dollars
         totBill;//Total Bill
    
    //Initialize variables
    mlCost=8.867e1f;//88.67
    slsTax=6.75e0f;//6.75% Sales Tax Percent
    tipPrc=2.0e1f;//20% = Tip Percentage
    
    //Process, map inputs to outputs
    slsTxD=mlCost*slsTax/CNVPRC;
    tipDol=tipPrc*(mlCost+slsTxD)/CNVPRC;
    totBill=mlCost+slsTxD+tipDol;
    
    //Display your initial conditions as well as outputs.
    cout<<"The meal cost = $"<<mlCost<<endl;
    cout<<"The Sales tax = $"<<slsTxD<<endl;
    cout<<"The Tip       = $"<<tipDol<<endl;
    cout<<"The Total Bill= $"<<totBill<<endl;
    
    //Exit stage right
    return 0;
}

